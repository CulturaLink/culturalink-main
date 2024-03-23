#pragma once
#include "pch.h"
#include "PassarelaAjuntament.h"

PassarelaAjuntament::PassarelaAjuntament() {
	nom = nullptr;
	clau = nullptr;
	cp = 0;
	telefon = 0;
	correu = nullptr;
	contrasenya = nullptr;
}

PassarelaAjuntament::PassarelaAjuntament(String^ nomP) {

	String^ nom = nomP;
	String^ clau = "";
	int cp = 0;
	int telefon = 0;
	String^ correu = "";
	String^ contrasenya = "";

}
PassarelaAjuntament::PassarelaAjuntament(String^ _nom, String^ _clau, int _cp, int _telefon, String^ _correu, String^ _contrasenya) {
	nom = _nom;
	clau = _clau;
	cp = _cp;
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
		cp = other.cp;
		telefon = other.telefon;
		correu = other.correu;
		contrasenya = other.contrasenya;
	}
	return *this;
}

PassarelaAjuntament::PassarelaAjuntament(const PassarelaAjuntament% p1) {

	nom = p1.nom;
	clau = p1.clau;
	cp = p1.cp;
	telefon = p1.telefon;
	correu = p1.correu;
	contrasenya = p1.contrasenya;
}

String^ PassarelaAjuntament::getNom() {
	return nom;
}

int PassarelaAjuntament::getCP() {
	return cp;
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