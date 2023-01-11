#ifndef SIGNS_H
#define SIGNS_H

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <QMessageBox>
using namespace std;

class Aries
{
    int lovec = 3;
public:
    int Love_Com()
    {

        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Aries About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Aries About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Taurus
{
    int lovec = 4;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Taurus About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Taurus About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Gemini
{
    int lovec = 5;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Gemini About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Gemini About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Cancer
{
    int lovec = 6;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Cancer About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Cancer About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Leo
{
    int lovec = 7;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Leo About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Leo About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Virgo
{
    int lovec = 8;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Virgo About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Virgo About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Libra
{
    int lovec = 9;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Libra About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Libra About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Scorpio
{
    int lovec = 10;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Scorpio About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Scorpio About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Saggitarius
{
    int lovec = 11;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Saggitarius About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Saggitarius About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Capricorn
{
    int lovec = 12;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Capricorn About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Capricorn About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Aquarius
{
    int lovec = 1;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Aquarius About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Aquarius About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};
class Pisces
{
    int lovec = 2;
public:
    int Love_Com()
    {
        int meter = 0;
        srand(time(NULL));
        meter = rand() % 100 + 1;
        meter = meter + lovec;
        return meter;
    }
    void AboutYourself()
    {
        string dummy, about;
        int Lcount = 0, LNum = 0, line_no = 0;
        ifstream Read_About("Pisces About.txt");
        while (getline(Read_About, dummy))
        {
            Lcount++;
        }
        Read_About.close();

        srand(time(NULL));
        LNum = rand() % Lcount + 1;
        ifstream About("Pisces About.txt");
        while (line_no != LNum)
        {
            getline(About, about);
            line_no++;
        }
        QString qabout = QString::fromStdString(about);
        QMessageBox::information(NULL, "About Yourself", qabout);
    }
};


#endif // SIGNS_H
