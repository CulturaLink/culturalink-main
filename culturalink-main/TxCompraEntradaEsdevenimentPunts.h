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
const string errorPuntsInsuficients = "No hi ha punts suficients per a realitzar la compra";
ref class TxCompraEntradaEsdevenimentPunts : public Transaccio
{
private:   
	String^ nomEsd;
public:
	TxCompraEntradaEsdevenimentPunts(String^ nomEsd2);
	void executar() override;
};
