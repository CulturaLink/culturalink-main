#include "pch.h"
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
	if(%p1 != nullptr) if (p1.obteContrasenya() != contrasenyaE) throw(ErrorContranseya);
}