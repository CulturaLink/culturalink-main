#include "pch.h"
#include "TxEsborraEntitat.h"
#include "UsuariIniciat.h"

TxEsborraEntitat::TxEsborraEntitat(String^ contrasenya)
{
    _contrasenya = contrasenya;
}

void TxEsborraEntitat::executar()
{
	UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();
	Object^ usuarioAlmacenado = usuario->getUsuari();
	TipoPassarela tipoUsuario = usuario->getTipoPassarela();

	if (tipoUsuario == TipoPassarela::Entitat) {
		PassarelaEntitat^ usuarioEntitat = safe_cast<PassarelaEntitat^>(usuarioAlmacenado);

		if (usuarioEntitat->obteContrasenya() != _contrasenya) {
			//MessageBox::Show("DB: "+ logged.getContrasenya()+", ENTRAT: "+contra, "Debuh");
			throw runtime_error("Contrasenya incorrecta, siusplau torna-ho a intentar.");
		}

		else {
			usuarioEntitat->esborra();
			usuario->logOut();
		}
	}

}
