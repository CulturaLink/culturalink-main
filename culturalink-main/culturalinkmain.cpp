#include "pch.h"

#include "Modules/Transaccions/Transaccio.h"
#include "Modules/Transaccions/TxRegistraEsdeveniment.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Forms/InfoAjuntament.h"
#include "Forms/Login.h"
#include "Forms/MainForm.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  Application::Run(gcnew culturalink_main::MainForm());

  return 0;
}