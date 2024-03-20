#pragma once
#include "PassarelaAjuntament.h"
#include <string>
#include <iostream>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class CercadoraAjuntament
{
public:
	PassarelaAjuntament cercaAjuntament(String^ clau);
	CercadoraAjuntament();
private:

};

