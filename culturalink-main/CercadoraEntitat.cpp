#include "pch.h"
#include "CercadoraEntitat.h"

CercadoraEntitat::CercadoraEntitat() {}
PassarelaEntitat CercadoraEntitat::cercaEntitat(String^ correuE)
{
	String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM entitat WHERE correu = @correu";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    cmd->Parameters->AddWithValue("@correu", correuE);
    MySqlDataReader^ dataReader;

    try {
        // Abrimos la conexión
        conn->Open();
        // Ejecutamos la comanda (cmd) que se ha creado antes del try
        dataReader = cmd->ExecuteReader();
        if (dataReader->Read()) {
            // Se lee la información para crear un objeto de tipo PassarelaEntitat
            // Tomaremos las columnas por índice, la primera es la 0
            int^ id = dataReader->GetInt32(0);
            String^ nom = dataReader->GetString(1);
            String^ contrasenya = dataReader->GetString(2);
            String^ telefon = dataReader->GetString(3);
            String^ correu = dataReader->GetString(4);
            PassarelaEntitat p2(nom, contrasenya, correu, Convert::ToInt32(telefon), id);
            conn->Close();
            return p2;
        }
        else {
            PassarelaEntitat ent;
            return ent;
        }
    }
    catch (Exception^ ex) {
        // Código para mostrar el error en una ventana
        MessageBox::Show(ex->Message);
    }
    PassarelaEntitat ent;
    return ent;
}