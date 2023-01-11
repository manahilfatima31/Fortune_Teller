#include "signup.h"
#include "ui_signup.h"
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <QMessageBox>
#include "UserLogin.h"

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_clicked()
{
    User user;
    char gender= ' ';
    string usern;
    string userp;
    string y, m, d;
    QString name = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    usern = name.toUtf8().constData();
    userp = password.toUtf8().constData();
    if (ui->radioButton_Male->isChecked())
    {
        gender = 'M';
    }
    if (ui->radioButton_Female->isChecked())
    {
        gender = 'F';
    }
    QString year = ui->lineEdit_year->text();
    QString month = ui->lineEdit_month->text();
    QString date = ui->lineEdit_date->text();
    y = year.toUtf8().constData();
    m = month.toUtf8().constData();
    d = date.toUtf8().constData();
    int Year, Month, Day;
    Year = stoi(y);
    Month = stoi(m);
    Day = stoi(d);
    user.NewUser(usern, userp, gender, Year, Month, Day);
    QMessageBox::information(this, "Signup", "Account succesfully created!");
    QDialog::reject();
}
