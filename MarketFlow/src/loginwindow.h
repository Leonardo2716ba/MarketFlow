#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>

class LoginWindow : public QWidget {
    Q_OBJECT // Necessário para o uso de sinais e slots

public:
    explicit LoginWindow(QWidget *parent = nullptr);
};

#endif // LOGINWINDOW_H
