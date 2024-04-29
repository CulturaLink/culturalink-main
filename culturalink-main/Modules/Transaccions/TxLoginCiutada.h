#pragma once
#include <iostream>
#include "../Cercadores/CercadoraCiutada.h"
#include "../Users/UsuariIniciat.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxLoginCiutada
{
private:
	

	String^ _nickname;
	String^ _contrasenya;
public:
	TxLoginCiutada(String^ nick, String^ contra);
	void executar();

};

