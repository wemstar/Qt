#include "trojmasztowiec.h"

TrojMasztowiec::TrojMasztowiec(QPoint poz,direction dir,QObject *parent) :
    AbstractShip(poz,dir,3,parent)
{
    obrazek.load(":/new/statki/trzy");
}
