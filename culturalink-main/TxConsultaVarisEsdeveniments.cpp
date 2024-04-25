#include "pch.h"
#include "TxConsultaVarisEsdeveniments.h"

TxConsultaVarisEsdeveniments::TxConsultaVarisEsdeveniments() {
    
}

void TxConsultaVarisEsdeveniments::executar() 
{
    CercadoraEsdeveniment cercEsdev;
    List<PassarelaEsdeveniment^>^ passEsdevs = cercEsdev.cercaTotsEsdeveniments();
    //_passEsdev = cercEsdev.cercaEsdeveniment(_esdev); //coger nomEsd de los forms

    List<String^>^ result = gcnew List<String^>();

    for each (PassarelaEsdeveniment^ esdev in passEsdevs) {
        result->Add(esdev->getNomEsd());
        result->Add((esdev->getPreu()).ToString());
    }

    _result = result;
}


List<String^>^ TxConsultaVarisEsdeveniments::getResult() {
    return _result;
}
