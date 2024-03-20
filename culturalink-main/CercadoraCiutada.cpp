#include "pch.h"
#include "CercadoraCiutada.h"
#include "MainForm.h"
using namespace System::Windows::Forms;

PassarelaCiutada CercadoraCiutada::cercaCiutada(String^ nickname)
{
	PassarelaCiutada pC(nickname);
	return pC;
}
