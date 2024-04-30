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

Esdeveniment::Esdeveniment(String^ idEnt, String^ preu, String^ ajunt, String^ desc, String^ nom, String^ tipus,
	String^ aforament, String^ puntsCost, String^ data, String^ puntsDesc) 
{
	_idEnt = idEnt; 
	_preu = preu;
	_ajunt = ajunt;
	_desc = desc;
	_nom = nom;
	_tipus = tipus;
	_aforament = aforament;
	_puntsCost = puntsCost;
	_data = data;
	_puntsDesc = puntsDesc;
}

String^ Esdeveniment::getIdEnt() 
{
	return _idEnt;
}

String^ Esdeveniment::getPreu() 
{
	return _preu;
}

String^ Esdeveniment::getAjunt()
{
	return _ajunt;
}

String^ Esdeveniment::getDesc()
{
	return _desc;
}

String^ Esdeveniment::getNom()
{
	return _nom;
}

String^ Esdeveniment::getTipus()
{
	return _tipus;
}
String^ Esdeveniment::getAforament()
{
	return _aforament;
}

String^ Esdeveniment::getPuntsCost()
{
	return _puntsCost;
}

String^ Esdeveniment::getData()
{
	return _data;
}

String^ Esdeveniment::getPuntsDesc()
{
	return _puntsDesc;
}
