#pragma once

#include <iostream>
#include <string>
// Afegir include totes les cercadores.
#include "Sistema.cpp"

using namespace std;

const int ErrorContrasenya = 2;

ref class Transaccio {
public:
    Transaccio();
    virtual void executar() = 0;
    ~Transaccio();

protected:

    // Afegir declaracio Cercadores.
    void inicialitza();

};