#pragma once
#include "PassarelaEntitat.h"
#include "TxConsultaEntitat.h"
#include <vector>
#include <iostream>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class CtrlModificaEntitat {

private:
	PassarelaEntitat^ entitat;

public:
	CtrlModificaEntitat();
	//CtrlModificaAjuntament(const CtrlModificaAjuntament& C);
	List<String^>^ consultaEntitat();
	void modificaEntitat(int idEnt, String^ nomEnt, String^ contrasenyaEnt, String^ telefonEnt, String^ correuEnt);
};