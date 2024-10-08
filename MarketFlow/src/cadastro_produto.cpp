#include "cadastro_produto.h"
#include "ui_cadastro_produto.h"

Cadastro_Produto::Cadastro_Produto(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Cadastro_Produto)
{
    ui->setupUi(this);
}

Cadastro_Produto::~Cadastro_Produto()
{
    delete ui;
}
