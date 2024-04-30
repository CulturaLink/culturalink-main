#pragma once
#include <iostream>
#include <string>
#include "config.h"
#include "UsuariIniciat.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

ref class PassarelaInscripcio
{
public:
	PassarelaInscripcio();
	PassarelaInscripcio(String^ nick, String^ dataC, int preuP, String^ esdev);

	String^ getNickCiutada();
	String^ getDataCompra();
	int getPreuPagat();
	String^ getNomEsdeveniment();

private:
	String^ _nickC; //nick_ciutada
	String^ _dataComp; //data
	int _preuP; //preu_pagat
	String^ _nEsdev; //nom_esdeveniment
};


