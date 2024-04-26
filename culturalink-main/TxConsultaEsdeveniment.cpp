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
    result->Add(_passEsdev.getTipusEsd());
    result->Add(_passEsdev.getAforamentEsd().ToString());
    result->Add(_passEsdev.getPuntsCostEsd().ToString());
    result->Add(_passEsdev.getDataEsd());
    result->Add(_passEsdev.getPuntsDescEsd().ToString());
   

    _result = result;
}


List<String^>^ TxConsultaEsdeveniment::getResult() {
    return _result;
}

