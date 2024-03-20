#include "pch.h"
#include "CercadoraEntitat.h"

CercadoraEntitat::CercadoraEntitat() {}
PassarelaEntitat CercadoraEntitat::cercaEntitat(String^ correuE)
{
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	String^ sql = "SELECT * FROM entitat WHERE correu='" + correuE + "'";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		// executem la comanda (cmd) que s’ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informació per crear un objecte de tipus Professor
			// Agafarem les columnes per índex, la primera és la 0
			String^ id = dataReader->GetString(0);
			String^ nom = dataReader->GetString(1);
			String^ contrasenya = dataReader->GetString(2);
			String^ telefon = dataReader->GetString(3);
			String^ correu = dataReader->GetString(4);
			PassarelaEntitat p2(id, nom, contrasenya, Convert::ToInt32(telefon), correu);
			conn->Close();
			return p2;

		}
		else throw(EntitatNoExisteix);
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
}