/********************************************************************************
** Form generated from reading UI file 'addfortune.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFORTUNE_H
#define UI_ADDFORTUNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddFortune
{
public:
    QLabel *label_2;
    QTextEdit *textEdit_fortunes;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_update;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *AddFortune)
    {
        if (AddFortune->objectName().isEmpty())
            AddFortune->setObjectName(QString::fromUtf8("AddFortune"));
        AddFortune->resize(790, 495);
        label_2 = new QLabel(AddFortune);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, -10, 791, 511));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ageo")});
        font.setPointSize(22);
        label_2->setFont(font);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/addfortunes.png")));
        label_2->setAlignment(Qt::AlignCenter);
        textEdit_fortunes = new QTextEdit(AddFortune);
        textEdit_fortunes->setObjectName(QString::fromUtf8("textEdit_fortunes"));
        textEdit_fortunes->setGeometry(QRect(10, 160, 771, 271));
        label_3 = new QLabel(AddFortune);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-70, 130, 371, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ageo")});
        font1.setPointSize(16);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:darkblue"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(AddFortune);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(470, 110, 371, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ageo")});
        font2.setPointSize(11);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color:darkblue"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(AddFortune);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 130, 501, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color:darkblue"));
        label_5->setAlignment(Qt::AlignCenter);
        pushButton_update = new QPushButton(AddFortune);
        pushButton_update->setObjectName(QString::fromUtf8("pushButton_update"));
        pushButton_update->setGeometry(QRect(470, 440, 151, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ageo")});
        font3.setPointSize(14);
        pushButton_update->setFont(font3);
        pushButton_update->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_update->setFlat(true);
        pushButton_cancel = new QPushButton(AddFortune);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(630, 440, 151, 41));
        pushButton_cancel->setFont(font3);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_cancel->setFlat(true);

        retranslateUi(AddFortune);
        QObject::connect(pushButton_update, &QPushButton::clicked, AddFortune, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_cancel, &QPushButton::clicked, AddFortune, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddFortune);
    } // setupUi

    void retranslateUi(QDialog *AddFortune)
    {
        AddFortune->setWindowTitle(QCoreApplication::translate("AddFortune", "Dialog", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("AddFortune", "Current list of fortunes:", nullptr));
        label_4->setText(QCoreApplication::translate("AddFortune", "To add new fortune, add it in a new line", nullptr));
        label_5->setText(QCoreApplication::translate("AddFortune", "If you want to update a fortune, edit the text and click update button", nullptr));
        pushButton_update->setText(QCoreApplication::translate("AddFortune", "Update", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("AddFortune", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddFortune: public Ui_AddFortune {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFORTUNE_H
