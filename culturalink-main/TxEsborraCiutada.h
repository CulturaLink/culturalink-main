#pragma once
#include<iostream>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
#include "CercadoraCiutada.h"
ref class TxEsborraCiutada
{
private:
	String^ _nickname;
	String^ _contrasenya;

public:
	TxEsborraCiutada(String^ nick, String^ contra);
	void executar();
};
