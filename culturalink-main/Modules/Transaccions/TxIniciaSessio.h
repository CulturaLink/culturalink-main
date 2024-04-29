#pragma once
#include "../Passareles/PassarelaEntitat.h"
#include "../Cercadores/CercadoraEntitat.h"
#include "../Users/UsuariIniciat.h"
#include "Transaccio.h"

const string ErrorContranseya = "Hi ha hagut un error amb la contrasenya";

ref class TxIniciaSessio: public Transaccio {
public:
	TxIniciaSessio(String^ cE, String^ contraE);
	void executar() override;
private:
	String^ correuE;
	String^ contrasenyaE;
};
