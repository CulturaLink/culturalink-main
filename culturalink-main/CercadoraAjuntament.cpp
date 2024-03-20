#include "pch.h"
#include "CercadoraAjuntament.h"

PassarelaAjuntament CercadoraAjuntament::CercadoraAjuntament(String^ clau) {
	//DATABASE
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Uso de par�metros en la consulta SQL
	String^ sql = "SELECT * FROM ajuntament WHERE clau = " + clau +"";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dataReader;

	PassarelaAjuntament ajt;

	try {
		// obrim la connexi�
		conn->Open();
		// executem la comanda (cmd) que s�ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			// Es llegeix la informaci� per crear un objecte de tipus Ciutada
			// Agafarem les columnes per �ndex, la primera �s la 0 (nickname ja el tenim)
			String^ _nom = dataReader->GetString(0);
			String^ _clau = dataReader->GetString(1);
			int _cp = dataReader->GetInt32(2);
			int _telefon = dataReader->GetInt32(3);
			String^ _correu = dataReader->GetString(4);

			ajt(_nom, _clau, _cp, _telefon, _correu);
		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l�error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va b� es tanca la connexi�
		MessageBox::Show("Connexio DB exitosa!");
		conn->Close();
	}
	return;
}
CercadoraAjuntament::CercadoraAjuntament(){}