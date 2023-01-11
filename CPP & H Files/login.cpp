#include "login.h"
#include "ui_login.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <QMessageBox>


#include "UserLogin.h"
using namespace std;

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}


User guser;
User retUser()
{
    return guser;
}


void Login::on_pushButton_clicked()
{
    User user;
    QString name = ui->lineEdit_username->text();
    QString qpass = ui->lineEdit_password->text();
    string pass = qpass.toUtf8().constData();
    user.setName(name);
    user.setPass(pass);
    guser = user.ExistingUser(user);
    QDialog::reject();
}

