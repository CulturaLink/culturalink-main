#pragma once
#include <iostream>
#include <string>
#include "config.h"
#include <Windows.h>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

ref class PassarelaAjuntament
{
public:
    //PassarelaAjuntament();
    //void insereix();

private:
    String^ nom;
    String^ clau;
    int cp;
    int telefon;
    String^ correu;
};

