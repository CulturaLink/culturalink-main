#pragma once

#include "../Passareles/PassarelaAjuntament.h"
#include <string>
#include <iostream>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class CercadoraAjuntament
{
public:
	CercadoraAjuntament();
	PassarelaAjuntament cercaAjuntament(String^ clau);

private:

};