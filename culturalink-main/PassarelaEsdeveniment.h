#pragma once
#include <iostream>
#include <string>
#include "config.h"
#include <Windows.h>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

ref class PassarelaEsdeveniment {

public:
    PassarelaEsdeveniment(int idEnt, float preu, String^ ajEsd, String^ descEsd, String^ nomEsd);
    PassarelaEsdeveniment();
    void insereix();
    PassarelaEsdeveniment% operator=(const PassarelaEsdeveniment% other);
    PassarelaEsdeveniment(const PassarelaEsdeveniment% p1);
    int getIdEnt();
    int getPreu();
    String^ getAjEsd();
    String^ getDescEsd();
    String^ getNomEsd();


private:
    int _idEnt;
    float _preu;
    String^ _ajEsd;
    String^ _descEsd;
    String^ _nomEsd;
};