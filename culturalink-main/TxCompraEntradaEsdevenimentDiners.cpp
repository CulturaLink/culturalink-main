#include "pch.h"

#include "TxCompraEntradaEsdevenimentDiners.h"


TxCompraEntradaEsdevenimentDiners::TxCompraEntradaEsdevenimentDiners(String^ nomEsd2) {
	nomEsd = nomEsd2;
}
void TxCompraEntradaEsdevenimentDiners::executar()
{
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	Object^ usuarioAlmacenado = usuario->getUsuari();
	TipoPassarela tipoUsuario = usuario->getTipoPassarela();
	CercadoraEsdeveniment cerc;
	PassarelaEsdeveniment pes = cerc.cercaEsdeveniment(nomEsd);
	CercadoraCiutada cercC;
	PassarelaCiutada^ passarelaCiutada = safe_cast<PassarelaCiutada^>(usuarioAlmacenado);
	if (passarelaCiutada->getDiners() != nullptr)
	{
		int diners = *passarelaCiutada->getDiners();
		if (pes.getPreu() > diners)throw(errorDinersInsuficients);
	}
	if (pes.getAforamentEsd() == 0) throw(errorAforament2);
	auto now = std::chrono::system_clock::now();
	std::time_t now_time = std::chrono::system_clock::to_time_t(now);
	std::tm* local_time = std::localtime(&now_time);
	char buffer[80];
	std::strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", local_time);
	System::String^ time = gcnew System::String(buffer);
	int^ preu = gcnew int(static_cast<int>(pes.getPreu()));
	passarelaCiutada->borrar_diners(preu);
	PassarelaInscripcio inscrip(passarelaCiutada->getNickname(), time, pes.getNomEsd(), preu);
	inscrip.insereix();
	pes.restar_aforament();
}