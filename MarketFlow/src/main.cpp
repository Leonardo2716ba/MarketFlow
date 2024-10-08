#include <QApplication>
#include "loginwindow.h"
#include "cadastrodeprodutoswindow.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>

// Função para conectar ao banco de dados SQLite
bool connectToDatabase() {
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        QSqlDatabase db = QSqlDatabase::database("qt_sql_default_connection");
        if (db.isOpen()) {
            return true; // Conexão já aberta
        }
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/leonardo/DECOM/MarketFlow/MarketFlow/database/estoque_data.db"); // Defina o caminho correto do seu banco de dados

    if(!db.open()){
        QMessageBox::critical(nullptr, "Erro", "Falha ao abrir o banco de dados: " + db.lastError().text());
        return false;
    }

    return true;
}

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Conectar ao banco de dados
    if (!connectToDatabase()) {
        return -1;
    }
    else{
        CadastroDeProdutosWindow cadastroDeProdutos;
        cadastroDeProdutos.show();
        //LoginWindow login;
        //login.show();
        return a.exec(); // Iniciar o loop de eventos da aplicação
    }
    /*
    // Exibir tela de login
    LoginWindow login;
    if (login.exec() == QDialog::Accepted) {
        // Após login bem-sucedido, abrir a tela de cadastro de produtos
        CadastroDeProdutosWindow cadastroDeProdutos;
        cadastroDeProdutos.show();
        return a.exec();
    }
    */
    return 0;
}
