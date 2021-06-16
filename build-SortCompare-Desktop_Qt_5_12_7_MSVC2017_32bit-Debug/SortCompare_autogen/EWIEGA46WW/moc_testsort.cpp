/****************************************************************************
** Meta object code from reading C++ file 'testsort.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SortCompare/testsort.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testsort.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestSort_t {
    QByteArrayData data[16];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestSort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestSort_t qt_meta_stringdata_TestSort = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TestSort"
QT_MOC_LITERAL(1, 9, 8), // "finished"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 16), // "enableButtonRes1"
QT_MOC_LITERAL(4, 36, 16), // "enableButtonRes2"
QT_MOC_LITERAL(5, 53, 15), // "enableRunButton"
QT_MOC_LITERAL(6, 69, 11), // "dataChanged"
QT_MOC_LITERAL(7, 81, 7), // "Sorting"
QT_MOC_LITERAL(8, 89, 4), // "data"
QT_MOC_LITERAL(9, 94, 10), // "timeCount1"
QT_MOC_LITERAL(10, 105, 10), // "timeCount2"
QT_MOC_LITERAL(11, 116, 3), // "run"
QT_MOC_LITERAL(12, 120, 7), // "setData"
QT_MOC_LITERAL(13, 128, 10), // "setVariant"
QT_MOC_LITERAL(14, 139, 1), // "i"
QT_MOC_LITERAL(15, 141, 8) // "setIndex"

    },
    "TestSort\0finished\0\0enableButtonRes1\0"
    "enableButtonRes2\0enableRunButton\0"
    "dataChanged\0Sorting\0data\0timeCount1\0"
    "timeCount2\0run\0setData\0setVariant\0i\0"
    "setIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestSort[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,
      10,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   78,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      15,    1,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,

 // properties: name, type, flags
       8, 0x80000000 | 7, 0x0049510b,

 // properties: notify_signal_id
       4,

       0        // eod
};

void TestSort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestSort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->enableButtonRes1(); break;
        case 2: _t->enableButtonRes2(); break;
        case 3: _t->enableRunButton(); break;
        case 4: _t->dataChanged((*reinterpret_cast< Sorting(*)>(_a[1]))); break;
        case 5: _t->timeCount1(); break;
        case 6: _t->timeCount2(); break;
        case 7: _t->run(); break;
        case 8: _t->setData((*reinterpret_cast< Sorting(*)>(_a[1]))); break;
        case 9: _t->setVariant((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TestSort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestSort::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TestSort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestSort::enableButtonRes1)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TestSort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestSort::enableButtonRes2)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TestSort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestSort::enableRunButton)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TestSort::*)(Sorting );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestSort::dataChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TestSort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestSort::timeCount1)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TestSort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TestSort::timeCount2)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TestSort *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Sorting*>(_v) = _t->data(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TestSort *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setData(*reinterpret_cast< Sorting*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TestSort::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TestSort.data,
    qt_meta_data_TestSort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestSort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestSort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestSort.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestSort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TestSort::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TestSort::enableButtonRes1()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TestSort::enableButtonRes2()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TestSort::enableRunButton()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TestSort::dataChanged(Sorting _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TestSort::timeCount1()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void TestSort::timeCount2()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
