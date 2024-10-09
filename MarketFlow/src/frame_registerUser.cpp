#include "frame_registeruser.h"
#include "ui_frame_registerUser.h"
#include "dataUser.h"

Frame_RegisterUser::Frame_RegisterUser(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::Frame_RegisterUser)
{
    ui->setupUi(this);
}

Frame_RegisterUser::~Frame_RegisterUser()
{
    delete ui;
}

void Frame_RegisterUser::on_pushButton_AdcionarUsuario_clicked()
{
    //Obtendo os dados da tela
    QString name = ui->lineEdit_NomeCompleto->text();
    QString cpf = ui->lineEdit_CPF->text();
    QString email = ui->lineEdit_Email->text();
    QString senha = ui->lineEdit_Senha->text();
    QString senha2 = ui->lineEdit_SenhaRepetir->text();
    bool emp = ui->checkBox_Funcionario->isChecked();
    bool cas = ui->checkBox_FuncionarioCaixa->isChecked();
    bool man = ui->checkBox_Gerente->isChecked();
    bool adm = ui->checkBox_Administrador->isChecked();

    // Validação básica de senha
    bool isPassValid = senha == senha2;
    if(!isPassValid) {
        //QMessageBox::warning(this, "Erro", "As senhas não coincidem!");
        ui->label_Warning->setText("As senhas não coincidem!");
        return;
    }
    //Adcionando valores ao usuario
    usuario = new Usuario(name, cpf, email, senha, emp, cas, man, adm);
    //mostrando o resultado
    ui->label_Warning->setText("Usuario Cadastrado com Sucesso!");
    //limpando os parametros
    ui->lineEdit_NomeCompleto->clear();
    ui->lineEdit_CPF->clear();
    ui->lineEdit_Email->clear();
    ui->lineEdit_Senha->clear();
    ui->lineEdit_SenhaRepetir->clear();
    ui->checkBox_Funcionario->setChecked(false);
    ui->checkBox_FuncionarioCaixa->setChecked(false);
    ui->checkBox_Gerente->setChecked(false);
    ui->checkBox_Administrador->setChecked(false);
}

