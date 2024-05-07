#pragma once
#include<iostream>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class TxEsborraEsdeveniment
{
public:

	TxEsborraEsdeveniment(String^ esdeveniment);
	void executar();
private:
	String^ _nomEsdeveniment;
};

