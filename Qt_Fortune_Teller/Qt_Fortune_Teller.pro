QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addfortune.cpp \
    adminmenu.cpp \
    askquestion.cpp \
    login.cpp \
    lovecomp.cpp \
    lovemeter.cpp \
    main.cpp \
    mainwindow.cpp \
    menuscreen.cpp \
    signup.cpp

HEADERS += \
    ../Fortune Teller Project/Fortune Teller/Fortune Teller/UserLogin.h \
    ../Fortune Teller Project/Fortune Teller/Fortune Teller/UserLogin.h \
    Signs.h \
    UserLogin.h \
    addfortune.h \
    adminmenu.h \
    askquestion.h \
    login.h \
    lovecomp.h \
    lovemeter.h \
    mainwindow.h \
    menuscreen.h \
    signup.h

FORMS += \
    addfortune.ui \
    adminmenu.ui \
    askquestion.ui \
    login.ui \
    lovecomp.ui \
    lovemeter.ui \
    mainwindow.ui \
    menuscreen.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
