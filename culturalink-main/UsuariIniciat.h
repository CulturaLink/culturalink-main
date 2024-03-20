#pragma once
#include <iostream>
#include "PassarelaCiutada.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

ref class UsuariIniciat
{
private:
    static UsuariIniciat^ instancia = nullptr;
    PassarelaCiutada usuariIniciat;

    // Constructor privado para evitar la creación de instancias desde fuera de la clase
    UsuariIniciat() {}

public:
    // Método para obtener la instancia única de UsuarioSingleton
    static UsuariIniciat^ ObtenerInstancia()
    {
        if (instancia == nullptr)
        {
            instancia = gcnew UsuariIniciat();
        }
        return instancia;
    }

    // Métodos para establecer y obtener el usuario logueado
    void setUsuari(PassarelaCiutada usuari)
    {
        usuariIniciat = usuari;

    }

    PassarelaCiutada getUsuari()
    {
        return usuariIniciat;
    }

    String^ getUsuariNickname()
    {
        return usuariIniciat.getNickname();
    }

};