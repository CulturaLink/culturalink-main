#include "pch.h"
#include "TxConsultaEntitat.h"


TxConsultaEntitat::TxConsultaEntitat(){}

void TxConsultaEntitat::executar()
{
    EntitatIniciat^ sist = EntitatIniciat::ObtenerInstancia();
    PassarelaEntitat e = sist->getUsuari();
    ent = e;

    List<String^>^ _result = gcnew List<String^>();

    _result->Add(Convert::ToString(e.obteid()));
    _result->Add(e.obteNom());
    _result->Add(e.obteCorreuElectronic());
    _result->Add(e.obteContrasenya());
    _result->Add(Convert::ToString(e.obteTelefon()));

    result = _result;
}

List<String^>^ TxConsultaEntitat::obteResultat()
{
    return result;
}

PassarelaEntitat TxConsultaEntitat::obteEntitat() {
    return ent;
}