#include "adminmenu.h"
#include "ui_adminmenu.h"
#include <iostream>
#include <fstream>
#include <QMessageBox>
#include <QFile>
using namespace std;

AdminMenu::AdminMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMenu)
{
    ui->setupUi(this);
    ui->lineEdit_change_user->setEnabled(false);
    ui->lineEdit_change_pass->setEnabled(false);
    ui->pushButton_user_submit->setEnabled(false);
    ui->pushButton_pass_submit->setEnabled(false);
    ui->pushButton_submit_delete->setEnabled(false);
    ui->lineEdit_delete_user->setEnabled(false);
    ui->pushButton_submit_search->setEnabled(false);
    ui->lineEdit_search_user->setEnabled(false);
}

AdminMenu::~AdminMenu()
{
    delete ui;
}

class Admin
{
    string username;
    string pass;

public:
    void setUsername(string username)
    {
        this->username = username;
    }
    void setPass(string pass)
    {
        this->pass = pass;
    }
    string getUsername()
    {
        return username;
    }
    string getPass()
    {
        return pass;
    }
    void showUsers()
    {
        fstream LFile;
        LFile.open("lifetime.txt", ios::in);
        string line, output;
        int i=0;
        while (getline(LFile, line))
        {
            i++;
            fstream CFile;
            CFile.open(line + ".txt", ios::in);
            if (!CFile)
            {
                output = output + to_string(i) + ". " + line + "\n";
            }
            else
            {
                output = output + to_string(i) + ". " + line + " (Active)" + "\n";
            }
            CFile.close();
        }
        LFile.close();
        QString qout = QString::fromStdString(output);
        QMessageBox msgBox;
        msgBox.setText(qout);
        msgBox.exec();
    }
    void Delete_User(string user)
        {
            QMessageBox msgBox;
            char cuser[80];

            fstream DFile;
            DFile.open(user + ".txt", ios::in);
            if (!DFile)
            {
                QMessageBox::warning(NULL, "Delete User", "User does not exist, please enter correct name.");
            }
            else
            {
                DFile.close();
                user = user + ".txt";
                strcpy_s(cuser, user.c_str());
                if (remove(cuser) == 0)
                {
                    QMessageBox::information(NULL, "Delete User", "User deleted successfully!");
                }
                else
                {
                    QMessageBox::information(NULL, "Delete User", "User records were not able to be deleted, Sorry!");
                }
            }
        }
    void Search_User(string name)
        {
            QMessageBox msgBox;
            fstream SFile;
            SFile.open(name + ".txt", ios::in);
            if (!SFile)
            {
                QMessageBox::information(NULL, "Search User", "User does not exist, please enter correct name.");
            }
            else
            {
                string output;
                string search;
                for (int i = 0; i < 6; i++)
                {
                    getline(SFile, search);
                    output = output + search + "\n";
                }
                QString qout = QString::fromStdString(output);
                msgBox.setText(qout);
                msgBox.exec();
            }
        }
    void Add_Fortune()
        {
            string text;
            AddFortune addf;
            addf.setModal(true);
            if(addf.exec() == QDialog::Accepted)
            {
                text = addf.getText();
                string ipt;
                fstream FFile;
                FFile.open("Fortunes.txt", fstream::in | fstream::out | fstream::trunc);
                if (!FFile)
                {
                    QMessageBox::information(NULL, "Update Fortunes", "File failed to open!");
                    return;
                }
                else
                {
                    FFile << text;
                    QMessageBox::information(NULL, "Update Fortunes", "Fortune line(s) updated successfully!");
                }
            }
            addf.close();
        }
};

Admin adm;
void AdminMenu::readAdmin(string fuser, string fpass)
{
    adm.setUsername(fuser);
    adm.setPass(fpass);
}

void AdminMenu::on_pushButton_change_user_clicked()
{
    ui->lineEdit_change_user->setEnabled(true);
    ui->lineEdit_change_pass->setEnabled(false);
    ui->pushButton_user_submit->setEnabled(true);
    ui->pushButton_pass_submit->setEnabled(false);
    ui->pushButton_submit_delete->setEnabled(false);
    ui->lineEdit_delete_user->setEnabled(false);
    ui->pushButton_submit_search->setEnabled(false);
    ui->lineEdit_search_user->setEnabled(false);
}

void AdminMenu::on_pushButton_change_pass_clicked()
{
    ui->lineEdit_change_user->setEnabled(false);
    ui->lineEdit_change_pass->setEnabled(true);
    ui->pushButton_user_submit->setEnabled(false);
    ui->pushButton_pass_submit->setEnabled(true);
    ui->pushButton_submit_delete->setEnabled(false);
    ui->lineEdit_delete_user->setEnabled(false);
    ui->pushButton_submit_search->setEnabled(false);
    ui->lineEdit_search_user->setEnabled(false);
}

void AdminMenu::on_pushButton_user_submit_clicked()
{
    QString quser = ui->lineEdit_change_user->text();
    string user = quser.toUtf8().constData();
    string fpass = adm.getPass();
    fstream AFile("admindata.txt", fstream::in | fstream::out | fstream::trunc);
    AFile << user << "\n" << fpass;
    QMessageBox::warning(this, "Admin Panel", "Username changed, please log in again.");
}

void AdminMenu::on_pushButton_pass_submit_clicked()
{
    QString qpass = ui->lineEdit_change_pass->text();
    string pass = qpass.toUtf8().constData();
    string fuser = adm.getUsername();
    fstream AFile("admindata.txt", fstream::in | fstream::out | fstream::trunc);
    AFile << fuser << "\n" << pass;
    QMessageBox::warning(this, "Admin Panel", "Password changed, please log in again.");
}


void AdminMenu::on_pushButton_lifetime_clicked()
{
    adm.showUsers();
}



void AdminMenu::on_pushButton_delete_clicked()
{
    ui->lineEdit_change_user->setEnabled(false);
    ui->lineEdit_change_pass->setEnabled(false);
    ui->pushButton_user_submit->setEnabled(false);
    ui->pushButton_pass_submit->setEnabled(false);
    ui->pushButton_submit_delete->setEnabled(true);
    ui->lineEdit_delete_user->setEnabled(true);
    ui->pushButton_submit_search->setEnabled(false);
    ui->lineEdit_search_user->setEnabled(false);
}


void AdminMenu::on_pushButton_submit_delete_clicked()
{
    QString qdelete = ui->lineEdit_delete_user->text();
    string user = qdelete.toUtf8().constData();
    adm.Delete_User(user);
}


void AdminMenu::on_pushButton_search_clicked()
{
    ui->lineEdit_change_user->setEnabled(false);
    ui->lineEdit_change_pass->setEnabled(false);
    ui->pushButton_user_submit->setEnabled(false);
    ui->pushButton_pass_submit->setEnabled(false);
    ui->pushButton_submit_delete->setEnabled(false);
    ui->lineEdit_delete_user->setEnabled(false);
    ui->pushButton_submit_search->setEnabled(true);
    ui->lineEdit_search_user->setEnabled(true);
}


void AdminMenu::on_pushButton_submit_search_clicked()
{
    QString qsearch = ui->lineEdit_search_user->text();
    string user = qsearch.toUtf8().constData();
    adm.Search_User(user);
}



void AdminMenu::on_pushButton_add_clicked()
{
    adm.Add_Fortune();
}

