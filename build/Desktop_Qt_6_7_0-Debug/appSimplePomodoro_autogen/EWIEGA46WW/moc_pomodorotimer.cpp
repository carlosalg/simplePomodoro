/****************************************************************************
** Meta object code from reading C++ file 'pomodorotimer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../pomodorotimer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pomodorotimer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPomodoroTimerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSPomodoroTimerENDCLASS = QtMocHelpers::stringData(
    "PomodoroTimer",
    "QML.Element",
    "auto",
    "timeUpdate",
    "",
    "playChanged",
    "minutesChanged",
    "secondsChanged",
    "cycleChanged",
    "leftTime",
    "startNewCycles",
    "start",
    "stop",
    "playPause",
    "minutes",
    "seconds",
    "cycle"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPomodoroTimerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       9,   16, // methods
       4,   83, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   70,    4, 0x06,    5 /* Public */,
       5,    0,   71,    4, 0x06,    6 /* Public */,
       6,    1,   72,    4, 0x06,    7 /* Public */,
       7,    1,   75,    4, 0x06,    9 /* Public */,
       8,    0,   78,    4, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   79,    4, 0x0a,   12 /* Public */,
      10,    0,   80,    4, 0x0a,   13 /* Public */,
      11,    0,   81,    4, 0x0a,   14 /* Public */,
      12,    0,   82,    4, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,    4,
    QMetaType::Int, QMetaType::Int,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00015801, uint(1), 0,
      14, QMetaType::Int, 0x00015801, uint(0), 0,
      15, QMetaType::Int, 0x00015801, uint(0), 0,
      16, QMetaType::Int, 0x00015801, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject PomodoroTimer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPomodoroTimerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPomodoroTimerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'playPause'
        bool,
        // property 'minutes'
        int,
        // property 'seconds'
        int,
        // property 'cycle'
        int,
        // Q_OBJECT / Q_GADGET
        PomodoroTimer,
        // method 'timeUpdate'
        void,
        // method 'playChanged'
        void,
        // method 'minutesChanged'
        int,
        int,
        // method 'secondsChanged'
        int,
        int,
        // method 'cycleChanged'
        void,
        // method 'leftTime'
        void,
        // method 'startNewCycles'
        void,
        // method 'start'
        void,
        // method 'stop'
        void
    >,
    nullptr
} };

void PomodoroTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PomodoroTimer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeUpdate(); break;
        case 1: _t->playChanged(); break;
        case 2: { int _r = _t->minutesChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->secondsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->cycleChanged(); break;
        case 5: _t->leftTime(); break;
        case 6: _t->startNewCycles(); break;
        case 7: _t->start(); break;
        case 8: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PomodoroTimer::*)();
            if (_t _q_method = &PomodoroTimer::timeUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PomodoroTimer::*)();
            if (_t _q_method = &PomodoroTimer::playChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = int (PomodoroTimer::*)(int );
            if (_t _q_method = &PomodoroTimer::minutesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = int (PomodoroTimer::*)(int );
            if (_t _q_method = &PomodoroTimer::secondsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PomodoroTimer::*)();
            if (_t _q_method = &PomodoroTimer::cycleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PomodoroTimer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->play(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->minutes(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->seconds(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->cycle(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *PomodoroTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PomodoroTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPomodoroTimerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PomodoroTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PomodoroTimer::timeUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PomodoroTimer::playChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
int PomodoroTimer::minutesChanged(int _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
int PomodoroTimer::secondsChanged(int _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
void PomodoroTimer::cycleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
