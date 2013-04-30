#ifndef DWUMASZTOWIEC_H
#define DWUMASZTOWIEC_H
#include "abstractship.h"

class DwuMasztowiec : public AbstractShip
{
    Q_OBJECT
public:
    explicit DwuMasztowiec(QPoint poz,direction dir,QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // DWUMASZTOWIEC_H
