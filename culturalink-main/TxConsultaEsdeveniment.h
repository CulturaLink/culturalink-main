#pragma once
#include "CercadoraEsdeveniment.h"
#include <iostream>
#include <vector>
#include <list>

using namespace System::Collections::Generic; // Para usar List<T>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxConsultaEsdeveniment {

private:
    String^ _esdev;
    PassarelaEsdeveniment _passEsdev;
    List<String^>^ _result;

public:
    TxConsultaEsdeveniment(String^ Esdeveniment);
    void executar();
    List<String^>^ getResult();
};
