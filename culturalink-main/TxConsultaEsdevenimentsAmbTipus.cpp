#include "pch.h"
#include "TxConsultaEsdevenimentsAmbTipus.h"

TxConsultaEsdevenimentsAmbTipus::TxConsultaEsdevenimentsAmbTipus(String^ tipus) {
    _tipus = tipus;
}

void TxConsultaEsdevenimentsAmbTipus::executar() {
    CercadoraEsdeveniment cerc;
    List<PassarelaEsdeveniment^>^ passEsdevs = cerc.cercaEsdevenimentsAmbTipus(_tipus); //coger nomEsd de los forms

    List<String^>^ result = gcnew List<String^>();

    for each (PassarelaEsdeveniment ^ esdev in passEsdevs) {
        /*result->Add(esdev->getIdEnt().ToString());
        result->Add(esdev->getAjEsd());
        result->Add(esdev->getDescEsd());*/
        result->Add(esdev->getNomEsd());
        //result->Add(esdev->getPreu().ToString());
    }

    _result = result;
}

List<String^>^ TxConsultaEsdevenimentsAmbTipus::getResult() {
    return _result;
}