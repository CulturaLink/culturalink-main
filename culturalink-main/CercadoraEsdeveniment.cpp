#pragma once
#include "pch.h"
#include "CercadoraEsdeveniment.h"

CercadoraEsdeveniment::CercadoraEsdeveniment() {}

PassarelaEsdeveniment CercadoraEsdeveniment::cercaEsdeveniment(String^ clau) {

	//DATABASE
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Uso de parámetros en la consulta SQL
	String^ sql = "SELECT * FROM esdeveniment WHERE id_esdeveniment = @clau";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@clau", clau); // Asignación del valor del parámetro
	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda (cmd) que s’ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {

			int _idEntitat = dataReader->GetInt32(0);
			float _preuEsdeveniment = dataReader->GetFloat(1);
			String^ _ajEsdeveniment = dataReader->GetString(2);
			String^ _descEsdeveniment = dataReader->GetString(3);
			String^ _nomEsdeveniment = dataReader->GetString(4);

			
			PassarelaEsdeveniment P1 (_idEntitat, _preuEsdeveniment, _ajEsdeveniment, _descEsdeveniment, _nomEsdeveniment);
			return P1;
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