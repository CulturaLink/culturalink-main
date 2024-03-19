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


  return 0;
}