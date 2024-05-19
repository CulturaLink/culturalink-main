#include "pch.h"
#include "Transaccio.h"
#include "TxRegistraEsdeveniment.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "InfoAjuntament.h"
#include "Login.h"
#include "MainForm.h"
#include "CustomButtonEsdev.h"

using namespace CustomControls;
using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  Application::Run(gcnew culturalink_main::Login());

  return 0;
}