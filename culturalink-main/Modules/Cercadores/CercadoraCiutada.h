#pragma once
#include<iostream>
#include "../Passareles/PassarelaCiutada.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class CercadoraCiutada
{
private:

public:
	PassarelaCiutada cercaCiutada(String^ nickname);
};

