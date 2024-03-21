#include "pch.h"
#include "Sistema.h"

//PassarelaEntitat Sistema::obteEntitat() {

	//return entitat;

//}

void Sistema::iniciaSessioEntitat(PassarelaEntitat e) {
	//entitat = e;

}
//
void Sistema::tancaSessio() {

	//entitat = PassarelaEntitat(); 

}
void Sistema::refresca(String^ id) {
String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
String^ sql = "SELECT * FROM entitat WHERE id_entitat='" + id + "'";
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