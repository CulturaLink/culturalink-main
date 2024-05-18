#pragma once
#include "CercadoraCiutada.h"
#include <iostream>
#include <vector>

ref class TxConsultaCiutada
{
public:
	TxConsultaCiutada();

	void executar();
	List<String^>^ getResult();
	PassarelaCiutada^ getCiutada();

private:
	PassarelaCiutada^ ciutada;
	List<String^>^ result;
};

