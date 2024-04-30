#include "pch.h"
#include "CercadoraInscripcio.h"

CercadoraInscripcio::CercadoraInscripcio(){}
List<PassarelaInscripcio^>^ CercadoraInscripcio::cercaTotesInscripcions(String^ nick) {
    //DATABASE
    String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username=amep14; password=\"Yee7zaeheih9-\"; database=amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    // Uso de par�metros en la consulta SQL
    String^ sql = "SELECT * FROM inscripcio WHERE nick_ciutada = @nick";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@nick", nick); // Asignaci�n del valor del par�metro
    MySqlDataReader^ dataReader;
    try {
        // obrim la connexi�
        conn->Open();
        // executem la comanda (cmd) que s�ha creat abans del try
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {

            String^ nickC = dataReader->GetString(0);
            String^ dataC = dataReader->GetString(1);
            float preuC = dataReader->GetFloat(2);
            String^ esdev = dataReader->GetString(3);


            PassarelaInscripcio P1(nickC, dataC, preuC, esdev);
            return P1;
        }
    }
    catch (Exception^ ex) {
        // codi per mostrar l�error en una finestra
        MessageBox::Show(ex->Message);
    }
    finally {
        // si tot va b� es tanca la connexi�
        MessageBox::Show("Connexio DB exitosa!");
        conn->Close();
    }
}