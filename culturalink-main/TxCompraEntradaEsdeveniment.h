#pragma once
#include "PassarelaCiutada.h"
#include "PassarelaEsdeveniment.h"
#include "CercadoraEsdeveniment.h"
#include "Transaccio.h"
#include "UsuariIniciat.h"
#include <vector>
#include <string>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Collections::Generic;

ref class TxCompraEntradaEsdeveniment : public Transaccio
{
private:   
public:
	void executar() override;
};
