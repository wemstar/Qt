#ifndef CZTEROMASZTOWIEC_H
#define CZTEROMASZTOWIEC_H
#include "abstractship.h"

class CzteroMasztowiec : public AbstractShip
{
    Q_OBJECT
public:
    explicit CzteroMasztowiec(QPoint poz,direction dir,QObject *parent = 0);

    
signals:
    
public slots:
    
};

#endif // CZTEROMASZTOWIEC_H
