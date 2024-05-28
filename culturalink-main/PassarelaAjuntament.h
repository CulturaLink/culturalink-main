#pragma once
#include "pch.h"
#include <iostream>
#include <string>
//#include <Windows.h>
#include "UsuariIniciat.h"
#include "ExcepcioCorreuExisteix.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

using namespace CostumCorreuExisteix;


ref class PassarelaAjuntament
{
    public:
        PassarelaAjuntament();
        PassarelaAjuntament(String^ nomP);
        PassarelaAjuntament(String^ nom, String^ clau, int poblacio, int telefon, String^ correu, String^ contrasenya);
        PassarelaAjuntament% operator=(const PassarelaAjuntament% other);
        PassarelaAjuntament(const PassarelaAjuntament% p1);
        String^ getNom();
        String^ getClau();
        int getPoblacio();
        int getTelf();
        String^ getCorreu();
        String^ getContrasenya();
        void posaNom(String^ nomAj);
        void posaClau(String^ clauAj);
        void posaPoblacio(int poblacioAj);
        void posaTelefon(int telAj);
        void posaCorreu(String^ correuAj);
        void posaContrasenya(String^ contrasenyaAj);
        void modifica();

    private:
        String^ nom;
        String^ clau;
        String^ contrasenya;
        int poblacio;
        int telefon;
        String^ correu;
};