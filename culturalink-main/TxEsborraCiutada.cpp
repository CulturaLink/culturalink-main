#include "pch.h"
#include "TxEsborraCiutada.h"
#include "MainForm.h"
#include "UsuariIniciat.h"
using namespace System::Windows::Forms;

TxEsborraCiutada::TxEsborraCiutada(String^ contra) {
	//_nickname = nick;
	_contrasenya = contra;
}

void TxEsborraCiutada::executar() {
	UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
	Object^ usuarioAlmacenado = usuari->getUsuari();
	//TipoPassarela tipoUsuario = usuari->getTipoPassarela();

	CercadoraCiutada cerc;
	//PassarelaCiutada pC = cerc.cercaCiutada(_nickname);
	PassarelaCiutada^ pC = safe_cast<PassarelaCiutada^>(usuarioAlmacenado);
	if (pC->getContrasenya() != _contrasenya) {
		//MessageBox::Show("DB: "+ logged.getContrasenya()+", ENTRAT: "+contra, "Debuh");
		throw runtime_error("Contrasenya incorrecta, siusplau torna-ho a intentar.");
	}
	else {
		//uso de la clase Singleton
		//UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
		//usuari->setUsuari(% pC, TipoPassarela::Ciutada);

		//Esborra usuari
		pC->esborra();
		usuari->logOut();
	}
}