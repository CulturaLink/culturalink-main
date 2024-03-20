#pragma once
#include "PassarelaEntitat.h"
#include "CercadoraEntitat.h"
//#include "Windows.h"

const string ErrorContranseya = "Hi ha hagut un error amb la contrasenya";

ref class TxIniciaSessio
{
public:
	TxIniciaSessio(String^ cE, String^ contraE);
	void executar();
private:
	String^ correuE;
	String^ contrasenyaE;
};
