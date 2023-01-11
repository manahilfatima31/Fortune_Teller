#include "addfortune.h"
#include "ui_addfortune.h"
#include <fstream>
#include <QMessageBox>
#include <iostream>
#include <QTextEdit>
using namespace std;
string text;
AddFortune::AddFortune(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFortune)
{
    ui->setupUi(this);
    ui->textEdit_fortunes->clear();
    string ipt;
    fstream FFile;
    FFile.open("Fortunes.txt", ios::in);
    text = "";
    while (getline(FFile, ipt))
    {
        text = text + ipt + "\n";
    }
    QString qtext = QString::fromStdString(text);
    ui->textEdit_fortunes->setText(qtext);
}

AddFortune::~AddFortune()
{
    delete ui;
}

string AddFortune::getText()
{
    QString qtext = ui->textEdit_fortunes->toPlainText();
    text = qtext.toUtf8().constData();
    ui->textEdit_fortunes->clear();
    return text;
}

