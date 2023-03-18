/****************************************************************************
** Meta object code from reading C++ file 'SimonMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Simon/SimonMainWindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimonMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_SimonMainWindow_t {
    uint offsetsAndSizes[14];
    char stringdata0[16];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[20];
    char stringdata5[18];
    char stringdata6[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SimonMainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SimonMainWindow_t qt_meta_stringdata_SimonMainWindow = {
    {
        QT_MOC_LITERAL(0, 15),  // "SimonMainWindow"
        QT_MOC_LITERAL(16, 18),  // "greenButtonClicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 16),  // "redButtonClicked"
        QT_MOC_LITERAL(53, 19),  // "yellowButtonClicked"
        QT_MOC_LITERAL(73, 17),  // "blueButtonClicked"
        QT_MOC_LITERAL(91, 9)   // "startGame"
    },
    "SimonMainWindow",
    "greenButtonClicked",
    "",
    "redButtonClicked",
    "yellowButtonClicked",
    "blueButtonClicked",
    "startGame"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SimonMainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SimonMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SimonMainWindow.offsetsAndSizes,
    qt_meta_data_SimonMainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SimonMainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SimonMainWindow, std::true_type>,
        // method 'greenButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'yellowButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'blueButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SimonMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimonMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->greenButtonClicked(); break;
        case 1: _t->redButtonClicked(); break;
        case 2: _t->yellowButtonClicked(); break;
        case 3: _t->blueButtonClicked(); break;
        case 4: _t->startGame(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *SimonMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimonMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimonMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SimonMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
