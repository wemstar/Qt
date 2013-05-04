#include "realplayer.h"
#include <iostream>
RealPlayer::RealPlayer(QObject* parent):AbstractPlayer(parent)
{
}

void RealPlayer::wykonajRuch(QPoint p)
{
    if(trafione.contains(p))return;
    emit strzel(p);
//    std::cerr << p.x() <<p.y();



}

void RealPlayer::ustawJednoMasztowiec(QPoint pkt, AbstractShip::direction dir)
{
}

void RealPlayer::ustawDwuMasztowiec(QPoint pkt, AbstractShip::direction dir)
{
    std::cerr<<"hura";
}

void RealPlayer::ustawTrzyMasztowiec(QPoint pkt, AbstractShip::direction dir)
{
}

void RealPlayer::ustawCzteroMasztowiec(QPoint pkt, AbstractShip::direction dir)
{
}
