#pragma once
#include "PassarelaEntitat.h"
#include "CercadoraEntitat.h"
//#include "Windows.h"
#include <string>

const string ErrorContranseya = "Hi ha hagut un error amb la contrasenya";

ref class TxLogin
{
public:
	TxLogin(String^ cE, String^ contraE);
	void executar2();
private:
	String^ correuE;
	String^ contrasenyaE;
}; 
