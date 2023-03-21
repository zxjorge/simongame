/****************************************************************************
** Meta object code from reading C++ file 'SimonModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Simon/SimonModel.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SimonModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SimonModel_t {
    uint offsetsAndSizes[36];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[6];
    char stringdata6[15];
    char stringdata7[9];
    char stringdata8[10];
    char stringdata9[8];
    char stringdata10[5];
    char stringdata11[11];
    char stringdata12[15];
    char stringdata13[8];
    char stringdata14[7];
    char stringdata15[5];
    char stringdata16[10];
    char stringdata17[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SimonModel_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SimonModel_t qt_meta_stringdata_SimonModel = {
    {
        QT_MOC_LITERAL(0, 10),  // "SimonModel"
        QT_MOC_LITERAL(11, 13),  // "returnPattern"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 11),  // "vector<int>"
        QT_MOC_LITERAL(38, 7),  // "pattern"
        QT_MOC_LITERAL(46, 5),  // "level"
        QT_MOC_LITERAL(52, 14),  // "updateProgress"
        QT_MOC_LITERAL(67, 8),  // "progress"
        QT_MOC_LITERAL(76, 9),  // "startGame"
        QT_MOC_LITERAL(86, 7),  // "endGame"
        QT_MOC_LITERAL(94, 4),  // "wait"
        QT_MOC_LITERAL(99, 10),  // "reduceLife"
        QT_MOC_LITERAL(110, 14),  // "disconnectTime"
        QT_MOC_LITERAL(125, 7),  // "newGame"
        QT_MOC_LITERAL(133, 6),  // "verify"
        QT_MOC_LITERAL(140, 4),  // "move"
        QT_MOC_LITERAL(145, 9),  // "gameReset"
        QT_MOC_LITERAL(155, 15)   // "timerReduceLife"
    },
    "SimonModel",
    "returnPattern",
    "",
    "vector<int>",
    "pattern",
    "level",
    "updateProgress",
    "progress",
    "startGame",
    "endGame",
    "wait",
    "reduceLife",
    "disconnectTime",
    "newGame",
    "verify",
    "move",
    "gameReset",
    "timerReduceLife"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SimonModel[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   80,    2, 0x06,    1 /* Public */,
       6,    1,   85,    2, 0x06,    4 /* Public */,
       8,    0,   88,    2, 0x06,    6 /* Public */,
       9,    0,   89,    2, 0x06,    7 /* Public */,
      10,    0,   90,    2, 0x06,    8 /* Public */,
      11,    0,   91,    2, 0x06,    9 /* Public */,
      12,    0,   92,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,   93,    2, 0x0a,   11 /* Public */,
      14,    1,   94,    2, 0x0a,   12 /* Public */,
      16,    0,   97,    2, 0x0a,   14 /* Public */,
      17,    0,   98,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject SimonModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SimonModel.offsetsAndSizes,
    qt_meta_data_SimonModel,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SimonModel_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SimonModel, std::true_type>,
        // method 'returnPattern'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<vector<int>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'startGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'endGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wait'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reduceLife'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnectTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'verify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'gameReset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timerReduceLife'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void SimonModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SimonModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->returnPattern((*reinterpret_cast< std::add_pointer_t<vector<int>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->updateProgress((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->startGame(); break;
        case 3: _t->endGame(); break;
        case 4: _t->wait(); break;
        case 5: _t->reduceLife(); break;
        case 6: _t->disconnectTime(); break;
        case 7: _t->newGame(); break;
        case 8: _t->verify((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->gameReset(); break;
        case 10: _t->timerReduceLife(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SimonModel::*)(vector<int> , int );
            if (_t _q_method = &SimonModel::returnPattern; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)(int );
            if (_t _q_method = &SimonModel::updateProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)();
            if (_t _q_method = &SimonModel::startGame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)();
            if (_t _q_method = &SimonModel::endGame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)();
            if (_t _q_method = &SimonModel::wait; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)();
            if (_t _q_method = &SimonModel::reduceLife; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SimonModel::*)();
            if (_t _q_method = &SimonModel::disconnectTime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *SimonModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimonModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SimonModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SimonModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SimonModel::returnPattern(vector<int> _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimonModel::updateProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SimonModel::startGame()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SimonModel::endGame()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SimonModel::wait()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SimonModel::reduceLife()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SimonModel::disconnectTime()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
