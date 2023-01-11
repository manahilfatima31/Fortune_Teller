#include "lovecomp.h"
#include "ui_lovecomp.h"
#include <iostream>
#include <QMessageBox>
using namespace std;
LoveComp::LoveComp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoveComp)
{
    ui->setupUi(this);

}

LoveComp::~LoveComp()
{
    delete ui;
}
string sign;
string LoveComp::getSign()
{
    return sign;
}
void LoveComp::on_pushButton_lovecheck_clicked()
{
    if (ui->radioButton_aquarius->isChecked())
    {
        sign = "Aquarius";
    }
    if (ui->radioButton_pisces->isChecked())
    {
        sign = "Pisces";
    }
    if (ui->radioButton_aries->isChecked())
    {
        sign = "Aries";
    }
    if (ui->radioButton_taurus->isChecked())
    {
        sign = "Taurus";
    }
    if (ui->radioButton_gemini->isChecked())
    {
        sign = "Gemini";
    }
    if (ui->radioButton_cancer->isChecked())
    {
        sign = "Cancer";
    }
    if (ui->radioButton_leo->isChecked())
    {
        sign = "Leo";
    }
    if (ui->radioButton_virgo->isChecked())
    {
        sign = "Virgo";
    }
    if (ui->radioButton_libra->isChecked())
    {
        sign = "Libra";
    }
    if (ui->radioButton_scorpio->isChecked())
    {
        sign = "Scorpio";
    }
    if (ui->radioButton_saggitarius->isChecked())
    {
        sign = "Saggitarius";
    }
    if (ui->radioButton_capricorn->isChecked())
    {
        sign = "Capricorn";
    }
}

