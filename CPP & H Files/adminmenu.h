#ifndef ADMINMENU_H
#define ADMINMENU_H
#include <iostream>
#include <QDialog>
#include "addfortune.h"
using namespace std;
class CheckAdmin
{
    string username = "usman3214";
    string pass = "3214";
public:
    string getUsername()
    {
        return username;
    }
    string getPass()
    {
        return pass;
    }
};
namespace Ui {
class AdminMenu;
}

class AdminMenu : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMenu(QWidget *parent = nullptr);
    ~AdminMenu();
    void readAdmin(string fuser, string fpass);

private slots:


    void on_pushButton_change_user_clicked();

    void on_pushButton_change_pass_clicked();

    void on_pushButton_user_submit_clicked();

    void on_pushButton_pass_submit_clicked();

    void on_pushButton_lifetime_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_submit_delete_clicked();

    void on_pushButton_search_clicked();

    void on_pushButton_submit_search_clicked();

    void on_pushButton_add_clicked();

private:
    Ui::AdminMenu *ui;
};

#endif // ADMINMENU_H
