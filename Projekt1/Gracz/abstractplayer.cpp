#include "abstractplayer.h"
#include <QPoint>
#include <iostream>
#include "../Statki/jednomasztowiec.h"
#include "../Statki/dwumasztowiec.h"
#include "../Statki/trojmasztowiec.h"
#include "../Statki/czteromasztowiec.h"

AbstractPlayer::AbstractPlayer(QObject* parent):QObject(parent)
{

    iloscStatkow=10;
    jednoMaszt=4;
    dwuMaszt=3;
    trzyMaszt=2;
    czteroMaszt=1;




}

QList<AbstractShip *> AbstractPlayer::getStatki()
{
    return statki;
}
void AbstractPlayer::uderzenie(QPoint x )
{
    bool traf=false;
    foreach (AbstractShip* statek, statki) {
        if(traf=statek->isHit(x))
        {
            traf=true;
            break;
        }
    }
    emit trafienie(x,traf);

}
void AbstractPlayer::isHit(QPoint x, bool traf)
{
    trafione.insert(x,traf);

}

void AbstractPlayer::zniczenieStatku()
{
    int zniszcz=0;
    foreach(AbstractShip* x,statki)
    {
        if(x->zniszczony())++zniszcz;
    }

    if(iloscStatkow==zniszcz)
    {emit przegrana();
//        std::cerr<<"zniszcz";
        disconnect(this,SIGNAL(narysujStatek(QList<QPoint>,QPixmap)),this,SLOT(zniczenieStatku()));
    }
}

void AbstractPlayer::ustawStatek(QPoint pkt, AbstractShip::direction dir, int ma)
{

    switch (ma)
    {
        case 1:
            ustawJednoMasztowiec(pkt,dir);
            break;
        case 2:
            ustawDwuMasztowiec(pkt,dir);
            break;
        case 3:
            ustawTrzyMasztowiec(pkt,dir);
            break;
        case 4:
            ustawCzteroMasztowiec(pkt,dir);
            break;

    }

}

void AbstractPlayer::losujStatki()
{




    statki.append(new CzteroMasztowiec(QPoint(qrand()%10,qrand()%10),qrand()%2==0?AbstractShip::RIGHT:AbstractShip::DOWN,this));
    for(int i=0;i<2;++i){
    statki.append(new TrojMasztowiec(QPoint(qrand()%10,qrand()%10),qrand()%2==0?AbstractShip::RIGHT:AbstractShip::DOWN,this));
    }
    for(int i=0;i<3;i++){
       statki.append(new DwuMasztowiec(QPoint(qrand()%10,qrand()%10),qrand()%2==0?AbstractShip::RIGHT:AbstractShip::DOWN,this));
   }
   for(int i=0;i<4;++i){
       statki.append(new JednoMasztowiec(QPoint(qrand()%10,qrand()%10),qrand()%2==0?AbstractShip::RIGHT:AbstractShip::DOWN,this));
   }
    for(int i=0;i<statki.size();++i)
    {
        bool bounce=true;
        while(!statki[i]->isValid()||bounce)
        {
            statki[i]->setPosition(QPoint(qrand()%10,qrand()%10),qrand()%2==0?AbstractShip::RIGHT:AbstractShip::DOWN);

            if(i==0)bounce=false;
            else bounce=bouncing(i);


        }
    }


    foreach(AbstractShip* sta,statki)
    {
        connect(sta,SIGNAL(zatonol(QList<QPoint>,QPixmap)),this,SIGNAL(narysujStatek(QList<QPoint>,QPixmap)));
    }






}

bool AbstractPlayer::bouncing(int i)
{

        for(int j=0;j<i;++j)
        {
            if(AbstractShip::isBouncing(*statki[i],*statki[j]))
            {
                return true;
            }


        }

        return false;
}

bool AbstractPlayer::bouncing(AbstractShip *x)
{
    foreach(AbstractShip *ship,statki)
    {
        if(AbstractShip::isBouncing(*x,*ship))return true;

    }
    return false;
}

void AbstractPlayer::ustawJednoMasztowiec(QPoint pkt, AbstractShip::direction dir)
{
    if(jednoMaszt==0)return;
    AbstractShip * x=new JednoMasztowiec(pkt,dir,this);
    if(x->isValid()&&(!bouncing(x)))
    {
        statki.append(x);
        emit narysujStatek(x->kordy(),x->obraz());
//        std::cerr<<"kurcze";
        --jednoMaszt;


    }


}

void AbstractPlayer::ustawDwuMasztowiec(QPoint pkt, AbstractShip::direction dir)
{
    if(dwuMaszt==0)return;
    AbstractShip * x=new DwuMasztowiec(pkt,dir,this);
    if(x->isValid()&&(!bouncing(x)))
    {
        statki.append(x);
        emit narysujStatek(x->kordy(),x->obraz());
        --dwuMaszt;
    }

}

void AbstractPlayer::ustawTrzyMasztowiec(QPoint pkt, AbstractShip::direction dir)
{
    if(trzyMaszt==0)return;
    AbstractShip * x=new TrojMasztowiec(pkt,dir,this);
    if(x->isValid()&&(!bouncing(x)))
    {
        statki.append(x);
        emit narysujStatek(x->kordy(),x->obraz());
        --trzyMaszt;
    }
}

void AbstractPlayer::ustawCzteroMasztowiec(QPoint pkt, AbstractShip::direction dir)
{
    if(czteroMaszt==0)return;
    AbstractShip * x=new CzteroMasztowiec(pkt,dir,this);
    if(x->isValid()&&(!bouncing(x)))
    {
        statki.append(x);
        emit narysujStatek(x->kordy(),x->obraz());
        --czteroMaszt;
    }
}






