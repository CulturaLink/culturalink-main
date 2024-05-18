#pragma once
#include "CercadoraAjuntament.h"
#include <iostream>
#include <vector>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Collections::Generic;

ref class TxConsultaAjuntament {

private:

    PassarelaAjuntament^ ajuntament;
    List<String^>^ result;

public:
    TxConsultaAjuntament();

    void executar();
    List<String^>^ getResult();
    PassarelaAjuntament^ getAjuntament();
};

