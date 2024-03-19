#include "pch.h"
#include "Transaccio.h"
#include "TxRegistraEsdeveniment.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Login.h"
#include "MainForm.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  

  /*TxRegistraEsdeveniment TxRegEsdv;
  TxRegEsdv.executar();*/

  Application::Run(gcnew culturalink_main::MainForm());

  return 0;
}