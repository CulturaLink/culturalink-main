#pragma once
#include "PassarelaEntitat.h"
#include "EntitatIniciat.h"

using namespace std;

const string EntitatNoExisteix = "Hi ha hagut un error amb el correu electronic";

ref class CercadoraEntitat
{
public:
	PassarelaEntitat cercaEntitat(String^ correuE);
	CercadoraEntitat();
private:
};