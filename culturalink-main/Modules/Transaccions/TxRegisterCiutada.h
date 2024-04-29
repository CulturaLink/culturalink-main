#pragma once
#include<iostream>
#include "../Cercadores/CercadoraCiutada.h"
#include "../Users/UsuariIniciat.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

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