#include "cadastrodeprodutoswindow.h"
#include "ui_cadastrodeprodutoswindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>

CadastroDeProdutosWindow::CadastroDeProdutosWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadastroDeProdutosWindow)
{
    ui->setupUi(this);
}

CadastroDeProdutosWindow::~CadastroDeProdutosWindow() {
    delete ui;
}

void CadastroDeProdutosWindow::on_buttonCadastrar_clicked() {
    QString nome = ui->lineEditNome->text();
    QString codDeBarras = ui->lineEditCodDeBarras->text();
    QString validade = ui->lineEditValidade->text();
    int quantidade = ui->spinBoxQuantidade->value();
    int tolerancia = ui->spinBoxTolerancia->value();

    if (adicionarProdutoNoBanco(nome, codDeBarras, validade, quantidade, tolerancia)) {
        QMessageBox::information(this, "Sucesso", "Produto cadastrado com sucesso.");
    } else {
        QMessageBox::critical(this, "Erro", "Falha ao cadastrar o produto.");
    }
}

bool CadastroDeProdutosWindow::adicionarProdutoNoBanco(const QString& nome, const QString& codDeBarras, const QString& validade, int quantidade, int tolerancia) {
    QSqlQuery query;
    query.prepare("INSERT INTO Estoque_de_Produtos (nome, cod_de_barras, validade, quantidade, tolerancia) "
                  "VALUES (:nome, :codDeBarras, :validade, :quantidade, :tolerancia)");
    query.bindValue(":nome", nome);
    query.bindValue(":codDeBarras", codDeBarras);
    query.bindValue(":validade", validade);
    query.bindValue(":quantidade", quantidade);
    query.bindValue(":tolerancia", tolerancia);

    if (nome.isEmpty() || codDeBarras.isEmpty() || validade.isEmpty() || quantidade <= 0 || tolerancia < 0) {
        QMessageBox::warning(this, "Entrada inválida", "Por favor, preencha todos os campos corretamente.");
        return false;
    }else if (!query.exec()) {
        qDebug() << "Erro ao inserir no banco de dados: " << query.lastError();
        return false;
    }

    return true;
}
