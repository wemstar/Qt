#include "abstractship.h"
#include <iostream>

AbstractShip::AbstractShip(QPoint poz,AbstractShip::direction dir,int il,QObject* parent):QObject(parent)
{

    ilosc_pol=il;
    setPosition(poz,dir);



}

bool AbstractShip::isBouncing(const AbstractShip &a, const AbstractShip &b)
{
    foreach(QPoint pkt1,a.pozycja.keys())
    {
        foreach(QPoint pkt2,b.pozycja.keys())
        {
            if(distance(pkt1,pkt2)<2)return true;
        }
    }
    return false;

}


bool AbstractShip::isHit(QPoint pkt)
{

    foreach(QPoint punkt,pozycja.keys())
    {
        if(punkt==pkt)
        {
            pozycja.insert(pkt,false);
            return true;
        }
    }
    if(pozycja.keys(true).isEmpty())emit zatonol(pozycja.keys(),obrazek);

    return false;


}
bool AbstractShip::isValid()
{
    foreach(QPoint pkt,pozycja.keys())
    {
        if((pkt.x()>9)||(pkt.y()>9)||(pkt.x()<0)||(pkt.y()<0))
        {
//            std::cerr<<pkt.x()<<" "<<pkt.y()<<std::endl;
            return false;
        }

    }
    return true;
}

QList<QPoint> AbstractShip::kordy()
{
    return pozycja.keys();
}

QPixmap AbstractShip::obraz()
{
    return obrazek;
}

bool AbstractShip::zniszczony()
{
    if(pozycja.keys(true).isEmpty())return true;
    return false;
}

void AbstractShip::setPosition(QPoint poz, AbstractShip::direction dir)
{

    pozycja.clear();
    int dx=0,dy=0;
    if(dir==AbstractShip::RIGHT)dx=1;
    else dy=1;
    for(int i=0;i<ilosc_pol;++i)
    {
        pozycja.insert(QPoint(poz.x()+dx*i,poz.y()+dy*i),true);

    }


}

