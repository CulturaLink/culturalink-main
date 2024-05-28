#include "pch.h"
#include "TxModificaPuntuacioEsdeveniment.h"


TxModificaPuntuacioEsdeveniment::TxModificaPuntuacioEsdeveniment(PassarelaPuntuacioEsdeveniment pPunt_aux) {
	pPunt = pPunt_aux;
}

void TxModificaPuntuacioEsdeveniment::modificaPuntuacio(int punt) {

	pPunt.posaPuntuacio(punt);
	pPunt.modifica();

}