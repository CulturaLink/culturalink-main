#pragma once

#include "CercadoraEsdeveniment.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxCanviaEstatPeticio
{
private:
	String^ _nomEsdev;
	bool _estat;
public:
	TxCanviaEstatPeticio(String^ nomEsdev, bool estat);
	void executar();
};