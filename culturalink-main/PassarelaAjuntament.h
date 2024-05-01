#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "config.h"


using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

ref class PassarelaAjuntament
{
    public:
        PassarelaAjuntament();
        PassarelaAjuntament(String^ nomP);
        PassarelaAjuntament(String^ nom, String^ clau, int cp, int telefon, String^ correu, String^ contrasenya);
        PassarelaAjuntament% operator=(const PassarelaAjuntament% other);
        PassarelaAjuntament(const PassarelaAjuntament% p1);
        String^ getNom();
        String^ getClau();
        int getCP();
        int getTelf();
        String^ getCorreu();
        String^ getContrasenya();

    private:
        String^ nom;
        String^ clau;
        String^ contrasenya;
        int cp;
        int telefon;
        String^ correu;
};