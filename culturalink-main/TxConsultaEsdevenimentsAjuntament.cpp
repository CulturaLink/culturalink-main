#include "pch.h"
#include "TxConsultaEsdevenimentsAjuntament.h"


TxConsultaEsdevenimentsAjuntament::TxConsultaEsdevenimentsAjuntament() {


}

void TxConsultaEsdevenimentsAjuntament::executar(String^ aj)
{
    CercadoraEsdeveniment cercEsdev;
    List<PassarelaEsdeveniment^>^ passEsdevs = cercEsdev.cercaEsdevenimentsPerAjuntament(aj);

    List<String^>^ results = gcnew List<String^>();


    for each (PassarelaEsdeveniment ^ esdev in passEsdevs) {
       
        results->Add(esdev->getIdEnt().ToString());
        results->Add(esdev->getNomEsd());
        results->Add(esdev->getDataEsd());
        results->Add(esdev->getDescEsd());
    }

    _result = results;
}

List<String^>^ TxConsultaEsdevenimentsAjuntament::getResult()
{
    return _result;
}