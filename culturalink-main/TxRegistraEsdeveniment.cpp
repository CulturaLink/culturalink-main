#pragma once
#include "TxRegistraEsdeveniment.h"
#include "pch.h"

TxRegistraEsdeveniment::TxRegistraEsdeveniment() {
    inicialitza();
}

void TxRegistraEsdeveniment::ejecutar() {
    //PassarelaUsuari u(nomU, sobrenomU, contrasenyaU, correuElectronicU, dataNaixementU);
    PassarelaEsdeveniment e;
    e.insereix();
    
}