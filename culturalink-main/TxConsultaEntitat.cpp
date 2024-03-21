#include "pch.h"
#include "TxConsultaEntitat.h"


TxConsultaEntitat::TxConsultaEntitat(){}

void TxConsultaEntitat::executar()
{
    Sistema& sist = Sistema::getInstance();
    //PassarelaEntitat e = sist.obteEntitat();
    //ent = e;

   /*result.push_back(ent.obteNom());
    result.push_back(ent.obteContrasenya());
    result.push_back(ent.obteCorreuElectronic());
    result.push_back(ent.obteid());
    result.push_back(Convert::ToString(ent.obteTelefon()));*/
}

//vector<String^> TxConsultaEntitat::obteResultat()
//{
    //return resultat;
//}

PassarelaEntitat TxConsultaEntitat::obteEntitat() {
    return ent;
}