#include "../../pch.h"
#include "TxRegisterCiutada.h"

TxRegisterCiutada::TxRegisterCiutada(String^ name, String^ email, String^ fullName, String^ password, String^ date) {

	_nickname = name;
	_correu = email;
	_nom_complet = fullName;
	_contrasenya = password;
	_data_naix = date;
}

void TxRegisterCiutada::executar() {
	//CercadoraCiutada cerc;
	PassarelaCiutada pC;
	pC.crear(_nickname, _nom_complet, _contrasenya, _correu, _data_naix);
	pC.insereix();
}