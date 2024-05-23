#include "pch.h"
#include "TxAnulaRegistreEsdeveniment.h"


TxAnulaRegistreEsdeveniment::TxAnulaRegistreEsdeveniment(String^ nom_esdI)
{
	nom_esdeveniment = nom_esdI;
}

void TxAnulaRegistreEsdeveniment::executar()
{
	UsuariIniciat^ u = UsuariIniciat::ObtenerInstancia();
	Object^ uA = u->getUsuari();

	PassarelaCiutada^ c = safe_cast<PassarelaCiutada^>(uA);

	String^ nick = c->getNickname();

	CercadoraInscripcio cI;
	PassarelaInscripcio p1 = cI.cercaInscripcio(nick, nom_esdeveniment);
	p1.elimina();
	CercadoraEsdeveniment cerc;
	PassarelaEsdeveniment pes = cerc.cercaEsdeveniment(nom_esdeveniment);
	pes.sumar_aforament();
	if(p1.ObtePunts_Diners() == 0) c->devolucio_diners(p1.ObtePreu());
	else c->devolucio_punts(p1.ObtePreu());
}