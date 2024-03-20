#pragma once
#include<iostream>
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
ref class PassarelaCiutada
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
	PassarelaCiutada(const PassarelaCiutada% p1);
	//Ciutada();
	PassarelaCiutada(String^ nickname);//Omple ciutada segons nick
	PassarelaCiutada(String^ nickname, String^ nom_complet, String^ correu);
	String^ getContrasenya();

};

