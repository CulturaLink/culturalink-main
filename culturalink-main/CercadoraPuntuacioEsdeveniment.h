
#pragma once
#include<iostream>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
#include "PassarelaPuntuacioEsdeveniment.h"
ref class CercadoraPuntuacioEsdeveniment
{
private:

public:

	CercadoraPuntuacioEsdeveniment();
	PassarelaPuntuacioEsdeveniment cercaPuntuacio(String^ nomEsdeveniment, String^ nickCiutada);
};