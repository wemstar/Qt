/****************************************************************************
** Meta object code from reading C++ file 'gra.h'
**
** Created: Mon May 13 14:14:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Projekt1/gra.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gra.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gra[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x05,
      26,   24,    4,    4, 0x05,
      51,   24,    4,    4, 0x05,
      72,   24,    4,    4, 0x05,
     105,   24,    4,    4, 0x05,
     142,    4,    4,    4, 0x05,
     161,  158,    4,    4, 0x05,
     209,    4,    4,    4, 0x05,
     225,    4,    4,    4, 0x05,
     244,    4,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
     267,  263,    4,    4, 0x0a,
     287,    4,    4,    4, 0x0a,
     297,    4,    4,    4, 0x0a,
     312,    4,    4,    4, 0x0a,
     331,    4,    4,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Gra[] = {
    "Gra\0\0realStrzal(QPoint)\0,\0"
    "abstractHit(QPoint,bool)\0realHit(QPoint,bool)\0"
    "realRysuj(QList<QPoint>,QPixmap)\0"
    "abstractRysuj(QList<QPoint>,QPixmap)\0"
    "planszaGotowa()\0,,\0"
    "ustawStatek(QPoint,AbstractShip::direction,int)\0"
    "rozpocznijGre()\0przegranaGracza1()\0"
    "przegranaGracza2()\0x,y\0wybierzCel(int,int)\0"
    "nowaGra()\0polaczGraczy()\0koniecWybierania()\0"
    "odliczanie()\0"
};

void Gra::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Gra *_t = static_cast<Gra *>(_o);
        switch (_id) {
        case 0: _t->realStrzal((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->abstractHit((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->realHit((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->realRysuj((*reinterpret_cast< QList<QPoint>(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2]))); break;
        case 4: _t->abstractRysuj((*reinterpret_cast< QList<QPoint>(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2]))); break;
        case 5: _t->planszaGotowa(); break;
        case 6: _t->ustawStatek((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< AbstractShip::direction(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->rozpocznijGre(); break;
        case 8: _t->przegranaGracza1(); break;
        case 9: _t->przegranaGracza2(); break;
        case 10: _t->wybierzCel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->nowaGra(); break;
        case 12: _t->polaczGraczy(); break;
        case 13: _t->koniecWybierania(); break;
        case 14: _t->odliczanie(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gra::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gra::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Gra,
      qt_meta_data_Gra, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gra::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gra::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gra::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gra))
        return static_cast<void*>(const_cast< Gra*>(this));
    return QObject::qt_metacast(_clname);
}

int Gra::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Gra::realStrzal(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gra::abstractHit(QPoint _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gra::realHit(QPoint _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Gra::realRysuj(QList<QPoint> _t1, QPixmap _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Gra::abstractRysuj(QList<QPoint> _t1, QPixmap _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Gra::planszaGotowa()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Gra::ustawStatek(QPoint _t1, AbstractShip::direction _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Gra::rozpocznijGre()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void Gra::przegranaGracza1()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void Gra::przegranaGracza2()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}
QT_END_MOC_NAMESPACE
