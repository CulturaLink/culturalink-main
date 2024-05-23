#pragma once

#include "PassarelaInscripcio.h"

#include <string>
#include <iostream>
#include <vector>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

ref class CercadoraInscripcio
{
public:
	CercadoraInscripcio();
	List<PassarelaInscripcio^>^ cercaTotesInscripcions(String^ nick);
	PassarelaInscripcio cercaInscripcio(String^ nick, String^ nom_esdev);

private:
};

