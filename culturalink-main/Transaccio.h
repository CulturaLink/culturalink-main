#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

const int ErrorContrasenya = 2;

ref class Transaccio {
public:
    Transaccio();
    virtual void executar() = 0;
    ~Transaccio();
protected:
   /* CercadoraUsuari cercUsu;
    CercadoraCompres cercComp;
    CercadoraElemCompra cercElemComp;
    CercadoraVideojocs cercVid;
    CercadoraConte cercConte;
    CercadoraPaquetVideojoc cercPaquet;*/
    void inicialitza();

};
