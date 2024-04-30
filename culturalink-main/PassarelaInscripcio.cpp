#include "pch.h"
#include "PassarelaInscripcio.h"

PassarelaInscripcio::PassarelaInscripcio() {
	_nickC = "";
	_dataComp = "";
	_preuP = 0;
	_nEsdev = "";
}

PassarelaInscripcio::PassarelaInscripcio(String^ nick, String^ dataC, int preuP, String^ esdev) {
	_nickC = nick;
	_dataComp = dataC;
	_preuP = preuP;
	_nEsdev = esdev;
}

String^ PassarelaInscripcio::getNickCiutada() {
	return _nickC;
}

String^ PassarelaInscripcio::getDataCompra() {
	return _dataComp;
}

int PassarelaInscripcio::getPreuPagat() {
	return _preuP;
}

String^ PassarelaInscripcio::getNomEsdeveniment() {
	return _nEsdev;
}
