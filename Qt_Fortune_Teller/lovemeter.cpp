#include "lovemeter.h"
#include "ui_lovemeter.h"
#include <QMessageBox>

LoveMeter::LoveMeter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoveMeter)
{
    ui->setupUi(this);
}

LoveMeter::~LoveMeter()
{
    delete ui;
}

void LoveMeter::changeBar(int meter, string sign2)
{
    QString qsign = QString::fromStdString(sign2);
    ui->lineEdit_compat->setText("Your love compatibility with " + qsign + " is:");
    meter = meter * 0.8;
    ui->progressBar->setValue(meter);
    ui->lcdNumber->display(meter);
}
