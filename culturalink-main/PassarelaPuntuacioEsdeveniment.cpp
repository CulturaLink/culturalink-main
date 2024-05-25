#pragma once
#include "pch.h"
#include "PassarelaPuntuacioEsdeveniment.h"

PassarelaPuntuacioEsdeveniment::PassarelaPuntuacioEsdeveniment() {
	_nickCiutada = "";
	_puntuacioEsdeveniment = 0;
	_nomEsdeveniment = "";
}


PassarelaPuntuacioEsdeveniment::PassarelaPuntuacioEsdeveniment(String^ nomEsdeveniment, String^ nickCiutada) {

	_nickCiutada = nickCiutada;
	_nomEsdeveniment = nomEsdeveniment;
}

PassarelaPuntuacioEsdeveniment::PassarelaPuntuacioEsdeveniment(String^ nomEsdeveniment, String^ nickCiutada, int puntuacioEsdeveniment) {

	_nickCiutada = nickCiutada;
	_puntuacioEsdeveniment = puntuacioEsdeveniment;
	_nomEsdeveniment = nomEsdeveniment;
}




PassarelaPuntuacioEsdeveniment% PassarelaPuntuacioEsdeveniment::operator=(const PassarelaPuntuacioEsdeveniment% other)
{
	if (this != % other)
	{
		_nickCiutada = other._nickCiutada;
		_puntuacioEsdeveniment = other._puntuacioEsdeveniment;
		_nomEsdeveniment = other._nomEsdeveniment;
	}
	return *this;
}

PassarelaPuntuacioEsdeveniment::PassarelaPuntuacioEsdeveniment(const PassarelaPuntuacioEsdeveniment% p1) {

	_nickCiutada = p1._nickCiutada;
	_puntuacioEsdeveniment = p1._puntuacioEsdeveniment;
	_nomEsdeveniment = p1._nomEsdeveniment;
}

String^ PassarelaPuntuacioEsdeveniment::getNickCiutada() {
	return _nickCiutada;
}

String^ PassarelaPuntuacioEsdeveniment::getNomEsdeveniment() {
	return _nomEsdeveniment;
}

int PassarelaPuntuacioEsdeveniment::getPuntuacioEsdeveniment() {
	return _puntuacioEsdeveniment;
}





void PassarelaPuntuacioEsdeveniment::posaPuntuacio(int puntuacioEsdeveniment) {
	_puntuacioEsdeveniment = puntuacioEsdeveniment;
}


void PassarelaPuntuacioEsdeveniment::insereix() {
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();

	PassarelaCiutada^ passEnt = safe_cast<PassarelaCiutada^>(usuario->getUsuari());

	String^ nickString = passEnt->getNickname()->ToString();


	String^ sql = "INSERT INTO amep14.puntuacio_esdeveniment "
		"(nom_esdeveniment, puntuacio, nick_ciutada) "
		"VALUES ('" + _nomEsdeveniment + "', " + _puntuacioEsdeveniment + ", '" + nickString + "');";


	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

	MySqlDataReader^ dataReader;
	try {
		// obrim la connexió
		conn->Open();
		// executem la comanda creada abans del try
		dataReader = cmd->ExecuteReader();
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


void PassarelaPuntuacioEsdeveniment::modifica() {
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	

	try {
		// obrim la connexió
		conn->Open();

	

		String^ sql = "UPDATE amep14.puntuacio_esdeveniment SET "
			"puntuacio = " + _puntuacioEsdeveniment + " "
			"WHERE nom_esdeveniment = '" + _nomEsdeveniment + "' AND "
			"nick_ciutada = '" + _nickCiutada + "';";

		MySqlCommand^ cmd2 = gcnew MySqlCommand(sql, conn);

		MySqlDataReader^ dataReader2;

		// executem la comanda creada abans del try
		dataReader2 = cmd2->ExecuteReader();
	}
	catch (Exception^ ex) {
		// codi per mostrar l’error en una finestra
		//MessageBox::Show(ex->Message);
		throw ex;
	}
	finally {
		// si tot va bé es tanca la connexió
		conn->Close();
	}
} 