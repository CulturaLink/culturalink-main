#include "pch.h"
#include "TxRegistraEsdeveniment.h"

TxRegistraEsdeveniment::TxRegistraEsdeveniment(int idEnt, String^ nomEsd, float preuEsd, String^ descEsd, String^ ajuntamEsd, String^ tipusEsd, int aforamentEsd, int puntsCostEsd, String^ dataEsd, int puntsDescEsd, bool opcioEntradaLliure)
{
    idE = idEnt;
    nomE = nomEsd;
    preuE = preuEsd;
    descripcioE = descEsd;
    ajuntamentE = ajuntamEsd;
    aforamentE = aforamentEsd;
    tipusE = tipusEsd;
    puntsCostE = puntsCostEsd;
    dataE = dataEsd;
    puntsDescE = puntsDescEsd;
    entradaLliure = opcioEntradaLliure;

}

TxRegistraEsdeveniment::TxRegistraEsdeveniment()
{
    idE = 0;
    nomE = "";
    preuE = 0;
    descripcioE = "";
    ajuntamentE = "";
    aforamentE = 0;
    tipusE = "";
    puntsCostE = 0;
    dataE = "";
    puntsDescE = 0;
    entradaLliure = false;

}

void TxRegistraEsdeveniment::executar() {
    PassarelaEsdeveniment e(idE, preuE, ajuntamentE, descripcioE, nomE, tipusE, aforamentE, puntsCostE, dataE, puntsDescE, entradaLliure);
    e.insereix();
}
