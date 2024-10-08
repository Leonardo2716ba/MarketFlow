#ifndef PRODUTO_H
#define PRODUTO_H

#include <QString>
#include <QDate>

class Produto {
public:
    Produto(QString const& nome, QString const& codBarras, int quantidade, QDate const& dataValidade);

    QString getNome() const;
    QString getCodBarras() const;
    int getQuantidade() const;
    QDate getDataValidade() const;

    void setNome(QString const& nome);
    void setCodBarras(QString const& codBarras);
    void setQuantidade(int quantidade);
    void setDataValidade(QDate const& dataValidade);

private:
    QString nome;
    QString codBarras;
    int quantidade;
    QDate dataValidade;
};

#endif // PRODUTO_H
