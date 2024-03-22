#pragma once
#include "pch.h"
#include "PassarelaEsdeveniment.h"



PassarelaEsdeveniment::PassarelaEsdeveniment(int idEnt, float preu, String^ ajEsd , String^ descEsd, String^ nomEsd ) {
    _idEnt = idEnt;
    _preu = preu;
    _ajEsd = ajEsd;
    _descEsd = descEsd;
    _nomEsd = nomEsd;
}


PassarelaEsdeveniment::PassarelaEsdeveniment() {
    _idEnt = 0;
    _preu = 0;
    _ajEsd = "";
    _descEsd = "";
    _nomEsd = "";
}

PassarelaEsdeveniment::PassarelaEsdeveniment(const PassarelaEsdeveniment% p1)
{
    this->_idEnt = p1._idEnt;
    this->_preu = p1._preu;
    this->_ajEsd = p1._ajEsd;
    this->_descEsd = p1._descEsd;
    this->_nomEsd = p1._nomEsd;
}

void PassarelaEsdeveniment::insereix() {

        String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

        String^ sql = "INSERT INTO amep14.esdeveniment (id_entitat, preu_esdeveniment, ajuntament_esdeveniment, descripcio_esdeveniment, nom_esdeveniment)"
            "VALUES(@_idEnt, @_preu, @_ajEsd, @_descEsd, @_nomEsd);";
        MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

        cmd->Parameters->AddWithValue("@_idEnt", _idEnt);
        cmd->Parameters->AddWithValue("@_preu", _preu);
        cmd->Parameters->AddWithValue("@_ajEsd", _ajEsd);
        cmd->Parameters->AddWithValue("@_descEsd", _descEsd);
        cmd->Parameters->AddWithValue("@_nomEsd", _nomEsd);

        MySqlDataReader^ dataReader;
        try {
            // obrim la connexi�
            conn->Open();
            // executem la comanda creada abans del try
            dataReader = cmd->ExecuteReader();
        }
        catch (Exception^ ex) {
            // codi per mostrar l�error en una finestra
            MessageBox::Show(ex->Message);
        }
        finally {
            // si tot va b� es tanca la connexi�
            conn->Close();
        }
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
    }
    return *this;
}

int PassarelaEsdeveniment::getIdEnt() {
    return _idEnt;
}

int PassarelaEsdeveniment::getPreu() {
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

