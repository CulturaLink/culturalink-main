#pragma once
#include "PassarelaEntitat.h"

ref class TxRegistraEntitat
{
private:
    String^ nom;
    String^ contrasenya;
    String^ correu;
    int telefon;
    String^ id_entitat;

public:
    TxRegistraEntitat();
    TxRegistraEntitat(String^ nomA, String^ contrasenyaA, String^ correuA, int telefonA, String^ id_entitatA);
    void executar();
};


