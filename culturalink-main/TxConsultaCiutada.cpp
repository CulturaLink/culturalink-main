#include "pch.h"
#include "TxConsultaCiutada.h"

TxConsultaCiutada::TxConsultaCiutada() {}

void TxConsultaCiutada::executar() {
    UsuariIniciat^ usuari = UsuariIniciat::ObtenerInstancia();
    Object^ usuariIniciat = usuari->getUsuari();
    TipoPassarela tipusUsuari = usuari->getTipoPassarela();

    // Convertir el objeto de passarela al tipo
    PassarelaCiutada^ c = safe_cast<PassarelaCiutada^>(usuariIniciat);
    ciutada = c;

    List<String^>^ _result = gcnew List<String^>();

    _result->Add(c->getNickname());
    _result->Add(c->getNomComplet());
    _result->Add(c->getCorreu());
    _result->Add(c->getDataNaix());
    _result->Add(c->getDiners()->ToString());
    _result->Add(c->getPunts()->ToString());

    result = _result;
}
List<String^>^ TxConsultaCiutada::getResult() {
    return result;
}
PassarelaCiutada^ TxConsultaCiutada::getCiutada() {
    return ciutada;
}