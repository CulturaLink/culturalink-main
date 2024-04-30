#pragma once

using namespace std;
using namespace System;

ref class Esdeveniment
{
private:
	String^ _idEnt;
	String^ _preu;
	String^ _ajunt;
	String^ _desc;
	String^ _nom;
	String^ _tipus;
	String^ _aforament;
	String^ _puntsCost;
	String^ _data;
	String^ _puntsDesc;

public:
	
	Esdeveniment();
	Esdeveniment(String^ nom, String^ preu);
	Esdeveniment(String^ idEnt, String^ preu, String^ ajunt, String^ desc, String^ nom, String^ tipus, 
				 String^ aforament, String^ puntsCost, String^ data, String^ puntsDesc);

	String^ getIdEnt();
	String^ getPreu();
	String^ getAjunt();
	String^ getDesc();
	String^ getNom();
	String^ getTipus();
	String^ getAforament();
	String^ getPuntsCost();
	String^ getData();
	String^ getPuntsDesc();
};

