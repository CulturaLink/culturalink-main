#pragma once
#include<iostream>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
#include "PassarelaCiutada.h"
ref class CercadoraCiutada
{
private:

public:
	PassarelaCiutada cercaCiutada(String^ nickname);
};

