#pragma once

#include "PassarelaEsdeveniment.h"
#include "TxConsultaEsdeveniment.h"
#include <list>
#include <chrono>
#include <sstream>
#include <string>
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;



ref class CtrlModificaEsdeveniment
{

private:
	PassarelaEsdeveniment _esdev;

public:
	CtrlModificaEsdeveniment();
	CtrlModificaEsdeveniment(const CtrlModificaEsdeveniment^& C);
	List<String^>^ consultaEsdeveniment(String^ esdeveniment);
    void modificaEsdeveniment(String^ ESDEV, float preu, String^ descr, String^ tipus, int aforament, int puntsCost, String^ data, int puntsDesc); 
	//excepciones: tipus (no existe ese tipus) o sino poner lista desplegable que se puedan poner varios, ya existe ese nombre (primary key), aforament <=0, data anterior, punts_cost negatiu, punts_desc negatiu.
};

