#pragma once
#include <iostream>
#include <string>


using namespace std;

const int ErrorContrasenya = 2;

class Transaccio {
public:


    Transaccio();
    virtual void executar() = 0;
    ~Transaccio();



protected:

    void inicialitza();

};


Transaccio::Transaccio() {
    inicialitza();
}

Transaccio::~Transaccio() {

}

void Transaccio::inicialitza() {

}