#include "pch.h"
#include "TxConsultaAjuntament.h"

TxConsultaAjuntament::TxConsultaAjuntament(){}

void TxConsultaAjuntament::executar(){
    AjuntamentIniciat^ _ajuntament = AjuntamentIniciat::ObtenerInstancia();
    PassarelaAjuntament a = _ajuntament->getAjuntament();
    ajuntament = a;

    List<String^>^ _result = gcnew List<String^>();

    _result->Add(a.getNom());
    _result->Add(a.getClau());
    _result->Add(a.getCP().ToString());
    _result->Add(a.getTelf().ToString());
    _result->Add(a.getCorreu());

    result = _result;
}

List<String^>^ TxConsultaAjuntament::getResult(){
    return result;
}

PassarelaAjuntament TxConsultaAjuntament::getAjuntament(){
    return ajuntament;    
}