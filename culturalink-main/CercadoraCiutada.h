#pragma once
#include<iostream>
#include <string>
#include <vector>
#include "PassarelaCiutada.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class CercadoraCiutada
{
public:
	CercadoraCiutada();
	PassarelaCiutada cercaCiutada(String^ nickname);

private:

};

