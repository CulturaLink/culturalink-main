#pragma once
#include "CercadoraEsdeveniment.h"
#include <iostream>
#include <list>
#include <utility> // Para usar Pair

using namespace System::Collections::Generic; // Para usar List<T>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxConsultaTotsEsdeveniments {

private:
    List<String^>^ _noms;
    List<String^>^ _preus;
    List<String^>^ _result;

public:
    TxConsultaTotsEsdeveniments();
    void executar();
    List<String^>^ getNoms();
    List<String^>^ getPreus();
    List<String^>^ getResult();

};