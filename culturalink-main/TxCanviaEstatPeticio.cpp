#include "pch.h"
#include "TxCanviaEstatPeticio.h"

using namespace System::Windows::Forms;

TxCanviaEstatPeticio::TxCanviaEstatPeticio(String^ nomEsdev, bool estat) {
	_nomEsdev = nomEsdev;
	_estat = estat;
}

void TxCanviaEstatPeticio::executar() {
	PassarelaEsdeveniment pEsdev;
	pEsdev.modifica_estat(_nomEsdev, _estat);
}