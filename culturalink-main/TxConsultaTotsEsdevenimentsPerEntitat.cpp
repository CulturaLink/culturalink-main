#include "pch.h"
#include "TxConsultaTotsEsdevenimentsPerEntitat.h"

TxConsultaTotsEsdevenimentsPerEntitat::TxConsultaTotsEsdevenimentsPerEntitat() {

}

void TxConsultaTotsEsdevenimentsPerEntitat::executar(String^ ent)
{
    CercadoraEsdeveniment cercEsdev;
    List<PassarelaEsdeveniment^>^ passEsdevs = cercEsdev.cercaEsdevenimentsPerEntitat(ent);

    List<String^>^ noms = gcnew List<String^>();
    List<String^>^ preus = gcnew List<String^>();
    List<String^>^ results = gcnew List<String^>();


    for each (PassarelaEsdeveniment ^ esdev in passEsdevs) {
        noms->Add(esdev->getNomEsd());
        preus->Add((esdev->getPreu()).ToString());
        results->Add(esdev->getNomEsd());
        results->Add(esdev->getPreu().ToString());
    }

    _result = results;
}

List<String^>^ TxConsultaTotsEsdevenimentsPerEntitat::getResult()
{
    return _result;
}