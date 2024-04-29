#pragma once
#include "../Passareles/PassarelaEntitat.h"
#include "Transaccio.h"
#include "../Users/EntitatIniciat.h"
#include "../Users/UsuariIniciat.h"

#include <vector>
#include <string>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Collections::Generic;

ref class TxConsultaEntitat : public Transaccio
{
private:
    PassarelaEntitat^ ent;
    List<String^>^ result;
public:
    TxConsultaEntitat();
    void executar() override;
    List<String^>^ obteResultat();
    PassarelaEntitat^ obteEntitat();
};