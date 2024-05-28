#pragma once
#include "PassarelaCiutada.h"
#include "PassarelaEsdeveniment.h"
#include "CercadoraEsdeveniment.h"
#include "CercadoraCiutada.h"
#include "PassarelaInscripcio.h"
#include "CercadoraInscripcio.h"
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

const string errorAforament2 = "No queden entrades disponibles";
const string errorDinersInsuficients = "No hi ha diners suficients per a realitzar la compra";
ref class TxCompraEntradaEsdevenimentDiners : public Transaccio
{
private:
	String^ nomEsd;
	int^ quantitat_entrad;
public:
	TxCompraEntradaEsdevenimentDiners(String^ nomEsd2, int^ quantitat_entrad2);
	void executar() override;
};