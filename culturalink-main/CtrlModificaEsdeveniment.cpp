#include "pch.h"
#include "CtrlModificaEsdeveniment.h"


CtrlModificaEsdeveniment::CtrlModificaEsdeveniment() {


}

//CtrlModificaEsdeveniment::CtrlModificaEsdeveniment(const CtrlModificaEsdeveniment& C) {
//
//	esdev = C.esdev;
//}

List<String^>^ CtrlModificaEsdeveniment::consultaEsdeveniment(String^ esdeveniment) {

	TxConsultaEsdeveniment^ txConEsdev = gcnew TxConsultaEsdeveniment(esdeveniment);

	// Crear la lista que almacenará la información del evento
	List<String^>^ infoEsdev = gcnew List<String^>();

	txConEsdev->executar();
	infoEsdev = txConEsdev->getResult();

	return infoEsdev;

}

void CtrlModificaEsdeveniment::modificaEsdeveniment(float preu, String^ descr, String^ nom, String^ tipus, int aforament, int puntsCost, String^ data, int puntsDesc) {

	if (preu != NULL) esdev.posaPreu(preu);
	if (descr != "") esdev.posaDescripcio(descr);
	if (nom != "") esdev.posaNom(nom);
	if (tipus != "") esdev.posaTipus(tipus);
	if (aforament != NULL) esdev.posaAforament(aforament);
	if (puntsCost != NULL) esdev.posaPuntsCost(puntsCost);
	if (data != "") esdev.posaData(data);
	if (puntsDesc != NULL) esdev.posaPuntsDesc(puntsDesc);
    esdev.modifica();
}