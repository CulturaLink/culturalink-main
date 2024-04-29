#pragma once
#include <iostream>
#include "../Passareles/PassarelaAjuntament.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref class AjuntamentIniciat
{
private:
    static AjuntamentIniciat^ instancia = nullptr;
    PassarelaAjuntament ajuntamentIniciat;

    // Constructor privado para evitar la creaci�n de instancias desde fuera de la clase
    AjuntamentIniciat() {}

public:
    // M�todo para obtener la instancia �nica de UsuarioSingleton
    static AjuntamentIniciat^ ObtenerInstancia()
    {
        if (instancia == nullptr)
        {
            instancia = gcnew AjuntamentIniciat();
        }
        return instancia;
    }

    // M�todos para establecer y obtener el usuario logueado
    void setAjuntament(PassarelaAjuntament usuari)
    {
        ajuntamentIniciat = usuari;

    }

    PassarelaAjuntament getAjuntament()
    {
        return ajuntamentIniciat;
    }

    String^ getAjuntamentClau()
    {
        return ajuntamentIniciat.getClau();
    }

};