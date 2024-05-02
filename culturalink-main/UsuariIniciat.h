#pragma once
#include <iostream>
#include "PassarelaCiutada.h"
#include "PassarelaEntitat.h"
#include "PassarelaAjuntament.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

enum class TipoPassarela { Ciutada, Entitat, Ajuntament }; // Definici�n de los tipos de Passarela

ref class UsuariIniciat
{
private:
    static UsuariIniciat^ instancia = nullptr;
    Object^ usuariIniciat; // Usamos Object^ para poder almacenar cualquier tipo de Passarela
    TipoPassarela tipoPassarela; // Tipo de Passarela actual

    // Constructor privado para evitar la creaci�n de instancias desde fuera de la clase
    UsuariIniciat() {}

public:
    // M�todo para obtener la instancia �nica de UsuarioSingleton
    static UsuariIniciat^ ObtenerInstancia()
    {
        if (instancia == nullptr)
        {
            instancia = gcnew UsuariIniciat();
        }
        return instancia;
    }

    // M�todo para establecer el usuario logueado
    void setUsuari(Object^ usuari, TipoPassarela tipo)
    {
        usuariIniciat = usuari;
        tipoPassarela = tipo;
    }

    // M�todos para obtener el usuario logueado y su tipo
    Object^ getUsuari()
    {
        return usuariIniciat;
    }

    TipoPassarela getTipoPassarela()
    {
        return tipoPassarela;
    }

    bool algunUsuariIniciat() {
        return !(usuariIniciat == NULL);
    }

    void logOut() {
        usuariIniciat = NULL;
    }

};