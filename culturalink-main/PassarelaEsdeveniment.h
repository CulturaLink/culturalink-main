#pragma once
#include <iostream>
#include <string>
#include "config.h"
//#include <Windows.h>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

ref class PassarelaEsdeveniment {

public:
    PassarelaEsdeveniment();
    PassarelaEsdeveniment(String^ nomE, float preuE, String^ descripcioE, String^ ajuntamentE);
    void insereix();

private:
    String^ nom;
    float preu;
    String^ descripcio;
    String^ ajuntament;
};