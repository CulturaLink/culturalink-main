
#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "UsuariIniciat.h"
#include "ExcepcioCorreuExisteix.h"

//#include <Windows.h>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

using namespace CostumCorreuExisteix;

//const int preuNegatiu = 1;
const int errorData = 5;
const int errorTipusIncorrecte = 6;


ref class PassarelaPuntuacioEsdeveniment
{
public:
    PassarelaPuntuacioEsdeveniment();
    PassarelaPuntuacioEsdeveniment(String^ nomEsdeveniment, String^ nickCiutada);
    PassarelaPuntuacioEsdeveniment(String^ nomEsdeveniment, String^ nickCiutada, int puntuacioEsdeveniment);
    PassarelaPuntuacioEsdeveniment% operator=(const PassarelaPuntuacioEsdeveniment% other);
    PassarelaPuntuacioEsdeveniment(const PassarelaPuntuacioEsdeveniment% p1);
    String^ getNickCiutada();
    String^ getNomEsdeveniment();
    int getPuntuacioEsdeveniment();

    void modifica();
    void insereix();

    void posaPuntuacio(int puntuacioEsdeveniment);


private:
    String^ _nickCiutada;
    int _puntuacioEsdeveniment;
    String^ _nomEsdeveniment;
};