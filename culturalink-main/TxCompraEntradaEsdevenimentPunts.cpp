#include "pch.h"

#include "TxCompraEntradaEsdevenimentPunts.h"


TxCompraEntradaEsdevenimentPunts::TxCompraEntradaEsdevenimentPunts(String^ nomEsd2,int^ quantitat_entrad2) {
	nomEsd = nomEsd2;
	quantitat_entrad = quantitat_entrad2;
}
void TxCompraEntradaEsdevenimentPunts::executar()
{
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	Object^ usuarioAlmacenado = usuario->getUsuari();
	TipoPassarela tipoUsuario = usuario->getTipoPassarela();
	CercadoraEsdeveniment cerc;
	PassarelaEsdeveniment pes = cerc.cercaEsdeveniment(nomEsd);
	CercadoraCiutada cercC;
	PassarelaCiutada^ passarelaCiutada = safe_cast<PassarelaCiutada^>(usuarioAlmacenado);
	if (passarelaCiutada->getPunts() != nullptr)
	{
		int punts = *passarelaCiutada->getPunts() * *(quantitat_entrad);
		if (pes.getPuntsCostEsd() > punts)throw(errorPuntsInsuficients);
	}
	if (pes.getAforamentEsd() == 0 || *(quantitat_entrad) > pes.getAforamentEsd() ) throw(errorAforament);
	auto now = std::chrono::system_clock::now();
	std::time_t now_time = std::chrono::system_clock::to_time_t(now);
	std::tm* local_time = std::localtime(&now_time);
	char buffer[80];
	std::strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", local_time);
	System::String^ time = gcnew System::String(buffer);
	passarelaCiutada->borrar_punts(quantitat_entrad,pes.getPuntsCostEsd());
	int^ preu = gcnew int(static_cast<int>(pes.getPuntsCostEsd()));
	String^ nick = passarelaCiutada->getNickname();
	PassarelaInscripcio inscrip(nick, time, pes.getNomEsd(), preu, 1, quantitat_entrad);
	inscrip.insereix();
	pes.restar_aforament(quantitat_entrad);
	PassarelaCiutada new2 = cercC.cercaCiutada(nick);
	usuario->setUsuari(% new2, TipoPassarela::Ciutada);
}