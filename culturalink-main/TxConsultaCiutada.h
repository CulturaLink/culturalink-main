#pragma once

#include "UsuariIniciat.h"
#include "CercadoraCiutada.h"
#include <iostream>
#include <vector>

using namespace System::Collections::Generic; // Para usar List<T>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

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