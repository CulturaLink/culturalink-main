#pragma once
#include "pch.h"
//#include "PassarelaAjuntament.h"
#include "CercadoraAjuntament.h"
#include <iostream>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxLoginAjuntament {

private:
   
    String^ clau;
    String^ contrasenya;

public:
    TxLoginAjuntament(String^ clauAj, String^ contrasenyaAj);
    void executar();
};