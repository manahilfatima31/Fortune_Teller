/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminMenu
{
public:
    QLabel *label_2;
    QPushButton *pushButton_user_submit;
    QLineEdit *lineEdit_change_user;
    QLineEdit *lineEdit_change_pass;
    QPushButton *pushButton_pass_submit;
    QLineEdit *lineEdit_delete_user;
    QPushButton *pushButton_submit_delete;
    QLineEdit *lineEdit_search_user;
    QPushButton *pushButton_submit_search;
    QPushButton *pushButton_lifetime;
    QPushButton *pushButton_change_user;
    QPushButton *pushButton_change_pass;
    QPushButton *pushButton_add;
    QPushButton *pushButton_search;
    QPushButton *pushButton_delete;

    void setupUi(QDialog *AdminMenu)
    {
        if (AdminMenu->objectName().isEmpty())
            AdminMenu->setObjectName(QString::fromUtf8("AdminMenu"));
        AdminMenu->resize(771, 453);
        label_2 = new QLabel(AdminMenu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 771, 451));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ageo")});
        font.setPointSize(22);
        label_2->setFont(font);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/adminmenu.png")));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_user_submit = new QPushButton(AdminMenu);
        pushButton_user_submit->setObjectName(QString::fromUtf8("pushButton_user_submit"));
        pushButton_user_submit->setGeometry(QRect(80, 231, 91, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ageo")});
        font1.setPointSize(12);
        pushButton_user_submit->setFont(font1);
        pushButton_user_submit->setFocusPolicy(Qt::WheelFocus);
        pushButton_user_submit->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_user_submit->setFlat(true);
        lineEdit_change_user = new QLineEdit(AdminMenu);
        lineEdit_change_user->setObjectName(QString::fromUtf8("lineEdit_change_user"));
        lineEdit_change_user->setGeometry(QRect(70, 190, 101, 31));
        lineEdit_change_user->setStyleSheet(QString::fromUtf8("background:transparent"));
        lineEdit_change_user->setFrame(false);
        lineEdit_change_pass = new QLineEdit(AdminMenu);
        lineEdit_change_pass->setObjectName(QString::fromUtf8("lineEdit_change_pass"));
        lineEdit_change_pass->setGeometry(QRect(330, 190, 101, 31));
        lineEdit_change_pass->setStyleSheet(QString::fromUtf8("background:transparent"));
        lineEdit_change_pass->setFrame(false);
        lineEdit_change_pass->setEchoMode(QLineEdit::Password);
        pushButton_pass_submit = new QPushButton(AdminMenu);
        pushButton_pass_submit->setObjectName(QString::fromUtf8("pushButton_pass_submit"));
        pushButton_pass_submit->setGeometry(QRect(340, 230, 91, 21));
        pushButton_pass_submit->setFont(font1);
        pushButton_pass_submit->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_pass_submit->setFlat(true);
        lineEdit_delete_user = new QLineEdit(AdminMenu);
        lineEdit_delete_user->setObjectName(QString::fromUtf8("lineEdit_delete_user"));
        lineEdit_delete_user->setGeometry(QRect(70, 350, 101, 41));
        lineEdit_delete_user->setStyleSheet(QString::fromUtf8("background:transparent"));
        lineEdit_delete_user->setFrame(false);
        pushButton_submit_delete = new QPushButton(AdminMenu);
        pushButton_submit_delete->setObjectName(QString::fromUtf8("pushButton_submit_delete"));
        pushButton_submit_delete->setGeometry(QRect(80, 395, 101, 21));
        pushButton_submit_delete->setFont(font1);
        pushButton_submit_delete->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_submit_delete->setFlat(true);
        lineEdit_search_user = new QLineEdit(AdminMenu);
        lineEdit_search_user->setObjectName(QString::fromUtf8("lineEdit_search_user"));
        lineEdit_search_user->setGeometry(QRect(330, 350, 101, 41));
        lineEdit_search_user->setStyleSheet(QString::fromUtf8("background:transparent"));
        lineEdit_search_user->setFrame(false);
        pushButton_submit_search = new QPushButton(AdminMenu);
        pushButton_submit_search->setObjectName(QString::fromUtf8("pushButton_submit_search"));
        pushButton_submit_search->setGeometry(QRect(330, 390, 111, 31));
        pushButton_submit_search->setFont(font1);
        pushButton_submit_search->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_submit_search->setFlat(true);
        pushButton_lifetime = new QPushButton(AdminMenu);
        pushButton_lifetime->setObjectName(QString::fromUtf8("pushButton_lifetime"));
        pushButton_lifetime->setGeometry(QRect(580, 140, 151, 31));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(12);
        sizePolicy.setHeightForWidth(pushButton_lifetime->sizePolicy().hasHeightForWidth());
        pushButton_lifetime->setSizePolicy(sizePolicy);
        pushButton_lifetime->setFont(font1);
        pushButton_lifetime->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_lifetime->setFlat(true);
        pushButton_change_user = new QPushButton(AdminMenu);
        pushButton_change_user->setObjectName(QString::fromUtf8("pushButton_change_user"));
        pushButton_change_user->setGeometry(QRect(60, 130, 161, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ageo")});
        font2.setPointSize(13);
        pushButton_change_user->setFont(font2);
        pushButton_change_user->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_change_user->setFlat(true);
        pushButton_change_pass = new QPushButton(AdminMenu);
        pushButton_change_pass->setObjectName(QString::fromUtf8("pushButton_change_pass"));
        pushButton_change_pass->setGeometry(QRect(328, 140, 151, 31));
        sizePolicy.setHeightForWidth(pushButton_change_pass->sizePolicy().hasHeightForWidth());
        pushButton_change_pass->setSizePolicy(sizePolicy);
        pushButton_change_pass->setFont(font2);
        pushButton_change_pass->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_change_pass->setFlat(true);
        pushButton_add = new QPushButton(AdminMenu);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(570, 300, 171, 41));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setFont(font2);
        pushButton_add->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_add->setFlat(true);
        pushButton_search = new QPushButton(AdminMenu);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));
        pushButton_search->setGeometry(QRect(318, 300, 161, 41));
        sizePolicy.setHeightForWidth(pushButton_search->sizePolicy().hasHeightForWidth());
        pushButton_search->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ageo")});
        font3.setPointSize(14);
        pushButton_search->setFont(font3);
        pushButton_search->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_search->setFlat(true);
        pushButton_delete = new QPushButton(AdminMenu);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(58, 300, 161, 41));
        pushButton_delete->setFont(font3);
        pushButton_delete->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton_delete->setFlat(true);

        retranslateUi(AdminMenu);
        QObject::connect(pushButton_user_submit, &QPushButton::clicked, AdminMenu, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_pass_submit, &QPushButton::clicked, AdminMenu, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(AdminMenu);
    } // setupUi

    void retranslateUi(QDialog *AdminMenu)
    {
        AdminMenu->setWindowTitle(QCoreApplication::translate("AdminMenu", "Dialog", nullptr));
        label_2->setText(QString());
        pushButton_user_submit->setText(QCoreApplication::translate("AdminMenu", "Submit", nullptr));
        pushButton_pass_submit->setText(QCoreApplication::translate("AdminMenu", "Submit", nullptr));
        pushButton_submit_delete->setText(QCoreApplication::translate("AdminMenu", "Submit", nullptr));
        pushButton_submit_search->setText(QCoreApplication::translate("AdminMenu", "Submit", nullptr));
        pushButton_lifetime->setText(QCoreApplication::translate("AdminMenu", "List of Lifetime Users", nullptr));
        pushButton_change_user->setText(QCoreApplication::translate("AdminMenu", "Change Username", nullptr));
        pushButton_change_pass->setText(QCoreApplication::translate("AdminMenu", "Change Password", nullptr));
        pushButton_add->setText(QCoreApplication::translate("AdminMenu", "Add More Fortunes", nullptr));
        pushButton_search->setText(QCoreApplication::translate("AdminMenu", "Search User", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("AdminMenu", "Delete User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminMenu: public Ui_AdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
