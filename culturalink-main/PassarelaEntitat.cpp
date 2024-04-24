#include "pch.h"
#include "PassarelaEntitat.h"


PassarelaEntitat::PassarelaEntitat() {
    nom = "";
    contrasenya = "";
    correuElectronic = "";
    telefon = 0;
    id_entitat = 0;
}
PassarelaEntitat::PassarelaEntitat(String^ nomA, String^ contrasenyaA, String^ correuA, int^ telefonA, int^ id_entitatA) {
    nom = nomA;
    contrasenya = contrasenyaA;
    correuElectronic = correuA;
    telefon = telefonA;
    id_entitat = id_entitatA;
}
PassarelaEntitat::PassarelaEntitat(const PassarelaEntitat% p1)
{
    this->nom = p1.nom;
    this->contrasenya = p1.contrasenya;
    this->correuElectronic = p1.correuElectronic;
    this->telefon = p1.telefon;
    this->id_entitat = p1.id_entitat;

}
PassarelaEntitat% PassarelaEntitat::operator=(const PassarelaEntitat% other)
{
    if (this != % other)
    {
        nom = other.nom;
        contrasenya = other.contrasenya;
        telefon = other.telefon;
        correuElectronic = other.correuElectronic;
        id_entitat = other.id_entitat;
    }
    return *this;
}
void PassarelaEntitat::insereix()
{
    bool encontrado = false;
    String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    int numeroAleatorio;
    while (encontrado == false)
    {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dis(1, 9999);
        numeroAleatorio = dis(gen);
        posaId_Entitat(numeroAleatorio);
        String^ sql = "SELECT * FROM entitat WHERE id_entitat='" + id_entitat + "'";
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
        MySqlDataReader^ dataReader;
        conn->Open();
        dataReader = cmd->ExecuteReader();
        if (!dataReader->Read())
        {
            encontrado = true;
        }
    }
    conn->Close();
    posaId_Entitat(numeroAleatorio);
    String^ sql = "INSERT INTO entitat VALUES('" + numeroAleatorio + "', '" + nom + "', '" + contrasenya + "', '" + telefon + "', '" + correuElectronic + "')";;
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    try {
        // obrim la connexió
        conn->Open();
        // executem la comanda creada abans del try
        dataReader = cmd->ExecuteReader();
    }
    catch (Exception^ ex) {
        // codi per mostrar l’error en una finestra
        MessageBox::Show(ex->Message);
    }
    finally {
        // si tot va bé es tanca la connexió
        conn->Close();
    }
    
}

String^ PassarelaEntitat::obteContrasenya() {
    return contrasenya;
}


String^ PassarelaEntitat::obteNom() {
    return nom;
}


String^ PassarelaEntitat::obteCorreuElectronic() {
    return correuElectronic;
}



int^ PassarelaEntitat::obteid() {
    return id_entitat;
}


int^ PassarelaEntitat::obteTelefon() {
    return telefon;
}


void PassarelaEntitat::posaId_Entitat(int^ id_entitatA) {

    id_entitat = id_entitatA;
}

void PassarelaEntitat::posaTelefon(int^ telefonA) {

    telefon = telefonA;

}

void PassarelaEntitat::posaContrasenya(String^ contrasenyaA) {

    contrasenya = contrasenyaA;

}

void PassarelaEntitat::posaNom(String^ nomA) {

    nom = nomA;

}

void PassarelaEntitat::posaCorreu(String^ correuA) {

    correuElectronic = correuA;

}


