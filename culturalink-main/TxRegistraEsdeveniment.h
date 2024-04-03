#pragma once
#include "Transaccio.h"
#include "PassarelaEsdeveniment.h"
//#include <string>

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

ref class TxRegistraEsdeveniment : public Transaccio {
private:
    String^ nomE;
    float preuE;
    String^ descripcioE;
    String^ ajuntamentE;

public:
    TxRegistraEsdeveniment();
    TxRegistraEsdeveniment(String^ nomEsd, float preuEsd, String^ descEsd, String^ ajuntamEsdv);
    void executar() override;
};