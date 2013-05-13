/****************************************************************************
** Meta object code from reading C++ file 'dwumasztowiec.h'
**
** Created: Mon May 13 14:14:32 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Projekt1/Statki/dwumasztowiec.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dwumasztowiec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DwuMasztowiec[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_DwuMasztowiec[] = {
    "DwuMasztowiec\0"
};

void DwuMasztowiec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DwuMasztowiec::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DwuMasztowiec::staticMetaObject = {
    { &AbstractShip::staticMetaObject, qt_meta_stringdata_DwuMasztowiec,
      qt_meta_data_DwuMasztowiec, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DwuMasztowiec::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DwuMasztowiec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DwuMasztowiec::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DwuMasztowiec))
        return static_cast<void*>(const_cast< DwuMasztowiec*>(this));
    return AbstractShip::qt_metacast(_clname);
}

int DwuMasztowiec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractShip::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
