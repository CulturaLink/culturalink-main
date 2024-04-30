#include "pch.h"
#include "Esdeveniment.h"

Esdeveniment::Esdeveniment()
{
	_nom = "";
	_preu = "";
}

Esdeveniment::Esdeveniment(String^ nom, String^ preu) 
{
	_nom = nom;
	_preu = preu;
}

String^ Esdeveniment:: getNom()
{
	return _nom;
}

String^ Esdeveniment:: getPreu()
{
	return _preu;
}
