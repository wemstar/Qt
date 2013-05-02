#include "jednomasztowiec.h"

JednoMasztowiec::JednoMasztowiec(QPoint poz,direction dir,QObject *parent) :
    AbstractShip(poz,dir,1,parent)
{
    obrazek.load(":/new/statki/jeden");
}



