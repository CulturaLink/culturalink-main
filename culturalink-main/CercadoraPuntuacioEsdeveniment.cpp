#include "pch.h"
#include "CercadoraPuntuacioEsdeveniment.h"

using namespace System::Windows::Forms;



CercadoraPuntuacioEsdeveniment::CercadoraPuntuacioEsdeveniment() {

}

PassarelaPuntuacioEsdeveniment CercadoraPuntuacioEsdeveniment::cercaPuntuacio(String^ nomEsdeveniment, String^ nickCiutada){
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	// Comprobar si el correu ya existe, throw excepcion en caso que si
	String^ sqlCheckPuntuacioExisteix = "SELECT COUNT(*) FROM amep14.puntuacio_esdeveniment WHERE nom_esdeveniment = '" + nomEsdeveniment + "' AND nick_ciutada = '" + nickCiutada + "';";

	try {
		// obrim la connexió
		conn->Open();

		MySqlCommand^ cmd1 = gcnew MySqlCommand(sqlCheckPuntuacioExisteix, conn);
		MySqlDataReader^ dataReader1;
		dataReader1 = cmd1->ExecuteReader();

		int numPunt = 0;
		

		if (dataReader1->Read()) { // Check if there are rows to read 
			numPunt = Convert::ToInt32(dataReader1[0]); // Read the count from the first column (index 0)
		}

		//if (numPunt == 0) throw gcnew CorreuExisteix("Puntuacio ja existeix!");

		dataReader1->Close();

		if (numPunt != 0) {

			String^ sql = "SELECT * FROM puntuacio_esdeveniment "
				"WHERE nom_esdeveniment='" + nomEsdeveniment + "' AND "
				"nick_ciutada='" + nickCiutada + "';";
			

			MySqlCommand^ cmd2 = gcnew MySqlCommand(sql, conn);

			MySqlDataReader^ dataReader2;
			dataReader2 = cmd2->ExecuteReader();
			int puntuacio = 0;
			if (dataReader2->Read()) {
				puntuacio = dataReader2->GetInt32(1);
			}
			// executem la comanda creada abans del try

			PassarelaPuntuacioEsdeveniment pPunt(nomEsdeveniment,nickCiutada,puntuacio);
			return pPunt;
		}
		else {
			PassarelaPuntuacioEsdeveniment pPuntBuit;
			return pPuntBuit;
		}
	}  catch (Exception^ ex) {
	    // codi per mostrar l’error en una finestra
		//MessageBox::Show(ex->Message);
		throw ex;
	}
	finally {
		// si tot va bé es tanca la connexió
		conn->Close();
	}
}
