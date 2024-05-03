#include "pch.h"
#include "CtrlModificaEsdeveniment.h"

CtrlModificaEsdeveniment::CtrlModificaEsdeveniment() {

}

CtrlModificaEsdeveniment::CtrlModificaEsdeveniment(const CtrlModificaEsdeveniment^& C) 
{
	_esdev = C->_esdev;
}

List<String^>^ CtrlModificaEsdeveniment::consultaEsdeveniment(String^ esdeveniment) {

	TxConsultaEsdeveniment^ txConEsdev = gcnew TxConsultaEsdeveniment(esdeveniment);

	// Crear la lista que almacenará la información del evento
	List<String^>^ infoEsdev = gcnew List<String^>();

	txConEsdev->executar();
	infoEsdev = txConEsdev->getResult();

	return infoEsdev;

}

void CtrlModificaEsdeveniment::modificaEsdeveniment(String^ ESDEV, float preu, String^ descr, String^ tipus, int aforament, int puntsCost, String^ data, int puntsDesc) {

	CercadoraEsdeveniment^ cercEsdev;

	_esdev = cercEsdev->cercaEsdeveniment(ESDEV);

	if (preu != NULL) _esdev.posaPreu(preu);
	if (descr != "") _esdev.posaDescripcio(descr);
	//if (nom != "") _esdev.posaNom(nom);
	if (tipus != "") _esdev.posaTipus(tipus);
	if (aforament != NULL) _esdev.posaAforament(aforament);
	if (puntsCost != NULL) _esdev.posaPuntsCost(puntsCost);
	if (data != "") _esdev.posaData(data);
	if (puntsDesc != NULL) _esdev.posaPuntsDesc(puntsDesc);

    _esdev.modifica(ESDEV);
}

/*
	
*/