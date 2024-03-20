#pragma once
#include<iostream>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
ref class Ciutada
{
private:
	
	String^ _nickname;
	String^ _nom_complet;
	String^ _contrasenya;
	String^ _correu;
	String^ _data_naix;
	int^ _diners;
	int^ _punts;

public:
	//Ciutada();
	Ciutada(String^ nickname);//Omple ciutada segons nick
	Ciutada(String^ nickname, String^ nom_complet, String^ correu);
	String^ getContrasenya();

};

