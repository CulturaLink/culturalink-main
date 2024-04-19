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
    int idE;
    String^ nomE;
    String^ descripcioE;
    float preuE;
    String^ correuElectronicE;

public:
    TxRegistraEsdeveniment();
<<<<<<< Updated upstream
    //TxRegistraEsdeveniment(string nU, string sU, string cU, string ceU, string dnU);
=======
    TxRegistraEsdeveniment(int idEsd, String^ nomEsd, float preuEsd, String^ descEsd, String^ ajuntamEsdv);
>>>>>>> Stashed changes
    void executar() override;
};