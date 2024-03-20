#pragma once
#include "pch.h"
#include "PassarelaAjuntament.h"

PassarelaAjuntament::PassarelaAjuntament(){}
PassarelaAjuntament::PassarelaAjuntament(String^ _nom, String^ _clau, int _cp, int _telefon, String^ _correu) {
	nom = _nom;
	clau = _clau;
	cp = _cp;
	telefon = _telefon;
	correu = _correu;
}
