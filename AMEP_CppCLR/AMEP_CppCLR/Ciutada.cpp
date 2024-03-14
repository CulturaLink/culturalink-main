#include "pch.h"
#include "Ciutada.h"

Ciutada::Ciutada() {
	_nickname = "";
	_nom_complet = "";
	_correu = "";
}

Ciutada::Ciutada(String^ nickname, String^ nom_complet, String^ correu) {
	_nickname = nickname;
	_nom_complet = nom_complet;
	_correu = correu;
}