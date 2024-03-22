#pragma once
#pragma once
#include<iostream>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
#include "CercadoraCiutada.h"
ref class TxRegisterCiutada
{
private:
	String^ _nickname;
	String^ _correu;
	String^ _nom_complet;
	String^ _contrasenya;
	String^ _data_naix;

public:
	TxRegisterCiutada(String^ name, String^ email, String^ fullName, String^ password, String^ date);
	void executar();

};