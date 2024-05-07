#include "pch.h"
#include "MainForm.h"
#include "TxEsborraEsdeveniment.h"
#include "UsuariIniciat.h"


TxEsborraEsdeveniment::TxEsborraEsdeveniment(String^ esdeveniment)
{
	_nomEsdeveniment = esdeveniment;
}

void TxEsborraEsdeveniment::executar()
{
	UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
	PassarelaEsdeveniment^ pE = gcnew PassarelaEsdeveniment();
	PassarelaEntitat^ pEnt = safe_cast<PassarelaEntitat^>(usuari->getUsuari());

	// Fetch the idEntitat from the logged-in Entitat
	int^ idEntitat = pEnt->obteid();

	// Check if the event belongs to the logged-in Entitat
	if (pE->getIdEnt() != idEntitat) {
		MessageBox::Show("No teniu permís per esborrar aquest esdeveniment.", "Error de Permisos");
		return;
	}

	try {
		pE->esborra(_nomEsdeveniment);
		MessageBox::Show("L'esdeveniment ha estat eliminat correctament.", "Esborrat d'Esdeveniment");
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error durant l'eliminació de l'esdeveniment: " + ex->Message, "Error");
	}

}