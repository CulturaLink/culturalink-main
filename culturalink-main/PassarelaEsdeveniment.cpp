#pragma once
#include "pch.h"
#include "PassarelaEsdeveniment.h"

PassarelaEsdeveniment::PassarelaEsdeveniment() {
   nom = "";
   preu = 0.0;
   descripcio = "";
   ajuntament = "";
}

PassarelaEsdeveniment::PassarelaEsdeveniment(String^ nomE, float preuE, String^ descripcioE, String^ ajuntamentE)
{
    nom = nomE;
    preu = preuE;
    descripcio = descripcioE;
    ajuntament = ajuntamentE;
}

void PassarelaEsdeveniment::insereix() {

        String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

        String^ sql = "INSERT INTO amep14.esdeveniment (id_entitat, preu_esdeveniment, ajuntament_esdeveniment, descripcio_esdeveniment, nom_esdeveniment)"
                      "VALUES('5236', '" + preu + "', '" + ajuntament + "', '" + descripcio + "', '" + nom + "');";

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