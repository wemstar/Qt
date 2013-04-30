#ifndef TROJMASZTOWIEC_H
#define TROJMASZTOWIEC_H
#include "abstractship.h"

class TrojMasztowiec : public AbstractShip
{
    Q_OBJECT
public:
    explicit TrojMasztowiec(QPoint poz,direction dir,QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // TROJMASZTOWIEC_H
