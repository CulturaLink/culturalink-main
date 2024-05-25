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
	void esborra(String^ nickname);
	void borrar_punts(int^ preuPuntsEsdev);
	void borrar_diners(int^ preuEsd);
	void afegir_punts_entrada(int^ punts);
	void devolucio_punts(int^ punts);
	void devolucio_diners(int^ diners);
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
