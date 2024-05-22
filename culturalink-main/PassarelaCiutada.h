#pragma once
#include <iostream>
#include <string>
#include "UsuariIniciat.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

ref class PassarelaCiutada
{
public:
	PassarelaCiutada();
	PassarelaCiutada(const PassarelaCiutada% p1);

	PassarelaCiutada% operator=(const PassarelaCiutada% other);
	PassarelaCiutada(String^ name, String^ fullName, String^ password, String^ email, String^ date, int diners, int punts);
	PassarelaCiutada(String^ nickname, String^ nom_complet, String^ correu);

	void insereix();
	void modifica();
	//void esborra();

	String^ getContrasenya();
	String^ getNickname();
	String^ getNomComplet() { return _nom_complet; }
	String^ getCorreu() { return _correu; } 
	String^ getDataNaix() { return _data_naix; } 
	int^ getDiners() { return _diners; }
	int^ getPunts() { return _punts; }

private:
	String^ _nickname;
	String^ _nom_complet;
	String^ _contrasenya;
	String^ _correu;
	String^ _data_naix;
	int^ _diners;
	int^ _punts;
};

