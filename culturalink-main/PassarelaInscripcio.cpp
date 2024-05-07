#include "pch.h"

#include "PassarelaInscripcio.h"


PassarelaInscripcio::PassarelaInscripcio(const PassarelaInscripcio% p1)
{
    this->nickCiutada = p1.nickCiutada;
    this->data = p1.data;
    this->nomEsdeveniment = p1.nomEsdeveniment;
    this->preu = p1.preu;
}
PassarelaInscripcio::PassarelaInscripcio()
{
    nickCiutada = "";
    data = "";
    nomEsdeveniment = "";
    preu = 0;
}
PassarelaInscripcio% PassarelaInscripcio::operator=(const PassarelaInscripcio% other)
{
    if (this != % other)
    {
        nickCiutada = other.nickCiutada;
        data = other.data;
        nomEsdeveniment = other.nomEsdeveniment;
        preu = other.preu;
    }
    return *this;
}
PassarelaInscripcio::PassarelaInscripcio(String^ nickCiutadaI, String^ dataI, String^ nomEsdI, int^ preuI)
{
    nickCiutada = nickCiutadaI;
    data = dataI;
    nomEsdeveniment = nomEsdI;
    preu = preuI;

}
void PassarelaInscripcio::insereix()
{
    String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
    MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
    String^ sql = "SELECT * FROM inscripcio WHERE nick_ciutada='" + nickCiutada + "' AND nom_esdeveniment='" + nomEsdeveniment + "'";
    MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
    MySqlDataReader^ dataReader;
    conn->Open();
    dataReader = cmd->ExecuteReader();
    if (dataReader->HasRows)
    {
        throw(errorCompra);
    }
    else
    {
        conn->Close();
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        String^ sql = "INSERT INTO inscripcio VALUES('" + nickCiutada + "', '" + data + "', '" + preu + "', '" + nomEsdeveniment + "')";;
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
}

String^ PassarelaInscripcio::ObteNickCiutada()
{
    return nickCiutada;
}
String^ PassarelaInscripcio::ObteData()
{
    return data;
}
String^ PassarelaInscripcio::ObteNomEsdeveniment()
{
    return nomEsdeveniment;
}
int^ PassarelaInscripcio::ObtePreu()
{
    return preu;
}

void PassarelaInscripcio::posaNickCiutada(String^ nickCiutadaI)
{
    nickCiutada = nickCiutadaI;
}
void PassarelaInscripcio::posaData(String^ dataI)
{
    data = dataI;
}
void PassarelaInscripcio::posaNomEsd(String^ nomEsdI)
{
    nomEsdeveniment = nomEsdI;
}
void PassarelaInscripcio::posaPreu(int^ preuI)
{
    preu = preuI;
}
