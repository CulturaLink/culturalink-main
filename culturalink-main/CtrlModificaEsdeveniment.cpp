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
	if (aforament != NULL) _esdev.posaAforament(aforament);
	if (puntsCost != NULL) _esdev.posaPuntsCost(puntsCost);
	if (puntsDesc != NULL) _esdev.posaPuntsDesc(puntsDesc);

	//compruevo que no es una fecha futura
	if (data != "") {
		DateTime fechaEvento = DateTime::Parse(data);
		DateTime ahora = DateTime::Now;
		if (fechaEvento < ahora) {
			throw(errorData);
		}
		else _esdev.posaData(data);
	}


	//compruevo que el tipus sea correcto
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
	MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
	conn->Open();
	List<String^>^ tipusValids = gcnew List<String^>();

	String^ consulta = "SELECT tipus FROM esdeveniment";
	MySqlCommand^ cmd = gcnew MySqlCommand(consulta, conn);
	MySqlDataReader^ reader = cmd->ExecuteReader();
	while (reader->Read()) {
		tipusValids->Add(reader["tipus"]->ToString());
	}
	reader->Close();
	if (tipus != "") {
		if (!tipusValids->Contains(tipus)) {
			throw (errorTipusIncorrecte);
		}
		else _esdev.posaTipus(tipus);
	}


	_esdev.modifica(ESDEV);
}