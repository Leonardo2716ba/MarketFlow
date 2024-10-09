#include "dataUser.h"

// Construtor
Usuario::Usuario(QString nomeCompleto, QString cpf, QString email, QString senha, bool isEmployee, bool isCashier, bool isManager, bool isAdm)
    : nomeCompleto(nomeCompleto), cpf(cpf), email(email), senha(senha), isEmployee(isEmployee), isCashier(isCashier), isManager(isManager), isAdm(isAdm) {}

// Getters
QString Usuario::getNomeCompleto() const { return nomeCompleto; }
QString Usuario::getCPF() const { return cpf; }
QString Usuario::getEmail() const { return email; }
QString Usuario::getSenha() const { return senha; }
bool Usuario::getIsEmployee() const { return isEmployee; }
bool Usuario::getIsCashier() const { return isCashier; }
bool Usuario::getIsManager() const { return isManager; }
bool Usuario::getIsAdm() const { return isAdm; }

// Setters
void Usuario::setNomeCompleto(QString name) {this->nomeCompleto = name;}
void Usuario::setCPF(QString cpf) {this->cpf = cpf;}
void Usuario::setEmail(QString email) {this->email = email;}
void Usuario::setSenha(QString senha) {this->senha = senha;}
void Usuario::setIsEmployee(bool isEmployee) {this->isEmployee = isEmployee;}
void Usuario::setIsCashier(bool isCashier) {this->isCashier = isCashier;}
void Usuario::setIsManager(bool isManager) {this->isManager = isManager;}
void Usuario::setIsAdm(bool isAdm) {this->isAdm = isAdm;}
