#include "pch.h"
#include "TxPuntuaEsdeveniment.h"


TxPuntuaEsdeveniment::TxPuntuaEsdeveniment(String^ nomEsdeveniment, int puntuacioEsdeveniment) {
	_nomEsdeveniment = nomEsdeveniment;
	_puntuacioEsdeveniment = puntuacioEsdeveniment;
}


void TxPuntuaEsdeveniment::executar()
{
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	Object^ usuarioAlmacenado = usuario->getUsuari();
	TipoPassarela tipoUsuario = usuario->getTipoPassarela();
	
	PassarelaCiutada^ passarelaCiutada = safe_cast<PassarelaCiutada^>(usuarioAlmacenado);
	/*
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
	passarelaCiutada->afegir_punts_entrada(pes.getPuntsDescEsd());
	*/

	String^ nickCiutada = passarelaCiutada->getNickname();
	PassarelaPuntuacioEsdeveniment pPunt(_nomEsdeveniment, nickCiutada, _puntuacioEsdeveniment);
	pPunt.insereix();
}