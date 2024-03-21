#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;


ref class Transaccio {
public:
    Transaccio();
    virtual void executar() = 0;
    ~Transaccio();
protected:
    void inicialitza();

};
