#pragma once
#include "../../pch.h"
#include "TxIniciaSessio.h"

TxIniciaSessio::TxIniciaSessio(String^ cE, String^ contraE)
{
	correuE = cE;
	contrasenyaE = contraE;
}
void TxIniciaSessio::executar()
{
	CercadoraEntitat c1;
	PassarelaEntitat p1 = c1.cercaEntitat(correuE);
	if(%p1 != nullptr) 
		if (p1.obteContrasenya() != contrasenyaE) 
			throw runtime_error("Nom o contrasenya incorrectes, siusplau torna-ho a intentar.");
	else
	{
		UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
		usuario->setUsuari(% p1, TipoPassarela::Entitat);
	}
}