#include "askquestion.h"
#include "ui_askquestion.h"
#include <iostream>
using namespace std;

AskQuestion::AskQuestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AskQuestion)
{
    ui->setupUi(this);
    ui->lineEdit_money->setEnabled(false);
    ui->lineEdit_love->setEnabled(false);
    ui->pushButton_money_submit->setEnabled(false);
    ui->pushButton_love_submit->setEnabled(false);
}

AskQuestion::~AskQuestion()
{
    delete ui;
}
string question;
int choice = 0;
string AskQuestion::getQuestion()
{
    return question;
}
int AskQuestion::getChoice()
{
    return choice;
}

void AskQuestion::on_pushButton_money_clicked()
{
    ui->lineEdit_money->setEnabled(true);
    ui->lineEdit_love->setEnabled(false);
    ui->pushButton_love_submit->setEnabled(false);
    ui->pushButton_money_submit->setEnabled(true);
}


void AskQuestion::on_pushButton_love_clicked()
{
    ui->lineEdit_love->setEnabled(true);
    ui->lineEdit_money->setEnabled(false);
    ui->pushButton_money_submit->setEnabled(false);
    ui->pushButton_love_submit->setEnabled(true);
}


void AskQuestion::on_pushButton_money_submit_clicked()
{
    QString q = ui->lineEdit_money->text();
    question = q.toUtf8().constData();
    choice = 1;
}

void AskQuestion::on_pushButton_love_submit_clicked()
{
    QString q = ui->lineEdit_love->text();
    question = q.toUtf8().constData();
    choice = 2;
}

