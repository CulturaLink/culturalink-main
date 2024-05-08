#pragma once
#include "PassarelaAjuntament.h"
#include "TxConsultaAjuntament.h"
//#include "CostumCorreuExisteix.h"
#include <vector>
#include <iostream>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
//using namespace CostumCorreuExisteix;

ref class CtrlModificaAjuntament {

private:
	PassarelaAjuntament^ ajuntament;

public:
	CtrlModificaAjuntament();
	//CtrlModificaAjuntament(const CtrlModificaAjuntament& C);
	List<String^>^ consultaAjuntament();
	void modificaAjuntament(String^ nomAju, String^ clauAju, int poblacioAju, int telefonAju, String^ correuAju, String^ contrasenyaAju);
};