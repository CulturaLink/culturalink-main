#include "pch.h"
#include "CtrlModificarEntitat.h"
#include "CercadoraEntitat.h"
#include "UsuariIniciat.h"

CtrlModificaEntitat::CtrlModificaEntitat() {}

//CtrlModificaEntitat::CtrlModificaEntitat(const CtrlModificaEntitat& C) {

//	usuari = C.usuari;
//}

List<String^>^ CtrlModificaEntitat::consultaEntitat() {

	TxConsultaEntitat txConEnt;
	txConEnt.executar();

	List<String^>^ infoEnt = txConEnt.obteResultat();
	/*infoAju->Add();
	infoUsu.push_back(txConUsu.obteResultat()[1]);
	infoUsu.push_back(txConUsu.obteResultat()[2]);
	infoUsu.push_back(txConUsu.obteResultat()[3]);*/

	entitat = txConEnt.obteEntitat();

	return infoEnt;

}

void CtrlModificaEntitat::modificaEntitat(int idEnt, String^ nomEnt, String^ contrasenyaEnt, String^ telefonEnt, String^ correuEnt) {

	String^ correuOriginal = entitat->obteCorreuElectronic();

	if (nomEnt != "") entitat->posaNom(nomEnt);
	if (telefonEnt != "") entitat->posaTelefon(Convert::ToInt32(telefonEnt));
	if (correuEnt != "") entitat->posaCorreu(correuEnt);
	if (contrasenyaEnt != "") entitat->posaContrasenya(contrasenyaEnt);

	if ((nomEnt != "" || telefonEnt != "" || correuEnt != "" || contrasenyaEnt != "")) {

		try {
			entitat->modifica();
		}
		catch (CorreuExisteix^ e1) {
			// Actualizar el usuari iniciat
			CercadoraEntitat cerc;
			UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
			PassarelaEntitat pE = cerc.cercaEntitat(correuOriginal);

			//uso de la clase Singleton

			usuario->setUsuari(% pE, TipoPassarela::Entitat);
			throw e1;
		}

	}

}