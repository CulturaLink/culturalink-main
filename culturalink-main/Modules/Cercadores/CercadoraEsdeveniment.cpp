#pragma once
#include "../../pch.h"
#include "CercadoraEsdeveniment.h"

CercadoraEsdeveniment::CercadoraEsdeveniment() {}

PassarelaEsdeveniment CercadoraEsdeveniment::cercaEsdeveniment(String^ clau) {

    //DATABASE
    String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username=amep14; password=\"Yee7zaeheih9-\"; database=amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    // Uso de parámetros en la consulta SQL
    String ^ sql = "SELECT * FROM esdeveniment WHERE nom_esdeveniment = @clau";
    
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@clau", clau); // Asignación del valor del parámetro
    MySqlDataReader^ dataReader;
    try {
        // obrim la connexió
        conn->Open();
        // executem la comanda (cmd) que s’ha creat abans del try
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {

            int _idEntitat = dataReader->GetInt32(0);
            float _preuEsdeveniment = dataReader->GetFloat(1);
            String^ _ajEsdeveniment = dataReader->GetString(2);
            String^ _descEsdeveniment = dataReader->GetString(3);
            String^ _nomEsdeveniment = dataReader->GetString(4);
            String^ _tipusEsdeveniment = dataReader->GetString(5);
            int _aforamentEsdeveniment = dataReader->GetInt32(6);
            int _puntsCostEsdeveniment = dataReader->GetInt32(7);
            String^ _dataEsdeveniment = dataReader->GetDateTime(8).ToString();
            int _puntsDescEsdeveniment = dataReader->GetInt32(9);

            PassarelaEsdeveniment P1(_idEntitat, _preuEsdeveniment, _ajEsdeveniment, _descEsdeveniment, _nomEsdeveniment, _tipusEsdeveniment, _aforamentEsdeveniment, _puntsCostEsdeveniment, _dataEsdeveniment, _puntsDescEsdeveniment);
            return P1;
        }
    }
    catch (Exception^ ex) {
        // codi per mostrar l’error en una finestra
        MessageBox::Show(ex->Message);
    }
    finally {
        // si tot va bé es tanca la connexió
        MessageBox::Show("Connexio DB exitosa!");
        conn->Close();
    }

}

List<PassarelaEsdeveniment^>^ CercadoraEsdeveniment::cercaTotsEsdeveniments()
{
    String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql1 = "SELECT COUNT(*) FROM esdeveniment";
    String^ sql2 = "SELECT nom_esdeveniment, preu_esdeveniment FROM esdeveniment";
    MySqlCommand^ cmd1 = gcnew MySqlCommand(sql1, conn);
    MySqlCommand^ cmd2 = gcnew MySqlCommand(sql2, conn);
    MySqlDataReader^ dataReader;

    try {
        conn->Open();
        dataReader = cmd1->ExecuteReader();

        int numEsdevs = 0;

        if (dataReader->Read()) {
            numEsdevs = Convert::ToInt32(dataReader[0]);
        }

        dataReader->Close();

        List<PassarelaEsdeveniment^>^ totsEsdev = gcnew List<PassarelaEsdeveniment^>(); // Initialize the list

        cmd2 = gcnew MySqlCommand(sql2, conn);
        dataReader = cmd2->ExecuteReader();

        while (dataReader->Read()) { // Use while loop to iterate through all rows
            String^ nomEsdev = dataReader->GetString(0);
            float preuEsdev = dataReader->GetFloat(1);

            PassarelaEsdeveniment^ passEsdev = gcnew PassarelaEsdeveniment(nomEsdev, preuEsdev);

            totsEsdev->Add(passEsdev);
        }
        conn->Close();
        return totsEsdev; // Return the list
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);
        return nullptr; // Return null in case of exception
    }
}

List<PassarelaEsdeveniment^>^ CercadoraEsdeveniment::cercaEsdevenimentsAmbTipus(String^ tipus)
{
    String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    // Uso de parámetros en la consulta SQL
    String^ sql1 = "SELECT COUNT(*) FROM esdeveniment";

    MySqlCommand^ cmd1 = gcnew MySqlCommand(sql1, conn);
    MySqlDataReader^ dataReader1;
    dataReader1 = cmd1->ExecuteReader();

    int numEsdevs = 0;

    if (dataReader1->Read()) { // Check if there are rows to read 
        numEsdevs = Convert::ToInt32(dataReader1[0]); // Read the count from the first column (index 0)
    }

    List<PassarelaEsdeveniment^>^ totsEsdev;

    String^ sql2 = "SELECT * FROM esdeveniment WHERE tipus = @tipus";

    MySqlCommand^ cmd2 = gcnew MySqlCommand(sql2, conn);
    cmd2->Parameters->AddWithValue("@tipus", tipus); // Asignación del valor del parámetro
    MySqlDataReader^ dataReader2;
    dataReader2 = cmd2->ExecuteReader();

    for (int i = 0; i < numEsdevs; ++i) {

        int _idEntitat = dataReader2->GetInt32(0);
        float _preuEsdeveniment = dataReader2->GetFloat(1);
        String^ _ajEsdeveniment = dataReader2->GetString(2);
        String^ _descEsdeveniment = dataReader2->GetString(3);
        String^ _nomEsdeveniment = dataReader2->GetString(4);
        String^ _tipusEsdeveniment = dataReader2->GetString(5);
        int _aforamentEsdeveniment = dataReader2->GetInt32(6);
        int _puntsCostEsdeveniment = dataReader2->GetInt32(7);
        String^ _dataEsdeveniment = dataReader2->GetString(8);
        int _puntsDescEsdeveniment = dataReader2->GetInt32(9);

        PassarelaEsdeveniment^ passEsdev = gcnew PassarelaEsdeveniment(_idEntitat, _preuEsdeveniment, _ajEsdeveniment, _descEsdeveniment, _nomEsdeveniment, _tipusEsdeveniment, _aforamentEsdeveniment, _puntsCostEsdeveniment, _dataEsdeveniment, _puntsDescEsdeveniment);

        totsEsdev->Add(passEsdev);
    }

    return totsEsdev;
}