#include "czteromasztowiec.h"

CzteroMasztowiec::CzteroMasztowiec(QPoint poz,direction dir,QObject *parent) :
    AbstractShip(poz,dir,4,parent)
{
    obrazek.load(":/new/statki/cztery");
}


