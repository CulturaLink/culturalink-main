#pragma once
#include "Transaccio.h"
#include "PassarelaEsdeveniment.h"
#include <string>

using namespace std;

ref class TxRegistraEsdeveniment : public Transaccio {
private:
    String^ nomE;
    String^ descripcioE;
    float preuE;
    String^ correuElectronicE;

public:
    TxRegistraEsdeveniment();
    //TxRegistraEsdeveniment(string nU, string sU, string cU, string ceU, string dnU);
    void ejecutar();
};