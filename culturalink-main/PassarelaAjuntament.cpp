#pragma once
#include "pch.h"
#include "PassarelaAjuntament.h"

PassarelaAjuntament::PassarelaAjuntament() {
	nom = nullptr;
	clau = nullptr;
	poblacio = 0;
	telefon = 0;
	correu = nullptr;
	contrasenya = nullptr;
}

PassarelaAjuntament::PassarelaAjuntament(String^ nomP) {

	String^ nom = nomP;
	String^ clau = "";
	int poblacio = 0;
	int telefon = 0;
	String^ correu = "";
	String^ contrasenya = "";

}
PassarelaAjuntament::PassarelaAjuntament(String^ _nom, String^ _clau, int _poblacio, int _telefon, String^ _correu, String^ _contrasenya) {
	nom = _nom;
	clau = _clau;
	poblacio = _poblacio;
	telefon = _telefon;
	correu = _correu;
	contrasenya = _contrasenya;
}

PassarelaAjuntament% PassarelaAjuntament::operator=(const PassarelaAjuntament% other)
{
	if (this != % other)
	{
		nom = other.nom;
		clau = other.clau;
		poblacio = other.poblacio;
		telefon = other.telefon;
		correu = other.correu;
		contrasenya = other.contrasenya;
	}
	return *this;
}

PassarelaAjuntament::PassarelaAjuntament(const PassarelaAjuntament% p1) {

	nom = p1.nom;
	clau = p1.clau;
	poblacio = p1.poblacio;
	telefon = p1.telefon;
	correu = p1.correu;
	contrasenya = p1.contrasenya;
}

String^ PassarelaAjuntament::getNom() {
	return nom;
}

int PassarelaAjuntament::getPoblacio() {
	return poblacio;
}

int PassarelaAjuntament::getTelf() {
	return telefon;
}

String^ PassarelaAjuntament::getCorreu() {
	return correu;
}

String^ PassarelaAjuntament::getClau() {
	return clau;
}

String^ PassarelaAjuntament::getContrasenya() {
	return contrasenya;
}

void PassarelaAjuntament::posaNom(String^ nomAj) {
	nom = nomAj;
}

void PassarelaAjuntament::posaClau(String^ clauAj) {
	clau = clauAj;
}

void PassarelaAjuntament::posaPoblacio(int poblacioAj) {
	poblacio = poblacioAj;
}

void PassarelaAjuntament::posaTelefon(int telAj) {
	telefon = telAj;
}

void PassarelaAjuntament::posaCorreu(String^ correuAj) {
	correu = correuAj;
}

void PassarelaAjuntament::posaContrasenya(String^ contrasenyaAj) {
	contrasenya = contrasenyaAj;
}

void PassarelaAjuntament::modifica() {
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

	// Comprobar si el correu ya existe, throw excepcion en caso que si
	String^ sqlCheckCorreu = "SELECT COUNT(*) FROM amep14.ajuntament WHERE correu_electronic_ajuntament = '" + getCorreu() + "' AND clau_ajuntament <> '" + getClau() + "';";

	try {
		// obrim la connexi
		conn->Open();

		MySqlCommand^ cmd1 = gcnew MySqlCommand(sqlCheckCorreu, conn);
		MySqlDataReader^ dataReader1;
		dataReader1 = cmd1->ExecuteReader();

		int numAj = 0;

		if (dataReader1->Read()) { // Check if there are rows to read 
			numAj = Convert::ToInt32(dataReader1[0]); // Read the count from the first column (index 0)
		}

		if (numAj != 0) throw gcnew CorreuExisteix("Correu ja existeix!");

		dataReader1->Close();
		//String^ clauString = passAju->getClau()->ToString();

		String^ sql = "UPDATE amep14.ajuntament SET "
			//"nom_ajuntament = '" + passAju->getNom() + " "
			//"clau_ajuntament = '" + passAju->getClau() + " "
			"poblacio_ajuntament = " + getPoblacio() + ", "
			"telefon_ajuntament = " + getTelf() + ", "
			"correu_electronic_ajuntament = '" + getCorreu() + "', "
			"contrasenya_ajuntament = '" + getContrasenya() + "' "
			"WHERE clau_ajuntament = '" + getClau() + "';";

		MySqlCommand^ cmd2 = gcnew MySqlCommand(sql, conn);

		MySqlDataReader^ dataReader2;

		// executem la comanda creada abans del try
		dataReader2 = cmd2->ExecuteReader();
	}
	catch (Exception^ ex) {
		// codi per mostrar lerror en una finestra
		//MessageBox::Show(ex->Message);
		throw ex;
	}
	finally {
		// si tot va b es tanca la connexi
		conn->Close();
	}
}