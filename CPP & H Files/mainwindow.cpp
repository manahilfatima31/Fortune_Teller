#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "signup.h"
#include "login.cpp"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

class MainWMenu
{
    string sign;

public:
    string SignAssign(User user)
    {
        if ((user.getMonth() == 1 && user.getDay() >= 20) || (user.getMonth() == 2 && user.getDay() <= 18))
        {
            sign = "Aquarius";
        }
        if ((user.getMonth() == 2 && user.getDay() >= 19) || (user.getMonth() == 3 && user.getDay() <= 20))
        {
            sign = "Pisces";
        }
        if ((user.getMonth() == 3 && user.getDay() >= 21) || (user.getMonth() == 4 && user.getDay() <= 19))
        {
            sign = "Aries";
        }
        if ((user.getMonth() == 4 && user.getDay() >= 20) || (user.getMonth() == 5 && user.getDay() <= 20))
        {
            sign = "Taurus";
        }
        if ((user.getMonth() == 5 && user.getDay() >= 21) || (user.getMonth() == 6 && user.getDay() <= 20))
        {
            sign = "Gemini";
        }
        if ((user.getMonth() == 6 && user.getDay() >= 21) || (user.getMonth() == 7 && user.getDay() <= 22))
        {
            sign = "Cancer";
        }
        if ((user.getMonth() == 7 && user.getDay() >= 23) || (user.getMonth() == 8 && user.getDay() <= 22))
        {
            sign = "Leo";
        }
        if ((user.getMonth() == 8 && user.getDay() >= 23) || (user.getMonth() == 9 && user.getDay() <= 22))
        {
            sign = "Virgo";
        }
        if ((user.getMonth() == 9 && user.getDay() >= 23) || (user.getMonth() == 10 && user.getDay() <= 22))
        {
            sign = "Libra";
        }
        if ((user.getMonth() == 10 && user.getDay() >= 23) || (user.getMonth() == 11 && user.getDay() <= 21))
        {
            sign = "Scorpio";
        }
        if ((user.getMonth() == 11 && user.getDay() >= 22) || (user.getMonth() == 12 && user.getDay() <= 21))
        {
            sign = "Saggitarius";
        }
        if ((user.getMonth() == 12 && user.getDay() >= 22) || (user.getMonth() == 1 && user.getDay() <= 19))
        {
            sign = "Capricorn";
        }
        return sign;
    }
    string getSign()
    {
        return sign;
    }

};


void MainWindow::on_LoginButton_clicked()
{
    Login login;
    login.setModal(true);
    login.exec();
    User user;
    user = retUser();
    QString qname = QString::fromStdString(user.getName());
    MenuScreen = new class MenuScreen(this);
    MenuScreen->show();
    MainWMenu mw;
    mw.SignAssign(user);

    MenuScreen->showName(qname);
    MenuScreen->SignDisplay(mw.getSign());
    MenuScreen->showSignName();
}


void MainWindow::on_SignupButton_clicked()
{
    signup signup;
    signup.setModal(true);
    signup.exec();
}

