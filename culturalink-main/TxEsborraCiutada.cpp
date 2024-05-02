#include "pch.h"
#include "TxEsborraCiutada.h"
#include "MainForm.h"
#include "UsuariIniciat.h"
using namespace System::Windows::Forms;

TxEsborraCiutada::TxEsborraCiutada(String^ nick, String^ contra) {
	_nickname = nick;
	_contrasenya = contra;
}

void TxEsborraCiutada::executar() {
	CercadoraCiutada cerc;
	PassarelaCiutada pC = cerc.cercaCiutada(_nickname);
	if (pC.getContrasenya() != _contrasenya) {
		//MessageBox::Show("DB: "+ logged.getContrasenya()+", ENTRAT: "+contra, "Debuh");
		throw runtime_error("Contrasenya incorrecta, siusplau torna-ho a intentar.");
	}
	else {
		//uso de la clase Singleton
		//UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
		//usuari->setUsuari(% pC, TipoPassarela::Ciutada);

		//Esborra usuari
		pC.esborra(_nickname);
	}
}