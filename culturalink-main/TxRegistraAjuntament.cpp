#pragma once
#include "Transaccio.cpp"
#include "PassarelaAjuntament.cpp"

class TxRegistraAjuntament : public Transaccio {
private:
    string nom;
    string clau;
    int telefon;
    string poblacio;
    string correuElectronic;

public:
    TxRegistraAjuntament();
    TxRegistraAjuntament(string nomA, string clauA, string telefonA, string poblacioA, string correuA);
    void executar();
};

TxRegistraAjuntament::TxRegistraAjuntament() {
    inicialitza();

}

TxRegistraAjuntament::TxRegistraAjuntament(string nomA, string clauA, string telefonA, string poblacioA, string correuA) {
    inicialitza();
    nom = nomA;
    clau = clauA;
    telefon = telefonA;
    poblacio = poblacioA;
    correuElectronic = correuA;
}

void TxRegistraAjuntament::executar() {
    PassarelaAjuntament u(nom, clau, telefon, poblacio, correuElectronic);
    u.insereix();
}
