#include "mainwindow.h"
#include "loginwindow.h"
//#include "CadastroEControleDeProdutos/cadastro_de_produtos.h"

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include <iostream>
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
/*

// Função para conectar ao banco de dados SQLite
bool connectToDatabase() {
    // Verifique se a conexão já existe
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        QSqlDatabase db = QSqlDatabase::database("qt_sql_default_connection");
        if (db.isOpen()) {
            return true; // Conexão já aberta
        }
    }

    // Criação da conexão com o banco de dados
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/leonardo/DECOM/MarketFlow/MarketFlow/database/estoque_data.db"); // Defina o caminho correto do seu banco de dados

    if(!db.open()){
        return false;
    }
    else{
        return true;
    }
}

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    // Tentar conectar ao banco de dados
    if (!connectToDatabase()) {
        std::cout<< "Lascou se\n";
        return -1;
    }
    else{
        //LoginWindow login;
        //login.show();
        //cadastro_de_produtos
        return a.exec(); // Iniciar o loop de eventos da aplicação
    }

    return a.exec(); // Iniciar o loop de eventos da aplicação
}
*/
