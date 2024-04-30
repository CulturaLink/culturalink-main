#include "pch.h"
#include "TxConsultaTotsEsdeveniments.h"

TxConsultaTotsEsdeveniments::TxConsultaTotsEsdeveniments() {

}

void TxConsultaTotsEsdeveniments::executar()
{
    CercadoraEsdeveniment cercEsdev;
    List<PassarelaEsdeveniment^>^ passEsdevs = cercEsdev.cercaTotsEsdeveniments();

    List<String^>^ noms = gcnew List<String^>();
    List<String^>^ preus = gcnew List<String^>();

    for each (PassarelaEsdeveniment ^ esdev in passEsdevs) {
        noms->Add(esdev->getNomEsd());
        preus->Add((esdev->getPreu()).ToString());
    }

    _noms = noms;
    _preus = preus;
}

List<String^>^ TxConsultaTotsEsdeveniments::getNoms()
{
    return _noms;
}

List<String^>^ TxConsultaTotsEsdeveniments::getPreus()
{
    return _preus;
}