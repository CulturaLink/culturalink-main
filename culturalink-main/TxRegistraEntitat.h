#pragma once
#include "PassarelaEntitat.h"
#include "Transaccio.h"

ref class TxRegistraEntitat : public Transaccio
{
private:
    String^ nom;
    String^ contrasenya;
    String^ correu;
    int telefon;
    int id_entitat;

public:
    TxRegistraEntitat();
    TxRegistraEntitat(String^ nomA, String^ contrasenyaA, String^ correuA, int telefonA, int id_entitatA);
    void executar() override;
};


