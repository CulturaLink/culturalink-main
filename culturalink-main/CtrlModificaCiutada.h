#pragma once

#include "PassarelaCiutada.h"
#include "TxConsultaCiutada.h"
#include <vector>
#include <iostream>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class CtrlModificaCiutada
{
private:
	PassarelaCiutada^ ciutada;

public:
	CtrlModificaCiutada();
	void modificaCiutada(String^ nNomC, String^ nCorr, String^ nDat, String^ nCtr);
};

