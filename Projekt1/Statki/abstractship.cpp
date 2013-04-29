#include "abstractship.h"

AbstractShip::AbstractShip(QPoint poz,AbstractShip::direction dir,QObject* parent):QObject(parent)
{
    pozycja=poz;
    kierunek=dir;
}

bool AbstractShip::isValid(const AbstractShip &a, const AbstractShip &b)
{
    if(a.pozycja==b.pozycja) return false;

}

