#pragma once
#include "pch.h"
#include "CercadoraAjuntament.h"

CercadoraAjuntament::CercadoraAjuntament() {}

PassarelaAjuntament CercadoraAjuntament::cercaAjuntament(String^ clau) {

	//DATABASE
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Uso de parámetros en la consulta SQL
	String^ sql = "SELECT * FROM ajuntament WHERE clau_ajuntament = @clau";
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->Parameters->AddWithValue("@clau", clau); // Asignación del valor del parámetro
	MySqlDataReader^ dataReader;

	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda (cmd) que s’ha creat abans del try
		dataReader = cmd->ExecuteReader();
		if (dataReader->Read()) {
			
			String^ _nom = dataReader->GetString(0);
			String^ _clau = dataReader->GetString(1);
			int _cp = dataReader->GetInt32(2);
			int _telefon = dataReader->GetInt32(3);
			String^ _correu = dataReader->GetString(4);
			String^ _contrasenya = dataReader->GetString(5);

			PassarelaAjuntament ajt(_nom, _clau, _cp, _telefon, _correu, _contrasenya);
			return ajt;
		}
		else {
			PassarelaAjuntament ajt;
			return ajt;
		}
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		MessageBox::Show(ex->Message);
	}
	finally {
		// si tot va bé es tanca la connexió
		// MessageBox::Show("Connexio DB exitosa!");
		conn->Close();
	}

}