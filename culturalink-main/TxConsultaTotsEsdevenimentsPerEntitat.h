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

ref class TxConsultaTotsEsdevenimentsPerEntitat {

private:
    List<String^>^ _result;

public:
    TxConsultaTotsEsdevenimentsPerEntitat();
    void executar(String^ ent);
    List<String^>^ getResult();
};