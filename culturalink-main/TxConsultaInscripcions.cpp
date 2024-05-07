#include "pch.h"
#include "TxConsultaInscripcions.h"

TxConsultaInscripcions::TxConsultaInscripcions(){}

void TxConsultaInscripcions::executar() {
	UsuariIniciat^ u = UsuariIniciat::ObtenerInstancia();
	Object^ uA = u->getUsuari();

	PassarelaCiutada^ c = safe_cast<PassarelaCiutada^>(uA);

	String^ nick = c->getNickname();

	CercadoraInscripcio cI;
	List<PassarelaInscripcio^>^ pI = cI.cercaTotesInscripcions(nick);

	List<String^>^ result = gcnew List<String^>();

	for each (PassarelaInscripcio ^ insc in pI) {
		result->Add(insc->ObteNomEsdeveniment() + ", " + 
			insc->ObteData() + ", " + 
			insc->ObtePreu() + "€");
	}

	_result = result;
}

List<String^>^ TxConsultaInscripcions::getResult() {
	return _result;
}