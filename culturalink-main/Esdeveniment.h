#pragma once

using namespace std;
using namespace System;

ref class Esdeveniment
{
public:
	String^ _nom;
	String^ _preu;

	Esdeveniment();
	Esdeveniment(String^ nom, String^ preu);

	String^ getNom();
	String^ getPreu();
};

