#include "pch.h"
#include "CercadoraCiutada.h"
#include "MainForm.h"

using namespace System::Windows::Forms;

CercadoraCiutada::CercadoraCiutada() {}

PassarelaCiutada CercadoraCiutada::cercaCiutada(String^ nickname)
{
	//DATABASE
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Uso de par�metros en la consulta SQL
	String^ sql = "SELECT * FROM ciutada WHERE nickname = @nickname";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@nickname", nickname); // Asignaci�n del valor del par�metro
	MySqlDataReader^ dataReader;

	try {
		// obrim la connexi�
		conn->Open();
		// executem la comanda (cmd) que s�ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informaci� per crear un objecte de tipus Ciutada
			// Agafarem les columnes per �ndex, la primera �s la 0 (nickname ja el tenim)
			String^ nick = dataReader->GetString(0);
			String^ nomCp = dataReader->GetString(1);
			String^ paswd = dataReader->GetString(2);
			String^ correu = dataReader->GetString(3);
			String^ dataN = dataReader->GetMySqlDateTime(4).ToString();
			int diners = dataReader->GetInt32(5);
			int punts = dataReader->GetInt32(6);

			PassarelaCiutada pC(nick, nomCp, paswd, correu, dataN, diners, punts);
			return pC;
		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l�error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va b� es tanca la connexi�
		//MessageBox::Show("Connexio DB exitosa!");
		conn->Close();
	}
}