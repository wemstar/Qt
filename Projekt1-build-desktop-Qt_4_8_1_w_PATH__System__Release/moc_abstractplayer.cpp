/****************************************************************************
** Meta object code from reading C++ file 'abstractplayer.h'
**
** Created: Mon May 13 14:14:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Projekt1/Gracz/abstractplayer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractPlayer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      33,   31,   15,   15, 0x05,
      56,   31,   15,   15, 0x05,
      93,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   15,   15,   15, 0x0a,
     123,   15,   15,   15, 0x0a,
     150,  143,   15,   15, 0x0a,
     169,   15,   15,   15, 0x0a,
     183,   15,   15,   15, 0x0a,
     204,  201,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AbstractPlayer[] = {
    "AbstractPlayer\0\0strzel(QPoint)\0,\0"
    "trafienie(QPoint,bool)\0"
    "narysujStatek(QList<QPoint>,QPixmap)\0"
    "przegrana()\0uderzenie(QPoint)\0"
    "wykonajRuch(QPoint)\0x,traf\0"
    "isHit(QPoint,bool)\0losujStatki()\0"
    "zniczenieStatku()\0,,\0"
    "ustawStatek(QPoint,AbstractShip::direction,int)\0"
};

void AbstractPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbstractPlayer *_t = static_cast<AbstractPlayer *>(_o);
        switch (_id) {
        case 0: _t->strzel((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->trafienie((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->narysujStatek((*reinterpret_cast< QList<QPoint>(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2]))); break;
        case 3: _t->przegrana(); break;
        case 4: _t->uderzenie((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 5: _t->wykonajRuch((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->isHit((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->losujStatki(); break;
        case 8: _t->zniczenieStatku(); break;
        case 9: _t->ustawStatek((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< AbstractShip::direction(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AbstractPlayer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbstractPlayer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractPlayer,
      qt_meta_data_AbstractPlayer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractPlayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractPlayer))
        return static_cast<void*>(const_cast< AbstractPlayer*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AbstractPlayer::strzel(QPoint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AbstractPlayer::trafienie(QPoint _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractPlayer::narysujStatek(QList<QPoint> _t1, QPixmap _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AbstractPlayer::przegrana()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
