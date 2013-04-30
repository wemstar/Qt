#include "trojmasztowiec.h"

TrojMasztowiec::TrojMasztowiec(QPoint poz,direction dir,QObject *parent) :
    AbstractShip(poz,dir,parent)
{
    obrazek.load(":/new/statki/trzy");
}
