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
    MySqlDataReader^ dataReader;

    try {
        conn->Open();
        while (!encontrado)
        {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> dis(1, 9999);
            numeroAleatorio = dis(gen);
            posaId_Entitat(numeroAleatorio);

            String^ sqlSelect = "SELECT * FROM entitat WHERE id_entitat = @id_entitat";
            MySqlCommand^ cmdSelect = gcnew MySqlCommand(sqlSelect, conn);
            cmdSelect->Parameters->AddWithValue("@id_entitat", numeroAleatorio);

            dataReader = cmdSelect->ExecuteReader();
            if (!dataReader->Read())
            {
                encontrado = true;
            }
            dataReader->Close();
        }

        String^ sqlInsert = "INSERT INTO entitat (id_entitat, nom, contrasenya, telefon, correu) VALUES (@id_entitat, @nom, @contrasenya, @telefon, @correu)";
        MySqlCommand^ cmdInsert = gcnew MySqlCommand(sqlInsert, conn);
        cmdInsert->Parameters->AddWithValue("@id_entitat", numeroAleatorio);
        cmdInsert->Parameters->AddWithValue("@nom", nom);
        cmdInsert->Parameters->AddWithValue("@contrasenya", contrasenya);
        cmdInsert->Parameters->AddWithValue("@telefon", telefon);
        cmdInsert->Parameters->AddWithValue("@correu", correuElectronic);

        cmdInsert->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        // Código para mostrar el error en una ventana
        MessageBox::Show(ex->Message);
    }
    finally {
        // Cierra la conexión
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

void PassarelaEntitat::modifica() {
    String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    try {
        // Abrimos la conexión
        conn->Open();

        // Comprobar si el correu ya existe, throw excepcion en caso que si
        String^ sqlCheckCorreu = "SELECT COUNT(*) FROM amep14.entitat WHERE correu = @correu AND id_entitat <> @id_entitat;";
        MySqlCommand^ cmd1 = gcnew MySqlCommand(sqlCheckCorreu, conn);
        cmd1->Parameters->AddWithValue("@correu", obteCorreuElectronic());
        cmd1->Parameters->AddWithValue("@id_entitat", obteid());

        MySqlDataReader^ dataReader1 = cmd1->ExecuteReader();

        int numEnt = 0;
        if (dataReader1->Read()) { // Check if there are rows to read 
            numEnt = Convert::ToInt32(dataReader1[0]); // Read the count from the first column (index 0)
        }

        dataReader1->Close();

        if (numEnt != 0) throw gcnew CorreuExisteix("Correu ja existeix!");

        // Actualizar los datos
        String^ sql = "UPDATE amep14.entitat SET "
            "nom = @nom, "
            "telefon = @telefon, "
            "correu = @correu, "
            "contrasenya = @contrasenya "
            "WHERE id_entitat = @id_entitat;";

        MySqlCommand^ cmd2 = gcnew MySqlCommand(sql, conn);
        cmd2->Parameters->AddWithValue("@nom", obteNom());
        cmd2->Parameters->AddWithValue("@telefon", obteTelefon());
        cmd2->Parameters->AddWithValue("@correu", obteCorreuElectronic());
        cmd2->Parameters->AddWithValue("@contrasenya", obteContrasenya());
        cmd2->Parameters->AddWithValue("@id_entitat", obteid());

        cmd2->ExecuteNonQuery();
    }
    catch (Exception^ ex) {
        // Código para mostrar el error en una ventana
        throw ex;
    }
    finally {
        // Si todo va bien, se cierra la conexión
        conn->Close();
    }
}


void PassarelaEntitat::esborra()
{
    String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

    String^ sql = "DELETE FROM entitat WHERE id_entitat = @id_entitat;";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);

    cmd->Parameters->AddWithValue("@id_entitat", id_entitat);

    try {
        conn->Open();  // Open the connection
        cmd->ExecuteNonQuery();  // Execute the DELETE command
        //MessageBox::Show("User deleted successfully.");
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message);  // Show error message if something goes wrong
    }
    finally {
        conn->Close();  // Close the connection regardless of the result
    }
}