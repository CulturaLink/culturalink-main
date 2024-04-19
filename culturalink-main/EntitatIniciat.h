#pragma once

#include <iostream>
//#include "PassarelaCiutada.h"
//#include <memory> // Para std::unique_ptr
#include "PassarelaEntitat.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

ref class EntitatIniciat {
private:
    static EntitatIniciat^ instancia = nullptr;
    EntitatIniciat() {
    }
    //PassarelaCiutada ciutada;
   PassarelaEntitat entitat;

public:
    //PassarelaCiutada obteCiutada();
  
    //void iniciaSessioCiutada(PassarelaCiutada u);
  
    static EntitatIniciat^ ObtenerInstancia()
    {
        if (instancia == nullptr)
        {
            instancia = gcnew EntitatIniciat();
        }
        return instancia;
    }

    // Métodos para establecer y obtener el usuario logueado
    void setUsuari(PassarelaEntitat usuari)
    {
        entitat = usuari;

    }

    PassarelaEntitat getUsuari()
    {
        return entitat;
    }

    String^ getUsuariNickname()
    {
        return entitat.obteNom();
    }

    int^ getId()
    {
        return entitat.obteid();
    }
};
