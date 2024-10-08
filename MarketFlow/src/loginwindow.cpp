#include "loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) : QWidget(parent) {
    // Definir layout vertical
    QVBoxLayout *layout = new QVBoxLayout(this);

    // Rótulos para o usuário e senha
    QLabel *userLabel = new QLabel("Usuário:", this);
    QLabel *passwordLabel = new QLabel("Senha:", this);

    // Campos de texto para o usuário e senha
    QLineEdit *userLineEdit = new QLineEdit(this);
    QLineEdit *passwordLineEdit = new QLineEdit(this);
    passwordLineEdit->setEchoMode(QLineEdit::Password); // Oculta a senha ao digitar

    // Botão de login
    QPushButton *loginButton = new QPushButton("Login", this);

    // Adicionar componentes ao layout
    layout->addWidget(userLabel);
    layout->addWidget(userLineEdit);
    layout->addWidget(passwordLabel);
    layout->addWidget(passwordLineEdit);
    layout->addWidget(loginButton);

    // Conectar o botão de login a uma função
    connect(loginButton, &QPushButton::clicked, [this, userLineEdit, passwordLineEdit]() {
        QString username = userLineEdit->text();
        QString password = passwordLineEdit->text();

        // Verificar se as credenciais estão corretas (exemplo simples)
        if (username == "admin" && password == "1234") {
            QMessageBox::information(this, "Login", "Login bem-sucedido!");

        } else {
            QMessageBox::warning(this, "Login", "Usuário ou senha incorretos!");
        }
    });

    setLayout(layout);
    setWindowTitle("Tela de Login");
    resize(300, 150);
}
