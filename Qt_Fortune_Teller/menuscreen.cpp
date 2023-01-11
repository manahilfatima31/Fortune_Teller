#include "menuscreen.h"
#include "ui_menuscreen.h"
#include <QLabel>
#include <QPixmap>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <cstring>
#include <QMessageBox>
#include "lovecomp.h"
#include "Signs.h"

using namespace std;


MenuScreen::MenuScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuScreen)
{
    ui->setupUi(this);
    ui->lineEdit_admin_username->setEnabled(false);
    ui->lineEdit_admin_pass->setEnabled(false);
    ui->pushButton_admin_login->setEnabled(false);
}

MenuScreen::~MenuScreen()
{
    delete ui;
}

class FortuneTeller
{
    string sign;
    string sign2;

public:
    void setSign(string sign)
    {
        this->sign = sign;
    }
    string getSign2()
    {
        return sign2;
    }
    string getSign()
    {
        return sign;
    }
    void DailyFortune()
        {
            string dummy, fortune;
            int Lcount = 0;
            int LNum = 0;
            int line_no = 0;
            ifstream Read_Fortunes("Fortunes.txt");
            while (getline(Read_Fortunes, dummy))
            {
                Lcount++;
            }
            Read_Fortunes.close();

            srand(time(NULL));
            LNum = rand() % Lcount + 1;
            ifstream Fortunes("Fortunes.txt");
            while (line_no != LNum)
            {
                getline(Fortunes, fortune);
                line_no++;
            }
            QString qfort = QString::fromStdString(fortune);
            QMessageBox::information(NULL, "Daily Fortune", qfort);
        }
    void AskQ()
    {
        string question="";
        int num = -1, choice = 0;;
        QSretype:
        AskQuestion askq;
        askq.setModal(true);
        if(askq.exec() == QDialog::Accepted)
        {
            question = askq.getQuestion();
            choice = askq.getChoice();
        }

        if (choice == 1)
        {
            num = question.find("money");
            if (num != -1)
            {
                string dummy, moneyans;
                int Lcount = 0;
                int LNum = 0;
                int line_no = 0;
                ifstream Read_Money("Money Answers.txt");
                while (getline(Read_Money, dummy))
                {
                    Lcount++;
                }
                Read_Money.close();

                srand(time(NULL));
                LNum = rand() % Lcount + 1;
                ifstream Money("Money Answers.txt");
                while (line_no != LNum)
                {
                    getline(Money, moneyans);
                    line_no++;
                }
                QString mans = QString::fromStdString(moneyans);
                QMessageBox::information(NULL, "Ask Question", mans);
            }
            else
            {
                QMessageBox::warning(NULL, "Ask Question", "Please use the topic name (money) in your question (see examples)");
                goto QSretype;
            }
        }
        if (choice == 2)
        {
            num = question.find("love");
            if (num != -1)
            {
                string dummy, loveans;
                int Lcount = 0;
                int LNum = 0;
                int line_no = 0;
                ifstream Read_Love("Love Answers.txt");
                while (getline(Read_Love, dummy))
                {
                    Lcount++;
                }
                Read_Love.close();

                srand(time(NULL));
                LNum = rand() % Lcount + 1;
                ifstream Love("Love Answers.txt");
                while (line_no != LNum)
                {
                    getline(Love, loveans);
                    line_no++;
                }
                QString lans = QString::fromStdString(loveans);
                QMessageBox::information(NULL, "Ask Question", lans);
            }
            else
            {
                QMessageBox::warning(NULL, "Ask Question", "Please use the topic name (love) in your question (see examples)");
                goto QSretype;
            }
        }
    }
    int Love_Meter()
        {
            LoveComp lovecomp;
            lovecomp.setModal(true);
            if(lovecomp.exec() == QDialog::Accepted)
            {
                sign2 = lovecomp.getSign();
            }

            if (sign == "Aries")
            {
                int meter;
                Aries aries;
                meter = aries.Love_Com();
                return meter;
            }
            if (sign == "Taurus")
            {
                int meter;
                Taurus taurus;
                meter = taurus.Love_Com();
                return meter;
            }
            if (sign == "Gemini")
            {
                int meter;
                Gemini gemini;
                meter = gemini.Love_Com();
                return meter;
            }
            if (sign == "Cancer")
            {
                int meter;
                Cancer cancer;
                meter = cancer.Love_Com();
                return meter;
            }
            if (sign == "Leo")
            {
                int meter;
                Leo leo;
                meter = leo.Love_Com();
                return meter;
            }
            if (sign == "Virgo")
            {
                int meter;
                Virgo virgo;
                meter = virgo.Love_Com();
                return meter;
            }
            if (sign == "Libra")
            {
                int meter;
                Libra libra;
                meter = libra.Love_Com();
                return meter;
            }
            if (sign == "Scorpio")
            {
                int meter;
                Scorpio scorpio;
                meter = scorpio.Love_Com();
                return meter;
            }
            if (sign == "Saggitarius")
            {
                int meter;
                Saggitarius saggitarius;
                meter = saggitarius.Love_Com();
                return meter;
            }
            if (sign == "Capricorn")
            {
                int meter;
                Capricorn capricorn;
                meter = capricorn.Love_Com();
                return meter;
            }
            if (sign == "Aquarius")
            {
                int meter;
                Aquarius aquarius;
                meter = aquarius.Love_Com();
                return meter;
            }
            if (sign == "Pisces")
            {
                int meter;
                Pisces pisces;
                meter = pisces.Love_Com();
                return meter;
            }
        }
    void Know_About()
        {
            if (sign == "Aries")
            {
                Aries aries;
                aries.AboutYourself();
            }
            if (sign == "Taurus")
            {
                Taurus taurus;
                taurus.AboutYourself();
            }
            if (sign == "Gemini")
            {
                Gemini gemini;
                gemini.AboutYourself();
            }
            if (sign == "Cancer")
            {
                Cancer cancer;
                cancer.AboutYourself();
            }
            if (sign == "Leo")
            {
                Leo leo;
                leo.AboutYourself();
            }
            if (sign == "Virgo")
            {
                Virgo virgo;
                virgo.AboutYourself();
            }
            if (sign == "Libra")
            {
                Libra libra;
                libra.AboutYourself();
            }
            if (sign == "Scorpio")
            {
                Scorpio scorpio;
                scorpio.AboutYourself();
            }
            if (sign == "Saggitarius")
            {
                Saggitarius saggitarius;
                saggitarius.AboutYourself();
            }
            if (sign == "Capricorn")
            {
                Capricorn capricorn;
                capricorn.AboutYourself();
            }
            if (sign == "Aquarius")
            {
                Aquarius aquarius;
                aquarius.AboutYourself();
            }
            if (sign == "Pisces")
            {
                Pisces pisces;
                pisces.AboutYourself();
            }
        }
};
FortuneTeller ft;
void MenuScreen::showName(QString qname)
{
    string name = qname.toUtf8().constData();
    fstream UFile;
    UFile.open(name + ".txt", ios::in);

    if (!UFile)
    {
        ui->lineEdit_name->setText(qname + "!");
    }
    else
    {
        string line;
        getline(UFile, line);
        qname = QString::fromStdString(line);
        ui->lineEdit_name->setText(qname + "!");
    }
}
void MenuScreen::showSignName()
{
    QString qsign = QString::fromStdString(ft.getSign());
    ui->label_sign_name->setText(qsign);
}
void MenuScreen::SignDisplay(string sign)
{
            if (sign == "Aries")
            {
                QPixmap pix("aries.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Taurus")
            {
                QPixmap pix("taurus.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Gemini")
            {
                QPixmap pix("gemini.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Cancer")
            {
                QPixmap pix("cancer.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Leo")
            {
                QPixmap pix("leo.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Virgo")
            {
                QPixmap pix("virgo.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Libra")
            {
                QPixmap pix("libra.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Scorpio")
            {
                QPixmap pix("scorpio.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Saggitarius")
            {
                QPixmap pix("saggitarius.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Capricorn")
            {
                QPixmap pix("capricorn.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Aquarius")
            {
                QPixmap pix("aquarius.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            if (sign == "Pisces")
            {
                QPixmap pix("pisces.png");
                ui->label_sign->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio));
            }
            ft.setSign(sign);
}


void MenuScreen::on_pushButton_fortune_clicked()
{
    ft.DailyFortune();
}


void MenuScreen::on_pushButton_question_clicked()
{
    ft.AskQ();
}

void MenuScreen::on_pushButton_love_clicked()
{
    int meter = ft.Love_Meter();
    LoveMeter = new class LoveMeter(this);
    LoveMeter->show();
    LoveMeter->changeBar(meter, ft.getSign2());
}


void MenuScreen::on_pushButton_about_clicked()
{
    ft.Know_About();
}


void MenuScreen::on_pushButton_admin_clicked()
{
    ui->lineEdit_admin_username->setEnabled(true);
    ui->lineEdit_admin_pass->setEnabled(true);
    ui->pushButton_admin_login->setEnabled(true);
}


void MenuScreen::on_pushButton_admin_login_clicked()
{
    CheckAdmin adm;
    QString auser = ui->lineEdit_admin_username->text();
    QString apass = ui->lineEdit_admin_pass->text();
    string user = auser.toUtf8().constData();
    string pass = apass.toUtf8().constData();

    fstream AFile;
    AFile.open("admindata.txt", ios::in);
    string fuser, fpass;
    getline(AFile, fuser);
    getline(AFile, fpass);
    AFile.close();
    if ((fuser == user) && (fpass == pass))
    {
        AdminMenu = new class AdminMenu(this);
        AdminMenu->show();
        AdminMenu->readAdmin(fuser, fpass);
    }
    else
    {
        QMessageBox::warning(this, "Admin Panel", "Username/Password not correct!");
    }
}

