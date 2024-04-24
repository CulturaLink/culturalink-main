#include "pch.h"
#include "TxRegistraEsdeveniment.h"

TxRegistraEsdeveniment::TxRegistraEsdeveniment(int idEnt, String^ nomEsd, float preuEsd, String^ descEsd, String^ ajuntamEsdv)
{
    idE = idEnt;
    nomE = nomEsd;
    preuE = preuEsd;
    descripcioE = descEsd;
    ajuntamentE = ajuntamEsdv;
}

TxRegistraEsdeveniment::TxRegistraEsdeveniment()
{
    idE = 0;
    nomE = "";
    preuE = 0;
    descripcioE = "";
    ajuntamentE = "";
}

void TxRegistraEsdeveniment::executar() {
    PassarelaEsdeveniment e(idE, preuE, ajuntamentE, descripcioE, nomE);
    e.insereix();
}

