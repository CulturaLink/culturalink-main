#pragma once
#include<iostream>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxEsborraEntitat
{
public:

	TxEsborraEntitat(String^ contrasenya);
	void executar();
private:
	String^ _contrasenya;
};

