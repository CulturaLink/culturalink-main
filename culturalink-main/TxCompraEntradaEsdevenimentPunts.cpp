#include "pch.h"

#include "TxCompraEntradaEsdevenimentPunts.h"


TxCompraEntradaEsdevenimentPunts::TxCompraEntradaEsdevenimentPunts(String^ nomEsd2){
	nomEsd = nomEsd2;
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
		int punts = *passarelaCiutada->getPunts();
		if (pes.getPuntsCostEsd() > punts)throw(errorPuntsInsuficients);
	}
	if (pes.getAforamentEsd() == 0) throw(errorAforament);
	auto now = std::chrono::system_clock::now();
	std::time_t now_time = std::chrono::system_clock::to_time_t(now);
	std::tm* local_time = std::localtime(&now_time);
	char buffer[80];
	std::strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", local_time);
	System::String^ time = gcnew System::String(buffer);
	passarelaCiutada->borrar_punts();
	int^ preu = gcnew int(static_cast<int>(pes.getPreu()));
	PassarelaInscripcio inscrip(passarelaCiutada->getNickname(), time,pes.getNomEsd(), preu);
	inscrip.insereix();
	pes.restar_aforament();
}