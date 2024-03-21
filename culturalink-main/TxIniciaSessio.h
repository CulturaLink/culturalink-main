#pragma once
#include "PassarelaEntitat.h"
#include "CercadoraEntitat.h"
#include "Transaccio.h"
//#include "Windows.h"

const string ErrorContranseya = "Hi ha hagut un error amb la contrasenya";

ref class TxIniciaSessio: public Transaccio {
public:
	TxIniciaSessio(String^ cE, String^ contraE);
	void executar() override;
private:
	String^ correuE;
	String^ contrasenyaE;
};
