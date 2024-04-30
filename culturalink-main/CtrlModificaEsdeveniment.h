#pragma once

#include "PassarelaEsdeveniment.h"
#include "TxConsultaEsdeveniment.h"
#include <list>

ref class CtrlModificaEsdeveniment
{

private:
	PassarelaEsdeveniment esdev;

public:
	CtrlModificaEsdeveniment();
	//CtrlModificaEsdeveniment(const CtrlModificaEsdeveniment& C);
	List<String^>^ consultaEsdeveniment(String^ esdeveniment);
    void modificaEsdeveniment(float preu, String^ descr, String^ nom, String^ tipus, int aforament, int puntsCost, String^ data, int puntsDesc); //excepciones: tipus (no existe ese tipus) o sino poner lista desplegable que se puedan poner varios, ya existe ese nombre (primary key), aforament <=0, data anterior, punts_cost negatiu, punts_desc negatiu.
};

