#pragma once
#include "pch.h"
#include "PassarelaEsdeveniment.h"

PassarelaEsdeveniment::PassarelaEsdeveniment() {
    _idEnt = 0;
    _preu = 0;
    _ajEsd = "";
    _descEsd = "";
    _nomEsd = "";
    _tipusEsd = "";
    _aforamentEsd = 0;
    _puntsCostEsd = 0;
    _dataEsd = "";
    _puntsDescEsd = 0;
}

PassarelaEsdeveniment::PassarelaEsdeveniment(int idEnt, float preu, String^ ajEsd, String^ descEsd, String^ nomEsd, String^ tipusEsd, int aforamentEsd, int puntsCostEsd, String^ dataEsd, int puntsDescEsd) {
    _idEnt = idEnt;
    _preu = preu;
    _ajEsd = ajEsd;
    _descEsd = descEsd;
    _nomEsd = nomEsd;
    _tipusEsd = tipusEsd;
    _aforamentEsd = aforamentEsd;
    _puntsCostEsd = puntsCostEsd;
    _dataEsd = dataEsd;
    _puntsDescEsd = puntsDescEsd;
}

PassarelaEsdeveniment::PassarelaEsdeveniment(String^ nomEsdev, float preu)
{
    _nomEsd = nomEsdev;
    _preu = preu;
}


PassarelaEsdeveniment% PassarelaEsdeveniment::operator=(const PassarelaEsdeveniment% other)
{
    if (this != % other)
    {
        _idEnt = other._idEnt;
        _preu = other._preu;
        _ajEsd = other._ajEsd;
        _descEsd = other._descEsd;
        _nomEsd = other._nomEsd;
        _tipusEsd = other._tipusEsd;
        _aforamentEsd = other._aforamentEsd;
        _puntsCostEsd = other._puntsCostEsd;
        _dataEsd = other._dataEsd;
        _puntsDescEsd = other._puntsDescEsd;

    }
    return *this;
}

PassarelaEsdeveniment::PassarelaEsdeveniment(const PassarelaEsdeveniment% p1)
{
    this->_idEnt = p1._idEnt;
    this->_preu = p1._preu;
    this->_ajEsd = p1._ajEsd;
    this->_descEsd = p1._descEsd;
    this->_nomEsd = p1._nomEsd;
    this->_tipusEsd = p1._tipusEsd;
    this->_aforamentEsd = p1._aforamentEsd;
    this->_puntsCostEsd = p1._puntsCostEsd;
    this->_dataEsd = p1._dataEsd;
    this->_puntsDescEsd = p1._puntsDescEsd;
}

void PassarelaEsdeveniment::insereix() {
    String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    UsuariIniciat^ usuario = UsuariIniciat::ObtenerInstancia();

    PassarelaEntitat^ passEnt = safe_cast<PassarelaEntitat^>(usuario->getUsuari());

    String^ idString = passEnt->obteid()->ToString();

    if (_preu < 0) {
        throw (preuNegatiu);
    }

    String^ sql = "INSERT INTO amep14.esdeveniment "
        "(id_entitat, preu_esdeveniment, ajuntament_esdeveniment, descripcio_esdeveniment, "
        "nom_esdeveniment, tipus, aforament, punts_cost, data, punts_descompte) "
        "VALUES (" + idString + ", " + _preu + ", '" + _ajEsd + "', '" + _descEsd + "', '"
        + _nomEsd + "', '" + _tipusEsd + "', " + _aforamentEsd + ", " + _puntsCostEsd + ", '"
        + _dataEsd + "', " + _puntsDescEsd + ");";



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


int PassarelaEsdeveniment::getIdEnt() {
    return _idEnt;
}

float PassarelaEsdeveniment::getPreu() {
    return _preu;
}

String^ PassarelaEsdeveniment::getAjEsd() {
    return _ajEsd;
}

String^ PassarelaEsdeveniment::getDescEsd() {
    return _descEsd;
}

String^ PassarelaEsdeveniment::getNomEsd() {
    return _nomEsd;
}

String^ PassarelaEsdeveniment::getTipusEsd() {
    return _tipusEsd;
}

int PassarelaEsdeveniment::getAforamentEsd() {
    return _aforamentEsd;
}

int PassarelaEsdeveniment::getPuntsCostEsd() {
    return _puntsCostEsd;
}

String^ PassarelaEsdeveniment::getDataEsd() {
    return _dataEsd;
}

int PassarelaEsdeveniment::getPuntsDescEsd() {
    return _puntsDescEsd;
}









