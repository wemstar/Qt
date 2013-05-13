/****************************************************************************
** Meta object code from reading C++ file 'sredniawidget.h'
**
** Created: Mon Mar 25 19:54:58 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Lab03_1/sredniawidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sredniawidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SredniaWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   15,   14,   14, 0x08,
      56,   15,   14,   14, 0x08,
      88,   15,   14,   14, 0x08,
     123,   15,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SredniaWidget[] = {
    "SredniaWidget\0\0position\0"
    "on_valueDialA_valueChanged(int)\0"
    "on_valueDialB_valueChanged(int)\0"
    "on_weightSliderA_valueChanged(int)\0"
    "on_weightSliderB_valueChanged(int)\0"
};

void SredniaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SredniaWidget *_t = static_cast<SredniaWidget *>(_o);
        switch (_id) {
        case 0: _t->on_valueDialA_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_valueDialB_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_weightSliderA_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_weightSliderB_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SredniaWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SredniaWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SredniaWidget,
      qt_meta_data_SredniaWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SredniaWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SredniaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SredniaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SredniaWidget))
        return static_cast<void*>(const_cast< SredniaWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SredniaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
