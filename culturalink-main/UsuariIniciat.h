#pragma once
#include <iostream>
#include "PassarelaCiutada.h"
#include "PassarelaEntitat.h"
#include "PassarelaAjuntament.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

enum class TipoPassarela { Ciutada, Entitat, Ajuntament }; // Definición de los tipos de Passarela

ref class UsuariIniciat
{
private:
    static UsuariIniciat^ instancia = nullptr;
    Object^ usuariIniciat; // Usamos Object^ para poder almacenar cualquier tipo de Passarela
    TipoPassarela tipoPassarela; // Tipo de Passarela actual

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

    // Método para establecer el usuario logueado
    void setUsuari(Object^ usuari, TipoPassarela tipo)
    {
        usuariIniciat = usuari;
        tipoPassarela = tipo;
    }

    // Métodos para obtener el usuario logueado y su tipo
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