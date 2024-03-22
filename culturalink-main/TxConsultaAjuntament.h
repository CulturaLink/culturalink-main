#pragma once
#include "CercadoraAjuntament.h"
#include "AjuntamentIniciat.h"
#include <iostream>
#include <vector>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxConsultaAjuntament {

private:

    PassarelaAjuntament ajuntament;
    List<String^>^ result;

public:
    TxConsultaAjuntament();

    void executar();
    List<String^>^ getResult();
    PassarelaAjuntament getAjuntament();
};

