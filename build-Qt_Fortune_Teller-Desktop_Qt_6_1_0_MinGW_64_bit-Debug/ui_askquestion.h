/********************************************************************************
** Form generated from reading UI file 'askquestion.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKQUESTION_H
#define UI_ASKQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AskQuestion
{
public:
    QPushButton *pushButton_money;
    QLineEdit *lineEdit_money;
    QLineEdit *lineEdit_love;
    QPushButton *pushButton_love;
    QPushButton *pushButton_money_submit;
    QLabel *label;
    QPushButton *pushButton_love_submit;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *AskQuestion)
    {
        if (AskQuestion->objectName().isEmpty())
            AskQuestion->setObjectName(QString::fromUtf8("AskQuestion"));
        AskQuestion->resize(641, 450);
        pushButton_money = new QPushButton(AskQuestion);
        pushButton_money->setObjectName(QString::fromUtf8("pushButton_money"));
        pushButton_money->setGeometry(QRect(70, 290, 151, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ageo")});
        font.setPointSize(13);
        pushButton_money->setFont(font);
        pushButton_money->setStyleSheet(QString::fromUtf8("color:darkblue"));
        pushButton_money->setFlat(true);
        lineEdit_money = new QLineEdit(AskQuestion);
        lineEdit_money->setObjectName(QString::fromUtf8("lineEdit_money"));
        lineEdit_money->setGeometry(QRect(20, 340, 261, 31));
        lineEdit_money->setStyleSheet(QString::fromUtf8("background:transparent"));
        lineEdit_money->setFrame(false);
        lineEdit_love = new QLineEdit(AskQuestion);
        lineEdit_love->setObjectName(QString::fromUtf8("lineEdit_love"));
        lineEdit_love->setGeometry(QRect(360, 340, 261, 31));
        lineEdit_love->setStyleSheet(QString::fromUtf8("background:transparent"));
        lineEdit_love->setFrame(false);
        pushButton_love = new QPushButton(AskQuestion);
        pushButton_love->setObjectName(QString::fromUtf8("pushButton_love"));
        pushButton_love->setGeometry(QRect(410, 290, 161, 31));
        pushButton_love->setFont(font);
        pushButton_love->setStyleSheet(QString::fromUtf8("color:darkblue"));
        pushButton_love->setFlat(true);
        pushButton_money_submit = new QPushButton(AskQuestion);
        pushButton_money_submit->setObjectName(QString::fromUtf8("pushButton_money_submit"));
        pushButton_money_submit->setGeometry(QRect(80, 380, 131, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ageo")});
        font1.setPointSize(11);
        pushButton_money_submit->setFont(font1);
        pushButton_money_submit->setFlat(true);
        label = new QLabel(AskQuestion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 641, 451));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/askquestion.png")));
        pushButton_love_submit = new QPushButton(AskQuestion);
        pushButton_love_submit->setObjectName(QString::fromUtf8("pushButton_love_submit"));
        pushButton_love_submit->setGeometry(QRect(430, 380, 131, 41));
        pushButton_love_submit->setFont(font1);
        pushButton_love_submit->setFlat(true);
        label_2 = new QLabel(AskQuestion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 430, 261, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ageo")});
        font2.setPointSize(10);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:white"));
        label_3 = new QLabel(AskQuestion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 430, 261, 16));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color:white"));
        label->raise();
        pushButton_money->raise();
        lineEdit_money->raise();
        lineEdit_love->raise();
        pushButton_love->raise();
        pushButton_money_submit->raise();
        pushButton_love_submit->raise();
        label_2->raise();
        label_3->raise();

        retranslateUi(AskQuestion);
        QObject::connect(pushButton_money_submit, &QPushButton::clicked, AskQuestion, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_love_submit, &QPushButton::clicked, AskQuestion, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(AskQuestion);
    } // setupUi

    void retranslateUi(QDialog *AskQuestion)
    {
        AskQuestion->setWindowTitle(QCoreApplication::translate("AskQuestion", "Dialog", nullptr));
        pushButton_money->setText(QCoreApplication::translate("AskQuestion", "Money", nullptr));
        pushButton_love->setText(QCoreApplication::translate("AskQuestion", "Love", nullptr));
        pushButton_money_submit->setText(QCoreApplication::translate("AskQuestion", "Submit", nullptr));
        label->setText(QString());
        pushButton_love_submit->setText(QCoreApplication::translate("AskQuestion", "Submit", nullptr));
        label_2->setText(QCoreApplication::translate("AskQuestion", "Example: Will I get a lot of money in my life?", nullptr));
        label_3->setText(QCoreApplication::translate("AskQuestion", "Example: Will I find love in my life?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AskQuestion: public Ui_AskQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKQUESTION_H
