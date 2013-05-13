/****************************************************************************
** Meta object code from reading C++ file 'puzzlesizewidget.h'
**
** Created: Sun Apr 21 22:18:02 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Lab2_Qt/puzzlesizewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'puzzlesizewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PuzzleSizeWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      38,   17,   17,   17, 0x05,
      65,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      94,   90,   17,   17, 0x0a,

 // properties: name, type, flags
     116,  110, 0x15095003,

       0        // eod
};

static const char qt_meta_stringdata_PuzzleSizeWidget[] = {
    "PuzzleSizeWidget\0\0valueChanged(QSize)\0"
    "horizontalValueChange(int)\0"
    "verticalValueChange(int)\0val\0"
    "setValue(QSize)\0QSize\0m_size\0"
};

void PuzzleSizeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PuzzleSizeWidget *_t = static_cast<PuzzleSizeWidget *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 1: _t->horizontalValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->verticalValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setValue((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PuzzleSizeWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PuzzleSizeWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PuzzleSizeWidget,
      qt_meta_data_PuzzleSizeWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PuzzleSizeWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PuzzleSizeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PuzzleSizeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PuzzleSizeWidget))
        return static_cast<void*>(const_cast< PuzzleSizeWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int PuzzleSizeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = value(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< QSize*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
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
void PuzzleSizeWidget::valueChanged(const QSize & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PuzzleSizeWidget::horizontalValueChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PuzzleSizeWidget::verticalValueChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
