#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <QMessageBox>
#include "login.h"
#include "ui_login.h"
using namespace std;
class User
{
    string name;
    string pass;
    int year;
    int month;
    int day;
    string gender;
    static string users;
    static int count;

public:
    void setName(QString name1)
    {
        name = name1.toUtf8().constData();
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setPass()
    {
        char ch;
        ch = _getch();
        while (ch != 13)
        {
            pass.push_back(ch);
            cout << "*";
            ch = _getch();
        }
    }
    void setPass(string pass)
    {
        this->pass = pass;
    }
    void setYear()
    {
        cin >> year;
    }
    void setYear(int year)
    {
        this->year = year;
    }
    void setMonth()
    {
        cin >> month;
    }
    void setMonth(int month)
    {
        this->month = month;
    }
    void setDay()
    {
        cin >> day;
    }
    void setDay(int day)
    {
        this->day = day;
    }
    void setGender(char gender)
    {
        this->gender = gender;
    }
    void setGender(string gender)
    {
        this->gender = gender;
    }
    string getName()
    {
        return name;
    }
    string getPass()
    {
        return pass;
    }
    int getYear()
    {
        return year;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
    string getGender()
    {
        return gender;
    }
    string getUsers()
    {
        return users;
    }

    User()
    {
        name = "";
        pass = "";
        year = 0;
        month = 0;
        day = 0;
        gender = "";
    }
    void NewUser(string name, string pass, char gender, int year, int month, int day)
    {
        setName(name);

        setPass(pass);

        setGender(gender);

        setYear(year);

        setMonth(month);

        setDay(day);

        fstream NFile(name + ".txt", fstream::in | fstream::out | fstream::trunc);
        NFile << name + "\n" + pass + "\n" + gender + "\n" + to_string(year) + "\n" + to_string(month) + "\n" + to_string(day);
        NFile.close();

        fstream LFile("lifetime.txt", fstream::in | fstream::out | fstream::app);
        LFile << name + "\n";
        LFile.close();
    }

    User ExistingUser(User user)
    {

        fstream EFile;
        EFile.open(user.getName() + ".txt", ios::in);

        if (!EFile)
        {
            QMessageBox::warning(NULL, "Login", "This User does not exist!");
        }
        else
        {
            string line;

            getline(EFile, line);   //to skip the name line in the file
            setName(line);

            getline(EFile, line);

            if(user.getPass() == line)
            {
                user.setPass(line);

                getline(EFile, line);
                user.setGender(line);

                getline(EFile, line);
                user.setYear(stoi(line));

                getline(EFile, line);
                user.setMonth(stoi(line));

                getline(EFile, line);
                user.setDay(stoi(line));

                return user;
            }
            else
            {
                QMessageBox::warning(NULL, "Login", "Incorrect Password!");
            }
        }

    }
};


#endif // USERLOGIN_H
