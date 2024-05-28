#include "pch.h"
#include "CtrlModificaAjuntament.h"

CtrlModificaAjuntament::CtrlModificaAjuntament() {}

/*CtrlModificaAjuntament::CtrlModificaAjuntament(const CtrlModificaAjuntament& C) {

	usuari = C.usuari;
}*/

List<String^>^ CtrlModificaAjuntament::consultaAjuntament() {

	TxConsultaAjuntament txConAju;
	txConAju.executar();

	List<String^>^ infoAju = txConAju.getResult();
	/*infoAju->Add();
	infoUsu.push_back(txConUsu.obteResultat()[1]);
	infoUsu.push_back(txConUsu.obteResultat()[2]);
	infoUsu.push_back(txConUsu.obteResultat()[3]);*/

	ajuntament = txConAju.getAjuntament();

	return infoAju;

}

void CtrlModificaAjuntament::modificaAjuntament(String^ nomAju, String^ clauAju, int poblacioAju, int telefonAju, String^ correuAju, String^ contrasenyaAju) {

	if (nomAju != "") ajuntament->posaNom(nomAju);
	if (clauAju != "") ajuntament->posaClau(clauAju);
	if (poblacioAju != 0) ajuntament->posaPoblacio(poblacioAju);
	if (telefonAju != 0) ajuntament->posaTelefon(telefonAju);
	if (correuAju != "") ajuntament->posaCorreu(correuAju);
	if (contrasenyaAju != "") ajuntament->posaContrasenya(contrasenyaAju);

	if ((nomAju != "" || clauAju != "" || poblacioAju != 0 || telefonAju != 0 || correuAju != "" || contrasenyaAju != "")) {

		try {
			ajuntament->modifica();
		}
		catch (CorreuExisteix^ e1) {
			// Actualizar el usuari iniciat
			CercadoraAjuntament cerc;
			UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
			PassarelaAjuntament pA = cerc.cercaAjuntament(clauAju);

			//uso de la clase Singleton

			usuario->setUsuari(% pA, TipoPassarela::Ajuntament);
			throw e1;
		}

	}

}