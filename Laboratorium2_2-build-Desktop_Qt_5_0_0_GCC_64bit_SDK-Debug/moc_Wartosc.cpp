/****************************************************************************
** Meta object code from reading C++ file 'Wartosc.h'
**
** Created: Sat Mar 23 18:41:28 2013
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Laboratorium2_2/Wartosc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Wartosc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Wartosc_t {
    QByteArrayData data[6];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Wartosc_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Wartosc_t qt_meta_stringdata_Wartosc = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 6),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 28),
QT_MOC_LITERAL(4, 45, 8),
QT_MOC_LITERAL(5, 54, 30)
    },
    "Wartosc\0zmiana\0\0on_calkowiteDial_sliderMoved\0"
    "position\0on_rzeczywisteDial_sliderMoved\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Wartosc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    1,   32,    2, 0x08,
       5,    1,   35,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void Wartosc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Wartosc *_t = static_cast<Wartosc *>(_o);
        switch (_id) {
        case 0: _t->zmiana((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->on_calkowiteDial_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_rzeczywisteDial_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Wartosc::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wartosc::zmiana)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Wartosc::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Wartosc.data,
      qt_meta_data_Wartosc,  qt_static_metacall, 0, 0}
};


const QMetaObject *Wartosc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Wartosc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Wartosc.stringdata))
        return static_cast<void*>(const_cast< Wartosc*>(this));
    return QWidget::qt_metacast(_clname);
}

int Wartosc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Wartosc::zmiana(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
