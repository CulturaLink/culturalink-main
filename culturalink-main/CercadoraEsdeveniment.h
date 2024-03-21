#pragma once

#include "PassarelaEsdeveniment.h"
#include <string>
#include <iostream>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class CercadoraEsdeveniment
{
public:
	CercadoraEsdeveniment();
	PassarelaEsdeveniment^ cercaEsdeveniment(String^ clau);

private:

};

