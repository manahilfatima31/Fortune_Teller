#ifndef ADDFORTUNE_H
#define ADDFORTUNE_H

#include <QDialog>
#include <iostream>
using namespace std;
namespace Ui {
class AddFortune;
}

class AddFortune : public QDialog
{
    Q_OBJECT

public:
    explicit AddFortune(QWidget *parent = nullptr);
    ~AddFortune();
    string getText();

private:
    Ui::AddFortune *ui;
};

#endif // ADDFORTUNE_H
