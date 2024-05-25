#pragma once
#include <iostream>
#include <string>
#include "UsuariIniciat.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

const string errorCompra = "Ya tens una entrada comprada per aquest esdeveniment";

ref class PassarelaInscripcio {
public:
    PassarelaInscripcio(const PassarelaInscripcio% p1);
    PassarelaInscripcio();
    PassarelaInscripcio% operator=(const PassarelaInscripcio% other);
    PassarelaInscripcio(String^ nickCiutadaI, String^ dataI, String^ nomEsdI, int^ preuI, int^ punts_dinersI);
    void insereix();
    void elimina();

    String^ ObteNickCiutada();
    String^ ObteData();
    String^ ObteNomEsdeveniment();
    int^ ObtePreu(); // Preu Diners
    int^ ObtePunts_Diners(); // Da 0 o 1

    void posaNickCiutada(String^ nickCiutadaI);
    void posaData(String^ dataI);
    void posaNomEsd(String^ nomEsdI);
    void posaPreu(int^ preuI);


private:
    String^ nickCiutada;
    String^ data;
    String^ nomEsdeveniment;
    int^ preu;
    int^ punts_diners;

    int^ _metodePag;
};