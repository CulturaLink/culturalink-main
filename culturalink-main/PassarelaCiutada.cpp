#include "pch.h"
#include "PassarelaCiutada.h"
#include "MainForm.h"
using namespace System::Windows::Forms;


PassarelaCiutada::PassarelaCiutada()
{
	_nickname = nullptr;
	_nom_complet = nullptr;
	_contrasenya = nullptr;
	_correu = nullptr;
	_data_naix = nullptr;
	_diners = 0;
	_punts = 0;
}

PassarelaCiutada::PassarelaCiutada(const PassarelaCiutada% p1) {
	_nickname = p1._nickname;
	_nom_complet = p1._nom_complet;
	_contrasenya = p1._contrasenya;
	_correu = p1._correu;
	_data_naix = p1._data_naix;
	_diners = p1._diners;
	_punts = p1._punts;
}

PassarelaCiutada% PassarelaCiutada::operator=(const PassarelaCiutada% other)
{
	if (this != % other)
	{
		_nickname = other._nickname;
		_nom_complet = other._nom_complet;
		_contrasenya = other._contrasenya;
		_correu = other._correu;
		_data_naix = other._data_naix;
		_diners = other._diners;
		_punts = other._punts;
	}
	return *this;
}

void PassarelaCiutada::crear(String^ name, String^ fullName, String^ password, String^ email, String^ date)
{
	_nickname = name;
	_nom_complet = fullName;
	_contrasenya = password;
	_correu = email;
	_data_naix = date;
	_diners = 0;
	_punts = 0;
}

//Register
void PassarelaCiutada::insereix() {

	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "INSERT INTO amep14.ciutada (nickname, nom_complet, contrasenya, correu, data_naix, diners, punts)"
		"VALUES(@name, @fullName, @password, @email, @date, @diners, @punts);";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	cmd->Parameters->AddWithValue("@name", _nickname);
	cmd->Parameters->AddWithValue("@fullName", _nom_complet);
	cmd->Parameters->AddWithValue("@password", _contrasenya);
	cmd->Parameters->AddWithValue("@email", _correu);
	cmd->Parameters->AddWithValue("@date", _data_naix);
	cmd->Parameters->AddWithValue("@diners", 0);
	cmd->Parameters->AddWithValue("@punts", 0);

	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda creada abans del try
		dataReader = cmd->ExecuteReader();
		MessageBox::Show("Data inserted successfully.");
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
		throw runtime_error("El format de la data no es correcte o l'usuai ja existeix");
	}
	finally {
		// si tot va bé es tanca la connexió
		conn->Close();
	}
}

//Esborrar Ciutada
void PassarelaCiutada::esborra(String^ nickname) {
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "DELETE FROM ciutada WHERE nickname = @nickname;";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	cmd->Parameters->AddWithValue("@nickname", nickname);

	try {
		conn->Open();  // Open the connection
		cmd->ExecuteNonQuery();  // Execute the DELETE command
		MessageBox::Show("User deleted successfully.");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);  // Show error message if something goes wrong
	}
	finally {
		conn->Close();  // Close the connection regardless of the result
	}
}
void PassarelaCiutada::borrar_punts(int^ quantitat, int^ punts2)
{
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Uso de parámetros en la consulta SQL
	String^ sql = "UPDATE ciutada SET punts = @punts WHERE nickname = @nickname";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@nickname", _nickname);// Asignación del valor del parámetro
	int puntsz =*(quantitat)* *(punts2);
	cmd->Parameters->AddWithValue("@punts", *(_punts) - puntsz);// Asignación del valor del parámetro
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda (cmd) que s’ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informació per crear un objecte de tipus Ciutada
			// Agafarem les columnes per índex, la primera és la 0 (nickname ja el tenim)

		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		//MessageBox::Show("Connexio DB exitosa!");
		conn->Close();
	}

}
void PassarelaCiutada::borrar_diners(int^ preuEsd, int^ quantitat)
{
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Uso de parámetros en la consulta SQL
	String^ sql = "UPDATE ciutada SET diners = @diners WHERE nickname = @nickname";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@nickname", _nickname);// Asignación del valor del parámetro
	int dinersQuantitat = *(preuEsd) * *(quantitat);
	cmd->Parameters->AddWithValue("@diners",*(_diners) - dinersQuantitat);// Asignación del valor del parámetro
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda (cmd) que s’ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informació per crear un objecte de tipus Ciutada
			// Agafarem les columnes per índex, la primera és la 0 (nickname ja el tenim)

		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		//MessageBox::Show("Connexio DB exitosa!");
		conn->Close();
	}
}
void PassarelaCiutada::afegir_punts_entrada(int^ punts)
{
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Uso de parámetros en la consulta SQL
	String^ sql = "UPDATE ciutada SET punts = @punts WHERE nickname = @nickname";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@nickname", _nickname);// Asignación del valor del parámetro
	int punts2 = *(_punts)+*(punts);
	cmd->Parameters->AddWithValue("@punts", punts2);// Asignación del valor del parámetro
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda (cmd) que s’ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informació per crear un objecte de tipus Ciutada
			// Agafarem les columnes per índex, la primera és la 0 (nickname ja el tenim)

		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		//MessageBox::Show("Connexio DB exitosa!");
		conn->Close();
	}
}

//Login
PassarelaCiutada::PassarelaCiutada(String^ nickname) {
	//DATABASE
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Uso de parámetros en la consulta SQL
	String^ sql = "SELECT * FROM ciutada WHERE nickname = @nickname";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@nickname", nickname); // Asignación del valor del parámetro
	MySqlDataReader^ dataReader;

	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda (cmd) que s’ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informació per crear un objecte de tipus Ciutada
			// Agafarem les columnes per índex, la primera és la 0 (nickname ja el tenim)
			_nickname = nickname;
			_nom_complet = dataReader->GetString(1);
			_contrasenya = dataReader->GetString(2);
			_correu = dataReader->GetString(3);
			_data_naix = dataReader->GetMySqlDateTime(4).ToString();
			_diners = dataReader->GetInt32(5);
			_punts = dataReader->GetInt32(6);
		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		//MessageBox::Show("Connexio DB exitosa!");
		conn->Close();
	}



}
void PassarelaCiutada::devolucio_punts(int^ punts)
{
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Uso de parámetros en la consulta SQL
	String^ sql = "UPDATE ciutada SET punts = @punts WHERE nickname = @nickname";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@nickname", _nickname);// Asignación del valor del parámetro
	int punts2 = *(_punts)+*(punts);
	cmd->Parameters->AddWithValue("@punts", punts2);// Asignación del valor del parámetro
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda (cmd) que s’ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informació per crear un objecte de tipus Ciutada
			// Agafarem les columnes per índex, la primera és la 0 (nickname ja el tenim)

		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		//MessageBox::Show("Connexio DB exitosa!");
		conn->Close();
	}
}
void PassarelaCiutada::devolucio_diners(int^ diners)
{
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Uso de parámetros en la consulta SQL
	String^ sql = "UPDATE ciutada SET diners = @diners WHERE nickname = @nickname";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@nickname", _nickname);// Asignación del valor del parámetro
	int diners2 = *(_diners)+*(diners);
	cmd->Parameters->AddWithValue("@diners", diners2);// Asignación del valor del parámetro
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda (cmd) que s’ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informació per crear un objecte de tipus Ciutada
			// Agafarem les columnes per índex, la primera és la 0 (nickname ja el tenim)

		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		//MessageBox::Show("Connexio DB exitosa!");
		conn->Close();
	}
}
PassarelaCiutada::PassarelaCiutada(String^ nickname, String^ nom_complet, String^ correu) {
	_nickname = nickname;
	_nom_complet = nom_complet;
	_correu = correu;
}

String^ PassarelaCiutada::getContrasenya()
{
	return _contrasenya;
}
String^ PassarelaCiutada::getNickname()
{
	return _nickname;
}