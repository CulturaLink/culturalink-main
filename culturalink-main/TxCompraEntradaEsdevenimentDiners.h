#pragma once
#include "PassarelaCiutada.h"
#include "PassarelaEsdeveniment.h"
#include "CercadoraEsdeveniment.h"
#include "CercadoraCiutada.h"
#include "PassarelaInscripcio.h"
#include "Transaccio.h"
#include "UsuariIniciat.h"
#include <vector>
#include <string>
#include <chrono>
#include <ctime>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Collections::Generic;

const string errorAforament = "No queden entrades disponibles";
const string errorDinersInsuficients = "No hi ha diners suficients per a realitzar la compra";
ref class TxCompraEntradaEsdevenimentDiners : public Transaccio
{
private:   
	String^ nomEsd;
public:
	TxCompraEntradaEsdevenimentDiners(String^ nomEsd2);
	void executar() override;
};

