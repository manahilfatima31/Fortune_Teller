/****************************************************************************
** Meta object code from reading C++ file 'adminmenu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Qt_Fortune_Teller/adminmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminMenu_t {
    const uint offsetsAndSize[24];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_AdminMenu_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_AdminMenu_t qt_meta_stringdata_AdminMenu = {
    {
QT_MOC_LITERAL(0, 9), // "AdminMenu"
QT_MOC_LITERAL(10, 33), // "on_pushButton_change_user_cli..."
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 33), // "on_pushButton_change_pass_cli..."
QT_MOC_LITERAL(79, 33), // "on_pushButton_user_submit_cli..."
QT_MOC_LITERAL(113, 33), // "on_pushButton_pass_submit_cli..."
QT_MOC_LITERAL(147, 30), // "on_pushButton_lifetime_clicked"
QT_MOC_LITERAL(178, 28), // "on_pushButton_delete_clicked"
QT_MOC_LITERAL(207, 35), // "on_pushButton_submit_delete_c..."
QT_MOC_LITERAL(243, 28), // "on_pushButton_search_clicked"
QT_MOC_LITERAL(272, 35), // "on_pushButton_submit_search_c..."
QT_MOC_LITERAL(308, 25) // "on_pushButton_add_clicked"

    },
    "AdminMenu\0on_pushButton_change_user_clicked\0"
    "\0on_pushButton_change_pass_clicked\0"
    "on_pushButton_user_submit_clicked\0"
    "on_pushButton_pass_submit_clicked\0"
    "on_pushButton_lifetime_clicked\0"
    "on_pushButton_delete_clicked\0"
    "on_pushButton_submit_delete_clicked\0"
    "on_pushButton_search_clicked\0"
    "on_pushButton_submit_search_clicked\0"
    "on_pushButton_add_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminMenu[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    0 /* Private */,
       3,    0,   75,    2, 0x08,    1 /* Private */,
       4,    0,   76,    2, 0x08,    2 /* Private */,
       5,    0,   77,    2, 0x08,    3 /* Private */,
       6,    0,   78,    2, 0x08,    4 /* Private */,
       7,    0,   79,    2, 0x08,    5 /* Private */,
       8,    0,   80,    2, 0x08,    6 /* Private */,
       9,    0,   81,    2, 0x08,    7 /* Private */,
      10,    0,   82,    2, 0x08,    8 /* Private */,
      11,    0,   83,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_change_user_clicked(); break;
        case 1: _t->on_pushButton_change_pass_clicked(); break;
        case 2: _t->on_pushButton_user_submit_clicked(); break;
        case 3: _t->on_pushButton_pass_submit_clicked(); break;
        case 4: _t->on_pushButton_lifetime_clicked(); break;
        case 5: _t->on_pushButton_delete_clicked(); break;
        case 6: _t->on_pushButton_submit_delete_clicked(); break;
        case 7: _t->on_pushButton_search_clicked(); break;
        case 8: _t->on_pushButton_submit_search_clicked(); break;
        case 9: _t->on_pushButton_add_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject AdminMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AdminMenu.offsetsAndSize,
    qt_meta_data_AdminMenu,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_AdminMenu_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *AdminMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminMenu.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
