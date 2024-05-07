#pragma once
#include "CercadoraInscripcio.h"
#include "UsuariIniciat.h"
#include <iostream>
#include <list>

using namespace System::Collections::Generic; // Para usar List<T>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxConsultaInscripcions
{
public:
	TxConsultaInscripcions();
	void executar();
	List<String^>^ getResult();

private:
	List<String^>^ _result;
};

