#ifndef MENUSCREEN_H
#define MENUSCREEN_H

#include <QDialog>
#include <iostream>
#include "askquestion.h"
#include "Signs.h"
#include "lovecomp.h"
#include "lovemeter.h"
#include "adminmenu.h"
using namespace std;


namespace Ui {
class MenuScreen;
}

class MenuScreen : public QDialog
{
    Q_OBJECT

public:
    explicit MenuScreen(QWidget *parent = nullptr);
    ~MenuScreen();
    void showName(QString qname);
    void SignDisplay(string sign);
    void showSignName();

private slots:


    void on_pushButton_fortune_clicked();

    void on_pushButton_question_clicked();

    void on_pushButton_love_clicked();

    void on_pushButton_about_clicked();

    void on_pushButton_admin_clicked();

    void on_pushButton_admin_login_clicked();

private:
    Ui::MenuScreen *ui;
    LoveComp *LoveComp;
    LoveMeter *LoveMeter;
    AdminMenu *AdminMenu;
};

#endif // MENUSCREEN_H
