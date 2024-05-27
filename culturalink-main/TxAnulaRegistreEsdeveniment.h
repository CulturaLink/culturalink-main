#pragma once
#include "CercadoraInscripcio.h"
#include "PassarelaEsdeveniment.h"
#include "CercadoraEsdeveniment.h"
#include "CercadoraCiutada.h"
#include "UsuariIniciat.h"
#include <iostream>
#include <list>

using namespace System::Collections::Generic; // Para usar List<T>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxAnulaRegistreEsdeveniment
{
public:
	TxAnulaRegistreEsdeveniment(String^ nom_esdI);
	void executar();

private:
	String^ nom_esdeveniment;
};


