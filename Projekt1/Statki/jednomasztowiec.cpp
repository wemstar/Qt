#include "jednomasztowiec.h"

JednoMasztowiec::JednoMasztowiec(QPoint poz,direction dir,QObject *parent) :
    AbstractShip(poz,dir,parent)
{
    obrazek.load(":/new/statki/jeden");
}

bool JednoMasztowiec::isHit(QPoint pkt)
{
    if(pkt==pozycja)return true;
    else return false;
}

