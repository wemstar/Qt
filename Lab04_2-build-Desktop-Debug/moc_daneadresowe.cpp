/****************************************************************************
** Meta object code from reading C++ file 'daneadresowe.h'
**
** Created: Thu Apr 11 18:33:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Lab04_2/daneadresowe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'daneadresowe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DaneAdresowe[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      40,   13,   13,   13, 0x08,
      69,   13,   13,   13, 0x08,
      94,   13,   13,   13, 0x08,
     120,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DaneAdresowe[] = {
    "DaneAdresowe\0\0on_actionSave_triggered()\0"
    "on_actionSave_as_triggered()\0"
    "on_actionNew_triggered()\0"
    "on_actionExit_triggered()\0"
    "on_actionOpen_triggered()\0"
};

void DaneAdresowe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DaneAdresowe *_t = static_cast<DaneAdresowe *>(_o);
        switch (_id) {
        case 0: _t->on_actionSave_triggered(); break;
        case 1: _t->on_actionSave_as_triggered(); break;
        case 2: _t->on_actionNew_triggered(); break;
        case 3: _t->on_actionExit_triggered(); break;
        case 4: _t->on_actionOpen_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DaneAdresowe::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DaneAdresowe::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DaneAdresowe,
      qt_meta_data_DaneAdresowe, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DaneAdresowe::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DaneAdresowe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DaneAdresowe::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DaneAdresowe))
        return static_cast<void*>(const_cast< DaneAdresowe*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DaneAdresowe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
