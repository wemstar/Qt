/****************************************************************************
** Meta object code from reading C++ file 'koleczka.h'
**
** Created: Sun May 5 23:22:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lab06_22/koleczka.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'koleczka.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Koleczka[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      27,    9,    9,    9, 0x0a,
      42,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Koleczka[] = {
    "Koleczka\0\0setColor(QColor)\0setRadius(int)\0"
    "wyczysc()\0"
};

void Koleczka::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Koleczka *_t = static_cast<Koleczka *>(_o);
        switch (_id) {
        case 0: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->setRadius((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->wyczysc(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Koleczka::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Koleczka::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Koleczka,
      qt_meta_data_Koleczka, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Koleczka::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Koleczka::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Koleczka::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Koleczka))
        return static_cast<void*>(const_cast< Koleczka*>(this));
    return QWidget::qt_metacast(_clname);
}

int Koleczka::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
