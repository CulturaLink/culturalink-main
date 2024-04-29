#pragma once
#include "Transaccio.h"
#include "../Passareles/PassarelaEsdeveniment.h"

using namespace std;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Windows::Forms;

ref class TxRegistraEsdeveniment : public Transaccio {
private:
    String^ nomE;
    float preuE;
    int idE;
    String^ descripcioE;
    String^ ajuntamentE;
    String^ tipusE;
    int aforamentE;
    int puntsCostE; 
    String^ dataE;
    int puntsDescE;


public:
    TxRegistraEsdeveniment();
    TxRegistraEsdeveniment(int idEnt, String^ nomEsd, float preuEsd, String^ descEsd, String^ ajuntamEsd, String^ tipusEsd, int aforamentEsd, int puntsCostEsd, String^ data, int puntsDescE);
    //TxRegistraEsdeveniment(String^ nomEsd, float preuEsd, String^ descEsd, String^ ajuntamEsdv);
    void executar() override;
};

