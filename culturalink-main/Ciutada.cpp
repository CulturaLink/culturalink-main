#include "pch.h"
#include "Ciutada.h"
#include "MainForm.h"
using namespace System::Windows::Forms;

//Ciutada::Ciutada() {
//	_nickname = "";
//	_nom_complet = "";
//	_correu = "";
//}

//Login
Ciutada::Ciutada(String^ nickname) {
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
			_nom_complet = dataReader->GetString(1);
			_contrasenya = dataReader->GetString(2);
			_correu = dataReader->GetString(3);
			//_data_naix = dataReader->GetDateTime(4);
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
		MessageBox::Show("Connexio DB exitosa!");
		conn->Close();
	}



}

Ciutada::Ciutada(String^ nickname, String^ nom_complet, String^ correu) {
	_nickname = nickname;
	_nom_complet = nom_complet;
	_correu = correu;
}

String^ Ciutada::getContrasenya()
{
	return _contrasenya;
}
