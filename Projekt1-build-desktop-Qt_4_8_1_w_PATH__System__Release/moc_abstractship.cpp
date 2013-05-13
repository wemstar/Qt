/****************************************************************************
** Meta object code from reading C++ file 'abstractship.h'
**
** Created: Mon May 13 14:14:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Projekt1/Statki/abstractship.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractship.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractShip[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   47,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AbstractShip[] = {
    "AbstractShip\0\0,\0zatonol(QList<QPoint>,QPixmap)\0"
    "poz,dir\0setPosition(QPoint,direction)\0"
};

void AbstractShip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbstractShip *_t = static_cast<AbstractShip *>(_o);
        switch (_id) {
        case 0: _t->zatonol((*reinterpret_cast< QList<QPoint>(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2]))); break;
        case 1: _t->setPosition((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< direction(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AbstractShip::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbstractShip::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractShip,
      qt_meta_data_AbstractShip, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractShip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractShip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractShip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractShip))
        return static_cast<void*>(const_cast< AbstractShip*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractShip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AbstractShip::zatonol(QList<QPoint> _t1, QPixmap _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
