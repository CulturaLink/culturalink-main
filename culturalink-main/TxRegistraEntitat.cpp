#include "pch.h"
#include "TxRegistraEntitat.h"

TxRegistraEntitat::TxRegistraEntitat(){
}

TxRegistraEntitat::TxRegistraEntitat(String^ nomA, String^ contrasenyaA, String^ correuA, int telefonA, String^ id_entitatA)
{
    nom = nomA;
    contrasenya = contrasenyaA;
    correu = correuA;
    telefon = telefonA;
    id_entitat = id_entitatA;
}

void TxRegistraEntitat::executar() {
    PassarelaEntitat u(nom, contrasenya,correu,telefon,id_entitat);
    u.insereix();
}