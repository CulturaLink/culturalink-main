#include "pch.h"
#include "TxCompraEntradaEsdevenimentPunts.h"


TxCompraEntradaEsdevenimentPunts::TxCompraEntradaEsdevenimentPunts(String^ nomEsd2){
	nomEsd = nomEsd2;
}
void TxCompraEntradaEsdevenimentPunts::executar()
{
	CercadoraEsdeveniment cerc;
	PassarelaEsdeveniment pes = cerc.cercaEsdeveniment(nomEsd);
	CercadoraCiutada cercC;
	//PassarelaCiutada pC = cercC.cercaCiutada();
	if(pes.getPuntsCostEsd() )
	if (pes.getAforamentEsd() == 0) throw(errorAforament);
}