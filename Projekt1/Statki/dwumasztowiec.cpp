#include "dwumasztowiec.h"

DwuMasztowiec::DwuMasztowiec(QPoint poz,direction dir,QObject *parent) :
    AbstractShip(poz,dir,2,parent)
{
    obrazek.load(":/new/statki/dwa");
}
