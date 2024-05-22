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

PassarelaCiutada::PassarelaCiutada(String^ name, String^ fullName, String^ password, String^ email, String^ date, int diners, int punts)
{
	_nickname = name;
	_nom_complet = fullName;
	_contrasenya = password;
	_correu = email;
	_data_naix = date;
	_diners = diners;
	_punts = punts;
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
	}
	finally {
		// si tot va bé es tanca la connexió
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