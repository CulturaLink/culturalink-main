
#pragma once
#include "CercadoraEsdeveniment.h"
#include "PassarelaEntitat.h"
#include <iostream>
#include <list>
#include <utility> // Para usar Pair

using namespace System::Collections::Generic; // Para usar List<T>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxConsultaEsdevenimentsAjuntament {

private:
    List<String^>^ _result;

public:
    TxConsultaEsdevenimentsAjuntament();
    void executar(String^ aj);
    List<String^>^ getResult();
};