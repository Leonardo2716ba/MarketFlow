#ifndef CADASTRO_PRODUTO_H
#define CADASTRO_PRODUTO_H

#include <QDialog>

namespace Ui {
class Cadastro_Produto;
}

class Cadastro_Produto : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastro_Produto(QWidget *parent = nullptr);
    ~Cadastro_Produto();

private:
    Ui::Cadastro_Produto *ui;
};

#endif // CADASTRO_PRODUTO_H
