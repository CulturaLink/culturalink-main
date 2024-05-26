#include "pch.h"
#include "CtrlModificaCiutada.h"

CtrlModificaCiutada::CtrlModificaCiutada() {}

void CtrlModificaCiutada::modificaCiutada(String^ nNomC, String^ nCorr, String^ nDat, String^ nCtr) {
	TxConsultaCiutada tC;
	tC.executar();
	ciutada = tC.getCiutada();

	String^ correuOriginal = ciutada->getCorreu();

	if (nNomC != "") ciutada->setNom(nNomC);
	if (nCorr != "") ciutada->setCorreu(nCorr);
	if (nDat != "") ciutada->setData_naix(nDat);
	if (nCtr != "") ciutada->setContrasenya(nCtr);

	if ((nNomC != "" || nCorr != "" || nDat != "" || nCtr != "")) {

		try {
			ciutada->modifica();
		}
		catch (CorreuExisteix^ e1) {
			// Actualizar el usuari iniciat
			CercadoraCiutada cerc;
			UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
			PassarelaCiutada pE = cerc.cercaCiutada(correuOriginal);

			//uso de la clase Singleton

			usuario->setUsuari(% pE, TipoPassarela::Ciutada);
			throw e1;
		}

	}
}