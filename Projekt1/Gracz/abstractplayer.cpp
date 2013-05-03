#include "abstractplayer.h"
#include <QPoint>

#include "../Statki/jednomasztowiec.h"
#include "../Statki/dwumasztowiec.h"
#include "../Statki/trojmasztowiec.h"
#include "../Statki/czteromasztowiec.h"

AbstractPlayer::AbstractPlayer(QObject* parent):QObject(parent)
{
    connect(this,SIGNAL(zatonol(QList<QPoint>,QPixmap)),this,SLOT(zniczenieStatku()));
    iloscStatkow=10;
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
    --iloscStatkow;
    if(iloscStatkow==0)emit przegrana();
}

void AbstractPlayer::losujStatki()
{


    for(int i=0;i<statki.size();++i)
    {
        bool bounce=true;
        while(!statki[i]->isValid()||bounce)
        {
            statki[i]->setPosition(QPoint(qrand()%10,qrand()%10),qrand()%2==0?AbstractShip::RIGHT:AbstractShip::DOWN);
            for(int j=0;j<i;++j)
            {
                if(AbstractShip::isBouncing(*statki[i],*statki[j]))
                {
                    bounce=true;
                    break;
                }
                else bounce=false;

            }
            if(i==0)bounce=false;

        }
    }


    foreach(AbstractShip* sta,statki)
    {
        connect(sta,SIGNAL(zatonol(QList<QPoint>,QPixmap)),this,SIGNAL(zatonol(QList<QPoint>,QPixmap)));
    }






}




