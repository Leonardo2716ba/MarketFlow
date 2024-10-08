#include "produto.h"

Produto::Produto(QString const& nome, QString const& codBarras, int quantidade, QDate const& dataValidade)
    : nome(nome), codBarras(codBarras), quantidade(quantidade), dataValidade(dataValidade) {}

QString Produto::getNome() const {
    return nome;
}

QString Produto::getCodBarras() const {
    return codBarras;
}

int Produto::getQuantidade() const {
    return quantidade;
}

QDate Produto::getDataValidade() const {
    return dataValidade;
}

void Produto::setNome(QString const& nome) {
    this->nome = nome;
}

void Produto::setCodBarras(QString const& codBarras) {
    this->codBarras = codBarras;
}

void Produto::setQuantidade(int quantidade) {
    this->quantidade = quantidade;
}

void Produto::setDataValidade(QDate const& dataValidade) {
    this->dataValidade = dataValidade;
}
