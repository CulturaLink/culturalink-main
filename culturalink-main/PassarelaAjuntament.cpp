#pragma once
#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "config.h"

using namespace std;

const int SobrenomExisteix = 3;
const int CorreuExisteix = 4;

class PassarelaAjuntament {
public:
    PassarelaAjuntament(pqxx::result result);
    PassarelaAjuntament();
    PassarelaAjuntament(string nomA, string clauA, string telefonA, string poblacioA, string correuA);
    void insereix();
    void modifica();
    void esborra();

    string obteNom();
    string obteClau();
    string obteTelefon();
    string obtePoblacio();
    string obteCorreu();
    void posaNom(string nomA);
    void posaClau(string clauA);
    void posaTelefon(string telefonA);
    void posaPoblacio(string pobA);
    void posaCorreu(string correuA)

private:
    string nom, sobrenom, contrasenya, correuElectronic, dataNaixement;
};

PassarelaAjuntament::PassarelaAjuntament() {
    nom = "";
    sobrenom = "";
    contrasenya = "";
    correuElectronic = "";
    dataNaixement = "";

}

PassarelaAjuntament::PassarelaAjuntament(pqxx::result result) {
    if (!result.empty()) {

        sobrenom = result[0][0].c_str();
        nom = result[0][1].c_str();
        contrasenya = result[0][2].c_str();
        correuElectronic = result[0][3].c_str();
        dataNaixement = result[0][4].c_str();
    }
}


PassarelaAjuntament::PassarelaAjuntament(string nomU, string sobrenomU, string contrasenyaU, string correuElectronicU, string dataNaixementU) {

    nom = nomU;
    sobrenom = sobrenomU;
    contrasenya = contrasenyaU;
    correuElectronic = correuElectronicU;
    dataNaixement = dataNaixementU;

}

void PassarelaAjuntament::insereix() {
    try {
        pqxx::connection conn("dbname=" + DBNAME + " user=" + USER + " password=" + PASSWORD + " hostaddr=" + HOSTADDR + " port=" + PORT);

        if (conn.is_open()) {
            pqxx::result comprovarSobrenom;
            pqxx::work txn(conn);
            comprovarSobrenom = txn.exec("SELECT sobrenom FROM usuari "
                "WHERE sobrenom = '" + sobrenom + "' ");
            if (!comprovarSobrenom.empty()) throw (SobrenomExisteix);


            pqxx::result comprovarCorrE;
            comprovarCorrE = txn.exec("SELECT correu_electronic FROM usuari "
                "WHERE correu_electronic = '" + correuElectronic + "' ");
            if (!comprovarCorrE.empty()) throw (CorreuExisteix);


            string query = "INSERT INTO usuari VALUES('" + sobrenom + "', '" + nom + "', '" + contrasenya + "', '" + correuElectronic + "', '" + dataNaixement + "')";
            pqxx::result result = txn.exec(query);
            txn.commit();
        }
    }
    catch (const std::exception& e) {
        cerr << e.what() << endl;
    }
}

void PassarelaAjuntament::modifica() {

    try {
        pqxx::connection conn("dbname=" + DBNAME + " user=" + USER + " password=" + PASSWORD + " hostaddr=" + HOSTADDR + " port=" + PORT);

        if (conn.is_open()) {
            pqxx::result comprovarSobrenom;
            pqxx::work txn(conn);

            pqxx::result comprovarCorrE;
            comprovarCorrE = txn.exec("SELECT correu_electronic FROM usuari "
                "WHERE correu_electronic = '" + correuElectronic + "' ");
            if (!comprovarCorrE.empty()) throw (CorreuExisteix);

            string query = "UPDATE usuari SET "
                "nom = '" + nom + "', "
                "contrasenya = '" + contrasenya + "', "
                "correu_electronic = '" + correuElectronic + "', "
                "data_naixement = '" + dataNaixement + "' "
                "WHERE sobrenom = '" + sobrenom + "';";

            pqxx::result result = txn.exec(query);
            txn.commit();
        }
    }
    catch (const std::exception& e) {
        cerr << e.what() << endl;
    }
}

void PassarelaAjuntament::esborra() {

    try {
        pqxx::connection conn("dbname=" + DBNAME + " user=" + USER + " password=" + PASSWORD + " hostaddr=" + HOSTADDR + " port=" + PORT);

        if (conn.is_open()) {
            pqxx::result comprovarSobrenom;
            pqxx::work txn(conn);

            string query = "DELETE FROM usuari WHERE sobrenom = '" + sobrenom + "' ";

            pqxx::result result = txn.exec(query);
            txn.commit();
        }
    }
    catch (const std::exception& e) {
        cerr << e.what() << endl;
    }

}

string PassarelaAjuntament::obteContrasenya() {
    return contrasenya;
}


string PassarelaAjuntament::obteNom() {
    return nom;
}

string PassarelaAjuntament::obteSobrenom() {
    return sobrenom;
}

string PassarelaAjuntament::obteCorreuElectronic() {
    return correuElectronic;
}

string PassarelaAjuntament::obteDataNaixement() {
    return dataNaixement;
}

void PassarelaAjuntament::posaContrasenya(string contraU) {

    contrasenya = contraU;

}

void PassarelaAjuntament::posaNom(string nomU) {

    nom = nomU;

}

void PassarelaAjuntament::posaCorreuElectronic(string correuU) {

    correuElectronic = correuU;

}

void PassarelaAjuntament::posaDataNaixement(string neixU) {

    dataNaixement = neixU;

}