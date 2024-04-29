#pragma once
#include "../../pch.h"
#include "TxLoginAjuntament.h"

TxLoginAjuntament::TxLoginAjuntament(String^ clauAj, String^ contrasenyaAj) {

	clau = clauAj;
	contrasenya = contrasenyaAj;

}

void TxLoginAjuntament::executar() {

	CercadoraAjuntament cerc;
	PassarelaAjuntament pA = cerc.cercaAjuntament(clau);
	if (pA.getContrasenya() != contrasenya) {
		//MessageBox::Show("DB: "+ logged.getContrasenya()+", ENTRAT: "+contra, "Debuh");
		throw runtime_error("Nom o contrasenya incorrectes, siusplau torna-ho a intentar.");
	}
	else {
		//uso de la clase Singleton
		UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
		usuario->setUsuari(% pA, TipoPassarela::Ajuntament);
	}

}