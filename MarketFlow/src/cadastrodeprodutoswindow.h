#include <QDialog>  // Para QDialog
#include <QString>  // Para QString
#include "ui_cadastrodeprodutoswindow.h" // Certifique-se de que este arquivo existe

class CadastroDeProdutosWindow : public QDialog {
    Q_OBJECT

public:
    explicit CadastroDeProdutosWindow(QWidget *parent = nullptr);
    ~CadastroDeProdutosWindow();

private slots:
    void on_buttonCadastrar_clicked(); // Se o botão de cadastrar estiver presente

private:
    Ui::CadastroDeProdutosWindow *ui;
    bool adicionarProdutoNoBanco(const QString& nome, const QString& codDeBarras, const QString& validade, int quantidade, int tolerancia);
};
