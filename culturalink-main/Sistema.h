#pragma once

#include <iostream>
#include <string>
//#include "PassarelaCiutada.h"
//#include <memory> // Para std::unique_ptr
#include "PassarelaEntitat.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

class Sistema {
private:
    Sistema() {
    }
    //PassarelaCiutada ciutada;
   //PassarelaEntitat entitat;

public:
    //PassarelaCiutada obteCiutada();
   // PassarelaEntitat obteEntitat();
    //void iniciaSessioCiutada(PassarelaCiutada u);
    void iniciaSessioEntitat(PassarelaEntitat e);
    void tancaSessio();
    void refresca(String^ id);
    static Sistema& getInstance() {
        static Sistema instance;
        return instance;
    }
};
