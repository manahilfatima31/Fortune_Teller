#ifndef LOVEMETER_H
#define LOVEMETER_H

#include <QDialog>
#include <iostream>
using namespace std;
namespace Ui {
class LoveMeter;
}

class LoveMeter : public QDialog
{
    Q_OBJECT

public:
    explicit LoveMeter(QWidget *parent = nullptr);
    ~LoveMeter();
    void changeBar(int meter, string sign2);

private:
    Ui::LoveMeter *ui;
};

#endif // LOVEMETER_H
