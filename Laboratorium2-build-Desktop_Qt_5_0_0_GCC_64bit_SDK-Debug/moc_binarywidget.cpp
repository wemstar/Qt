/****************************************************************************
** Meta object code from reading C++ file 'binarywidget.h'
**
** Created: Sat Mar 23 16:42:19 2013
**      by: The Qt Meta Object Compiler version 67 (Qt 5.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Laboratorium2/binarywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'binarywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BinaryWidget_t {
    QByteArrayData data[9];
    char stringdata[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_BinaryWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_BinaryWidget_t qt_meta_stringdata_BinaryWidget = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 27),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 4),
QT_MOC_LITERAL(4, 47, 27),
QT_MOC_LITERAL(5, 75, 27),
QT_MOC_LITERAL(6, 103, 27),
QT_MOC_LITERAL(7, 131, 22),
QT_MOC_LITERAL(8, 154, 21)
    },
    "BinaryWidget\0on_binarySpin1_valueChanged\0"
    "\0arg1\0on_binarySpin2_valueChanged\0"
    "on_binarySpin3_valueChanged\0"
    "on_binarySpin4_valueChanged\0"
    "on_dzielButton_clicked\0on_mnozButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BinaryWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08,
       4,    1,   47,    2, 0x08,
       5,    1,   50,    2, 0x08,
       6,    1,   53,    2, 0x08,
       7,    0,   56,    2, 0x08,
       8,    0,   57,    2, 0x08,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BinaryWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BinaryWidget *_t = static_cast<BinaryWidget *>(_o);
        switch (_id) {
        case 0: _t->on_binarySpin1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_binarySpin2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_binarySpin3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_binarySpin4_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_dzielButton_clicked(); break;
        case 5: _t->on_mnozButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject BinaryWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BinaryWidget.data,
      qt_meta_data_BinaryWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *BinaryWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BinaryWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BinaryWidget.stringdata))
        return static_cast<void*>(const_cast< BinaryWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int BinaryWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
