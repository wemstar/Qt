/****************************************************************************
** Meta object code from reading C++ file 'glowneokno.h'
**
** Created: Mon May 13 14:14:24 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Projekt1/glowneokno.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glowneokno.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlowneOkno[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   65,   11,   11, 0x08,
      97,   65,   11,   11, 0x08,
     137,  126,   11,   11, 0x08,
     176,  126,   11,   11, 0x08,
     216,   11,   11,   11, 0x08,
     246,   11,   11,   11, 0x08,
     288,   11,   11,   11, 0x08,
     323,   11,   11,   11, 0x08,
     360,   11,   11,   11, 0x08,
     397,   11,   11,   11, 0x08,
     413,   11,   11,   11, 0x08,
     430,   11,   11,   11, 0x08,
     447,   11,   11,   11, 0x08,
     477,   11,   11,   11, 0x08,
     509,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GlowneOkno[] = {
    "GlowneOkno\0\0,,\0"
    "wybierzStatek(QPoint,AbstractShip::direction,int)\0"
    ",\0secondPlayerMove(QPoint,bool)\0"
    "firstPlayerMove(QPoint,bool)\0punkty,pic\0"
    "firstPlayerDraw(QList<QPoint>,QPixmap)\0"
    "secondPlayerDraw(QList<QPoint>,QPixmap)\0"
    "on_actionNew_Game_triggered()\0"
    "on_actionDodaj_Jednomasztowca_triggered()\0"
    "on_actionAddTwo_funnel_triggered()\0"
    "on_actionAdd_Three_funne_triggered()\0"
    "on_actionAdd_Four_funnel_triggered()\0"
    "rozpocznijGre()\0przegralGracz2()\0"
    "przegralGracz1()\0on_actionAbout_QT_triggered()\0"
    "on_actionAbout_Game_triggered()\0"
    "on_actionExit_triggered()\0"
};

void GlowneOkno::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlowneOkno *_t = static_cast<GlowneOkno *>(_o);
        switch (_id) {
        case 0: _t->wybierzStatek((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< AbstractShip::direction(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->secondPlayerMove((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->firstPlayerMove((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->firstPlayerDraw((*reinterpret_cast< QList<QPoint>(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2]))); break;
        case 4: _t->secondPlayerDraw((*reinterpret_cast< QList<QPoint>(*)>(_a[1])),(*reinterpret_cast< QPixmap(*)>(_a[2]))); break;
        case 5: _t->on_actionNew_Game_triggered(); break;
        case 6: _t->on_actionDodaj_Jednomasztowca_triggered(); break;
        case 7: _t->on_actionAddTwo_funnel_triggered(); break;
        case 8: _t->on_actionAdd_Three_funne_triggered(); break;
        case 9: _t->on_actionAdd_Four_funnel_triggered(); break;
        case 10: _t->rozpocznijGre(); break;
        case 11: _t->przegralGracz2(); break;
        case 12: _t->przegralGracz1(); break;
        case 13: _t->on_actionAbout_QT_triggered(); break;
        case 14: _t->on_actionAbout_Game_triggered(); break;
        case 15: _t->on_actionExit_triggered(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlowneOkno::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlowneOkno::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GlowneOkno,
      qt_meta_data_GlowneOkno, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlowneOkno::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlowneOkno::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlowneOkno::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlowneOkno))
        return static_cast<void*>(const_cast< GlowneOkno*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GlowneOkno::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void GlowneOkno::wybierzStatek(QPoint _t1, AbstractShip::direction _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
