#pragma once

#include "PassarelaCiutada.h"
#include "PassarelaPuntuacioEsdeveniment.h"
#include "CercadoraPuntuacioEsdeveniment.h"
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


ref class TxConsultaPuntuacioEsdeveniment : public Transaccio
{
private:
	String^ _nomEsdeveniment;
	PassarelaPuntuacioEsdeveniment _pPunt;
public:
	TxConsultaPuntuacioEsdeveniment(String^ nomEsdeveniment);
	void executar() override;
	int getResult();
};