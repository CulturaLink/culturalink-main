#include "pch.h"
#include "TxConsultaEsdeveniment.h"

TxConsultaEsdeveniment::TxConsultaEsdeveniment(String^ Esdeveniment) {
    _esdev = Esdeveniment;

}

void TxConsultaEsdeveniment::executar() {
    CercadoraEsdeveniment cerc;
    _passEsdev = cerc.cercaEsdeveniment(_esdev); //coger nomEsd de los forms

    List<String^>^ result = gcnew List<String^>();

    result->Add(_passEsdev.getIdEnt().ToString());
    result->Add(_passEsdev.getPreu().ToString());
    result->Add(_passEsdev.getAjEsd());
    result->Add(_passEsdev.getDescEsd());
    result->Add(_passEsdev.getNomEsd());

    _result = result;
}


List<String^>^ TxConsultaEsdeveniment::getResult() {
    return _result;
}

