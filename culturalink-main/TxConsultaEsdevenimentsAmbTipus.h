#pragma once
#include "CercadoraEsdeveniment.h"
#include <iostream>
#include <vector>
#include <list>

using namespace System::Collections::Generic; // Para usar List<T>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxConsultaEsdevenimentsAmbTipus {

private:
    String^ _tipus;
    List<String^>^ _multiplestipus;
    List<PassarelaEsdeveniment^>^ _passEsdev;
    List<String^>^ _result;

public:
    TxConsultaEsdevenimentsAmbTipus(String^ tipus);
    void executar();
    List<String^>^ getResult();
};