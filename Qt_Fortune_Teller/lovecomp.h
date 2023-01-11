#ifndef LOVECOMP_H
#define LOVECOMP_H

#include <QDialog>
#include <iostream>
using namespace std;

namespace Ui {
class LoveComp;
}

class LoveComp : public QDialog
{
    Q_OBJECT

public:
    explicit LoveComp(QWidget *parent = nullptr);
    ~LoveComp();
    string getSign();
    void changeBar(int meter);

private slots:
    void on_pushButton_lovecheck_clicked();

private:
    Ui::LoveComp *ui;
};

#endif // LOVECOMP_H
