#include "pch.h"
#include "TxConsultaEntitat.h"
#include "UsuariIniciat.h"

using namespace System::Collections::Generic;

TxConsultaEntitat::TxConsultaEntitat(){}

void TxConsultaEntitat::executar()
{
    UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
    Object^ usuariIniciat = usuari->getUsuari();
    TipoPassarela tipusUsuari = usuari->getTipoPassarela();

    // Convertir el objeto de passarela al tipo
    PassarelaEntitat^ e = safe_cast<PassarelaEntitat^>(usuariIniciat);
    ent = e;
    

    List<String^>^ _result = gcnew List<String^>();

    _result->Add(Convert::ToString(e->obteid()));
    _result->Add(e->obteNom());
    _result->Add(e->obteCorreuElectronic());
    _result->Add(e->obteContrasenya());
    _result->Add(Convert::ToString(e->obteTelefon()));

    result = _result;
}

List<String^>^ TxConsultaEntitat::obteResultat()
{
    return result;
}

PassarelaEntitat^ TxConsultaEntitat::obteEntitat() {
    return ent;
}