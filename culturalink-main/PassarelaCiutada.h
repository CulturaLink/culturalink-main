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
	PassarelaCiutada();
	PassarelaCiutada(const PassarelaCiutada% p1);
	PassarelaCiutada% operator=(const PassarelaCiutada% other);
	void crear(String^ name, String^ fullName, String^ password, String^ email, String^ date);
	void insereix();
	void borrar_punts();
	void borrar_diners(int^ preuEsd);
	//Ciutada();
	PassarelaCiutada(String^ nickname);//Omple ciutada segons nick
	PassarelaCiutada(String^ nickname, String^ nom_complet, String^ correu);
	String^ getContrasenya();
	String^ getNickname();
	String^ getNomComplet() { return _nom_complet; }
	String^ getCorreu() { return _correu; } 
	String^ getDataNaix() { return _data_naix; } 
	int^ getDiners() { return _diners; }
	int^ getPunts() { return _punts; } 
};

