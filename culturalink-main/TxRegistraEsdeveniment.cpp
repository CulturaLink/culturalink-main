#pragma once
#include "pch.h"
#include "TxRegistraEsdeveniment.h"

TxRegistraEsdeveniment::TxRegistraEsdeveniment() {
    inicialitza();
}

<<<<<<< Updated upstream
void TxRegistraEsdeveniment::executar() {
    //PassarelaUsuari u(nomU, sobrenomU, contrasenyaU, correuElectronicU, dataNaixementU);
    PassarelaEsdeveniment e;
=======
TxRegistraEsdeveniment::TxRegistraEsdeveniment(int idEsd, String^ nomEsd, float preuEsd, String^ descEsd, String^ ajuntamEsdv)
{
    idE = idEsd;
    nomE = nomEsd;
    preuE = preuEsd;
    descripcioE = descEsd;
    ajuntamentE = ajuntamEsdv;
}

void TxRegistraEsdeveniment::executar() {
    PassarelaEsdeveniment e(idE, preuE, ajuntamentE, descripcioE, nomE);
>>>>>>> Stashed changes
    e.insereix();
}