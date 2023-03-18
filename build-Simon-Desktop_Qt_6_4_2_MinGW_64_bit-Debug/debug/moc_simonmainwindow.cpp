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
    uint offsetsAndSizes[20];
    char stringdata0[16];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[19];
    char stringdata5[17];
    char stringdata6[20];
    char stringdata7[18];
    char stringdata8[10];
    char stringdata9[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SimonMainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SimonMainWindow_t qt_meta_stringdata_SimonMainWindow = {
    {
        QT_MOC_LITERAL(0, 15),  // "SimonMainWindow"
        QT_MOC_LITERAL(16, 8),  // "userTurn"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 10),  // "getPattern"
        QT_MOC_LITERAL(37, 18),  // "greenButtonClicked"
        QT_MOC_LITERAL(56, 16),  // "redButtonClicked"
        QT_MOC_LITERAL(73, 19),  // "yellowButtonClicked"
        QT_MOC_LITERAL(93, 17),  // "blueButtonClicked"
        QT_MOC_LITERAL(111, 9),  // "startGame"
        QT_MOC_LITERAL(121, 6)   // "repeat"
    },
    "SimonMainWindow",
    "userTurn",
    "",
    "getPattern",
    "greenButtonClicked",
    "redButtonClicked",
    "yellowButtonClicked",
    "blueButtonClicked",
    "startGame",
    "repeat"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SimonMainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
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
        // method 'userTurn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getPattern'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'greenButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'yellowButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'blueButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'repeat'
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
        case 0: _t->userTurn(); break;
        case 1: _t->getPattern(); break;
        case 2: _t->greenButtonClicked(); break;
        case 3: _t->redButtonClicked(); break;
        case 4: _t->yellowButtonClicked(); break;
        case 5: _t->blueButtonClicked(); break;
        case 6: _t->startGame(); break;
        case 7: _t->repeat(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimonMainWindow::*)();
            if (_t _q_method = &SimonMainWindow::userTurn; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SimonMainWindow::*)();
            if (_t _q_method = &SimonMainWindow::getPattern; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SimonMainWindow::userTurn()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SimonMainWindow::getPattern()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
