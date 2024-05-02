#include "pch.h"
#include "CercadoraInscripcio.h"

CercadoraInscripcio::CercadoraInscripcio(){}
List<PassarelaInscripcio^>^ CercadoraInscripcio::cercaTotesInscripcions(String^ nick) {
    //DATABASE
    String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username=amep14; password=\"Yee7zaeheih9-\"; database=amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    // Uso de parámetros en la consulta SQL
    String^ sql = "SELECT * FROM inscripcio WHERE nick_ciutada = @nick";

    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@nick", nick); // Asignación del valor del parámetro
    MySqlDataReader^ dataReader;
    try {
        // obrim la connexió
        conn->Open();

        List<PassarelaInscripcio^>^ totsInscrip = gcnew List<PassarelaInscripcio^>(); // Initialize the list
        // executem la comanda (cmd) que s’ha creat abans del try
        dataReader = cmd->ExecuteReader();
        while (dataReader->Read()) {

            String^ nickC = dataReader->GetString(0);
            String^ dataC = dataReader->GetMySqlDateTime(1).ToString();
            float preuC = dataReader->GetFloat(2);
            String^ esdev = dataReader->GetString(3);

            PassarelaInscripcio^ pI = gcnew PassarelaInscripcio(nickC, dataC, preuC, esdev);

            totsInscrip->Add(pI);
        }

        return totsInscrip;
    }
    catch (Exception^ ex) {
        // codi per mostrar l’error en una finestra
        MessageBox::Show(ex->Message);
    }
    finally {
        // si tot va bé es tanca la connexió
        //MessageBox::Show("Connexio DB exitosa!");
        conn->Close();
    }
}