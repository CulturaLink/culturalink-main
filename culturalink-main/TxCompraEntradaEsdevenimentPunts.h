#pragma once
#include "PassarelaCiutada.h"
#include "PassarelaEsdeveniment.h"
#include "CercadoraEsdeveniment.h"
#include "CercadoraCiutada.h"
#include "Transaccio.h"
#include "UsuariIniciat.h"
#include <vector>
#include <string>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Collections::Generic;

const string errorAforament = "No queden entrades disponibles";

ref class TxCompraEntradaEsdevenimentPunts : public Transaccio
{
private:   
	String^ nomEsd;
	String^ nickCiut;
public:
	TxCompraEntradaEsdevenimentPunts(String^ nomEsd2);
	void executar() override;
};
