#ifndef JEDNOMASZTOWIEC_H
#define JEDNOMASZTOWIEC_H

#include <QObject>
#include <QtCore>

#include "abstractship.h"

class JednoMasztowiec : public AbstractShip
{
    Q_OBJECT
public:
    explicit JednoMasztowiec(QPoint poz,direction dir,QObject *parent = 0);

    
signals:
    
public slots:
    
};

#endif // JEDNOMASZTOWIEC_H
