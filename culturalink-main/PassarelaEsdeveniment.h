#pragma once
#include <iostream>
#include <string>
#include "UsuariIniciat.h"

const int preuNegatiu = 1;


using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

ref class PassarelaEsdeveniment {

public:
    PassarelaEsdeveniment(int idEnt, float preu, String^ ajEsd, String^ descEsd, String^ nomEsd, String^ tipusEsd, int aforamentEsd, int puntsCostEsd, String^ dataEsd, int puntsDescEsd, bool entradaLliure);
    PassarelaEsdeveniment(String^ nomEsdev, float preu);
    PassarelaEsdeveniment();
    void insereix();
    void modifica(String^ ESDEV);
    PassarelaEsdeveniment% operator=(const PassarelaEsdeveniment% other);
    PassarelaEsdeveniment(const PassarelaEsdeveniment% p1);
    int getIdEnt();
    float getPreu();
    String^ getAjEsd();
    String^ getDescEsd();
    String^ getNomEsd();
    String^ getTipusEsd();
    int getAforamentEsd();
    int getPuntsCostEsd();
    String^ getDataEsd();
    int getPuntsDescEsd();
    void posaPreu(float preu);
    void posaDescripcio(String^ descripcio);
    void posaNom(String^ nom);
    void posaTipus(String^ tipus);
    void posaAforament(int aforament);
    void posaPuntsCost(int puntsCost);
    void posaData(String^ data);
    void posaPuntsDesc(int puntsDesc);

private:
    int _idEnt;
    float _preu;
    String^ _ajEsd;
    String^ _descEsd;
    String^ _nomEsd;
    String^ _tipusEsd;
    int _aforamentEsd;
    int _puntsCostEsd;
    String^ _dataEsd;
    int _puntsDescEsd;
    bool _entradaLliure;
};