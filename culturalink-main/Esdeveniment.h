#pragma once

using namespace std;
using namespace System;

ref class Esdeveniment
{
public:
	String^ _nom;
	float _preu;

	Esdeveniment();
	Esdeveniment(String^ nom, float preu);

	String^ getNom();
	float getPreu();
};

