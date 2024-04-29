#include "../../pch.h"
#include "TxLoginCiutada.h"

TxLoginCiutada::TxLoginCiutada(String^ nick, String^ contra) {
	_nickname = nick;
	_contrasenya = contra;
}

void TxLoginCiutada::executar() {
	CercadoraCiutada cerc;
	PassarelaCiutada pC= cerc.cercaCiutada(_nickname);
	if (pC.getContrasenya() != _contrasenya) {
		//MessageBox::Show("DB: "+ logged.getContrasenya()+", ENTRAT: "+contra, "Debuh");
		throw runtime_error("Nickname o contrasenya incorrectes, siusplau torna-ho a intentar.");
	}
	else {
		//uso de la clase Singleton
		UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
		usuari->setUsuari(% pC, TipoPassarela::Ciutada);
	}
}