#pragma once

#include <iostream>
#include <string>
#include "PassarelaCiutada.h"
#include "PassarelaEntitat.h"

using namespace std;

class Sistema {
private:
	Sistema() {

	}
	//PassarelaCiutada ciutada;
    //PassarelaEntitat entitat;

public:
	/*PassarelaCiutada obteCiutada();
    PassarelaEntitat obteEntitat();
	void iniciaSessioCiutada(PassarelaCiutada u);
	void iniciaSessioEntitat(PassarelaEntitat u);
	void tancaSessio();*/
	void refresca()
	{

	}
	static Sistema& getInstance() {
		static Sistema instance;
		instance.refresca();
		return instance;
	}
};
