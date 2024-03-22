#pragma once
#include <iostream>
#include <string>
#include <random>


using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;


ref class PassarelaEntitat {
public:
    PassarelaEntitat(const PassarelaEntitat% p1);
    PassarelaEntitat();
    PassarelaEntitat% operator=(const PassarelaEntitat% other);
    PassarelaEntitat(String^ nomA, String^ contrasenyaA, String^ correuA, int telefonA, String^ id_entitatA);
    void insereix();
    //void modifica();
    //void esborra();

    String^ obteNom();
    String^ obteContrasenya();
    String^ obteCorreuElectronic();
    String^ obteid();
    int obteTelefon();

    void posaNom(String^ nomA);
    void posaContrasenya(String^ contrasenyaA);
    void posaCorreu(String^ correuA);
    void posaId_Entitat(String^ id_entitatA);
    void posaTelefon(int telefonA);

private:
    String^ nom;
    String^ contrasenya;
    String^ correuElectronic;
    String^ id_entitat;
    int telefon;
};

