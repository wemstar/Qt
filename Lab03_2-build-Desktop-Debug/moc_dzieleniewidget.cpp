/****************************************************************************
** Meta object code from reading C++ file 'dzieleniewidget.h'
**
** Created: Mon Mar 25 20:49:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Lab03_2/dzieleniewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dzieleniewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DzielenieWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   17,   16,   16, 0x08,
      59,   17,   16,   16, 0x08,
      96,   17,   16,   16, 0x08,
     129,  123,   16,   16, 0x08,
     158,  123,   16,   16, 0x08,
     185,   17,   16,   16, 0x08,
     212,  123,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DzielenieWidget[] = {
    "DzielenieWidget\0\0arg1\0"
    "on_minimumValue_textChanged(QString)\0"
    "on_maximumValue_textChanged(QString)\0"
    "on_XSpin_valueChanged(int)\0value\0"
    "on_XSlider_valueChanged(int)\0"
    "on_XDial_valueChanged(int)\0"
    "on_YSpin_valueChanged(int)\0"
    "on_YDial_valueChanged(int)\0"
};

void DzielenieWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DzielenieWidget *_t = static_cast<DzielenieWidget *>(_o);
        switch (_id) {
        case 0: _t->on_minimumValue_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_maximumValue_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_XSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_XSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_XDial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_YSpin_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_YDial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DzielenieWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DzielenieWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DzielenieWidget,
      qt_meta_data_DzielenieWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DzielenieWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DzielenieWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DzielenieWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DzielenieWidget))
        return static_cast<void*>(const_cast< DzielenieWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int DzielenieWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
