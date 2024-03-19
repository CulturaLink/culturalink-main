#pragma once
#include "pch.h"
#include "TxRegistraEsdeveniment.h"

TxRegistraEsdeveniment::TxRegistraEsdeveniment() {
    inicialitza();
}

void TxRegistraEsdeveniment::executar() {
    //PassarelaUsuari u(nomU, sobrenomU, contrasenyaU, correuElectronicU, dataNaixementU);
    PassarelaEsdeveniment e;
    e.insereix();
}