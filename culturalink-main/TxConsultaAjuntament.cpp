#include "pch.h"
#include "TxConsultaAjuntament.h"
#include "UsuariIniciat.h"

TxConsultaAjuntament::TxConsultaAjuntament(){}

void TxConsultaAjuntament::executar(){
    UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
    Object^ usuariIniciat = usuari->getUsuari();
    TipoPassarela tipusUsuari = usuari->getTipoPassarela();
<<<<<<< Updated upstream
    if (tipusUsuari != TipoPassarela::Ajuntament) {
        return;
    }
=======

    // Convertir el objeto de passarela al tipo
>>>>>>> Stashed changes
    PassarelaAjuntament^ a = safe_cast<PassarelaAjuntament^>(usuariIniciat);
    ajuntament = a;

    List<String^>^ _result = gcnew List<String^>();

    _result->Add(a->getNom());
    _result->Add(a->getClau());
    _result->Add(a->getCP().ToString());
    _result->Add(a->getTelf().ToString());
    _result->Add(a->getCorreu());

    result = _result;
}

List<String^>^ TxConsultaAjuntament::getResult(){
    return result;
}

PassarelaAjuntament^ TxConsultaAjuntament::getAjuntament(){
    return ajuntament;    
}