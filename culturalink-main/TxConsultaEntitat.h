#pragma once
#include "PassarelaEntitat.h"
#include "CercadoraEntitat.h"
#include "Transaccio.h"
#include "Sistema.h"


ref class TxConsultaEntitat : public Transaccio
{
private:
    PassarelaEntitat ent;
    //vector<String^> result;
public:
    TxConsultaEntitat();
    void executar() override;
    //vector<String^> obteResultat();
    PassarelaEntitat obteEntitat();
};