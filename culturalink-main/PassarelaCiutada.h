#pragma once
#include <iostream>
#include <string>
#include "UsuariIniciat.h"
#include "ExcepcioCorreuExisteix.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

using namespace CostumCorreuExisteix;

ref class PassarelaCiutada
{
public:
	PassarelaCiutada();
	PassarelaCiutada(const PassarelaCiutada% p1);

	PassarelaCiutada% operator=(const PassarelaCiutada% other);
	PassarelaCiutada(String^ nickname);//Omple ciutada segons nick
	PassarelaCiutada(String^ nickname, String^ nom_complet, String^ correu);
	PassarelaCiutada(String^ name, String^ fullName, String^ password, String^ email, String^ date);
	PassarelaCiutada(String^ name, String^ fullName, String^ password, String^ email, String^ date, int diners, int punts);
	
	void insereix();
	void modifica();
	void modificaSensData();
	void esborra(String^ nickname);

	//void borrar_punts(int^ preuPuntsEsdev);
	//void borrar_diners(int^ preuEsd);

	void borrar_punts(int^ quantitat, int^ punts2);
	void borrar_diners(int^ preuEsd, int^ quantitat);

	void afegir_punts_entrada(int^ punts);
	void devolucio_punts(int^ punts);
	void devolucio_diners(int^ diners);
	//Ciutada();
	String^ getContrasenya();
	String^ getNickname();
	String^ getNomComplet() { return _nom_complet; }
	String^ getCorreu() { return _correu; }
	String^ getDataNaix() { return _data_naix; }
	int^ getDiners() { return _diners; }
	int^ getPunts() { return _punts; }

	void setNom(String^ nNom) { _nom_complet = nNom; }
	void setCorreu(String^ nCorr) { _correu = nCorr; }
	void setData_naix(String^ nDat) { _data_naix = nDat; }
	void setContrasenya(String^ nPass) { _contrasenya = nPass; }

private:
	String^ _nickname;
	String^ _nom_complet;
	String^ _contrasenya;
	String^ _correu;
	String^ _data_naix;
	int^ _diners;
	int^ _punts;
};
