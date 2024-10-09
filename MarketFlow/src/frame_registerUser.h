#ifndef FRAME_REGISTERUSER_H
#define FRAME_REGISTERUSER_H

#include <QFrame>
#include"dataUser.h"

namespace Ui {
class Frame_RegisterUser;
}

class Frame_RegisterUser : public QFrame
{
    Q_OBJECT

public:
    explicit Frame_RegisterUser(QWidget *parent = nullptr);
    ~Frame_RegisterUser();

private slots:
    void on_pushButton_AdcionarUsuario_clicked();

private:
    Ui::Frame_RegisterUser *ui;
    Usuario *usuario; // Ponteiro para armazenar o usuário criado
};

#endif // FRAME_REGISTERUSER_H
