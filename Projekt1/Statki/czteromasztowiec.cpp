#include "czteromasztowiec.h"

CzteroMasztowiec::CzteroMasztowiec(QPoint poz,direction dir,QObject *parent) :
    AbstractShip(poz,dir,parent)
{
    obrazek.load(":/new/statki/cztery");
}

bool CzteroMasztowiec::isHit(QPoint pkt)
{
    int dx=0,dy=0;

    switch (kierunek)
    {
        case AbstractShip::LEFT:
            dx=-1;
            break;
        case AbstractShip::RIGHT:
            dx=1;
            break;
        case AbstractShip::UP:
            dy=-1;
            break;
        case AbstractShip::DOWN:
            dy=1;
            break;
    }

}
