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

void PassarelaEsdeveniment::insereix() {

        String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

        String^ sql = "INSERT INTO amep14.esdeveniment (id_entitat, preu_esdeveniment, ajuntament_esdeveniment, descripcio_esdeveniment, nom_esdeveniment)"
                      "VALUES('2', '2', '21', 'vilanovaSSSS', 'rfsesfSSSSSs', 'adeu');";
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