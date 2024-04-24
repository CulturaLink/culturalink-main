#pragma once
#include "pch.h"
#include "TxRegistraEsdeveniment.h"

TxRegistraEsdeveniment::TxRegistraEsdeveniment() {
    inicialitza();
}

TxRegistraEsdeveniment::TxRegistraEsdeveniment(String^ nomEsd, float preuEsd, String^ descEsd, String^ ajuntamEsdv)
{
    nomE = nomEsd;
    preuE = preuEsd;
    descripcioE = descEsd;
    ajuntamentE = ajuntamEsdv;
}

void TxRegistraEsdeveniment::executar() {
    PassarelaEsdeveniment e(nomE, preuE, descripcioE, ajuntamentE);
    e.insereix();
}