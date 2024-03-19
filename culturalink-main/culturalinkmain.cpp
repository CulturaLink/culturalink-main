#include "pch.h"
//#include "TxRegistraEsdeveniment.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "MainForm.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew culturalink_main::MainForm());

  //TxRegistraEsdeveniment TxRegEsdv();

  return 0;
}