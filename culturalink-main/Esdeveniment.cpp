#include "pch.h"
#include "Esdeveniment.h"

Esdeveniment::Esdeveniment()
{
	_nom = "";
	_preu = 0.0f;
}

Esdeveniment::Esdeveniment(String^ nom, float preu) 
{
	_nom = nom;
	_preu = preu;
}

String^ Esdeveniment:: getNom()
{
	return _nom;
}

float Esdeveniment:: getPreu()
{
	return _preu;
}
