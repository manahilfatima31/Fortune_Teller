#ifndef ASKQUESTION_H
#define ASKQUESTION_H

#include <iostream>
using namespace std;
#include <QDialog>

namespace Ui {
class AskQuestion;
}

class AskQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit AskQuestion(QWidget *parent = nullptr);
    ~AskQuestion();
    string getQuestion();
    int getChoice();

private slots:
    void on_pushButton_money_clicked();

    void on_pushButton_love_clicked();

    void on_pushButton_money_submit_clicked();



    void on_pushButton_love_submit_clicked();

private:
    Ui::AskQuestion *ui;
};

#endif // ASKQUESTION_H
