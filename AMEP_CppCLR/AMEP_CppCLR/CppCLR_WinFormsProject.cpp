#include "pch.h"
#include <iostream>
#include "Ciutada.h"
using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
	//FORMS
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinFormsProject::Form1());

  //DATABASE
  String^ connectionString = "datasource=ubiwan.epsevg.upc.edu; username = amep14; password = \"Yee7zaeheih9-\"; database = amep14;";
  MySqlConnection^ conn = gcnew MySqlConnection(connectionString);

  String^ sql = "SELECT * FROM ciutada WHERE nickname = 'eric14'";
  MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
  MySqlDataReader^ dataReader;
  Ciutada^ ciut; // suposem que tenim la classe Ciutada

  try {
	  // obrim la connexió
	  conn->Open();
	  // executem la comanda (cmd) que s’ha creat abans del try
	  dataReader = cmd->ExecuteReader();
	  if (dataReader->Read()) {
		  // Es llegeix la informació per crear un objecte de tipus Ciutada
		  // Agafarem les columnes per índex, la primera és la 0
		  String^ nickname = dataReader->GetString(0);
		  String^ nom_complet = dataReader->GetString(1);
		  String^ correu = dataReader->GetString(3);
		  ciut = gcnew Ciutada(nickname, nom_complet, correu);
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

 

  return 0;
}