#include "../../pch.h"
#include "TxRegistraEntitat.h"
using namespace System::Collections::Generic;

TxRegistraEntitat::TxRegistraEntitat(){
}

TxRegistraEntitat::TxRegistraEntitat(String^ nomA, String^ contrasenyaA, String^ correuA, int^ telefonA, int^ id_entitatA)
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