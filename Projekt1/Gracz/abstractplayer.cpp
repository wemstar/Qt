#include "abstractplayer.h"
#include <QPoint>

#include "../Statki/jednomasztowiec.h"
#include "../Statki/dwumasztowiec.h"
#include "../Statki/trojmasztowiec.h"
#include "../Statki/czteromasztowiec.h"

AbstractPlayer::AbstractPlayer(QObject* parent):QObject(parent)
{


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

void AbstractPlayer::losujStatki()
{
    int i=1;
    while(i!=0)
    {
        AbstractShip::direction dir=(qrand()%2==0)?AbstractShip::RIGHT : AbstractShip::DOWN;
        AbstractShip * statek=new CzteroMasztowiec(QPoint(qrand()%10,qrand()%10),dir,this);


        if(statek->isValid())
        {
            statki.append(statek);
            --i;

        }
        else delete statek;

    }
    i=2;
    while(i!=0)
    {
        AbstractShip::direction dir=(qrand()%2==0)?AbstractShip::RIGHT : AbstractShip::DOWN;
        AbstractShip * statek=new TrojMasztowiec(QPoint(qrand()%10,qrand()%10),dir,this);
        bool styk=true;
        foreach(AbstractShip* sta,statki)
        {
            if(AbstractShip::isBouncing(*sta,*statek))
            {
                styk=false;
                break;
            }

        }
        if(statek->isValid()&& styk)
        {
            statki.append(statek);
            --i;

        }
        else delete statek;


    }
    i=3;
    while(i!=0)
    {
        AbstractShip::direction dir=(qrand()%2==0)?AbstractShip::RIGHT : AbstractShip::DOWN;
        AbstractShip * statek=new DwuMasztowiec(QPoint(qrand()%10,qrand()%10),dir,this);
        bool styk=true;
        foreach(AbstractShip* sta,statki)
        {
            if(AbstractShip::isBouncing(*sta,*statek))
            {
                styk=false;
                break;
            }

        }
        if(statek->isValid()&& styk)
        {
            statki.append(statek);
            --i;

        }
        else delete statek;

    }
    i=4;
    while(i!=0)
    {
        AbstractShip::direction dir=(qrand()%2==0)?AbstractShip::RIGHT : AbstractShip::DOWN;
        AbstractShip * statek=new JednoMasztowiec(QPoint(qrand()%9+1,qrand()%9+1),dir,this);
        bool styk=true;
        foreach(AbstractShip* sta,statki)
        {
            if(AbstractShip::isBouncing(*sta,*statek))
            {
                styk=false;
                break;
            }

        }
        if(statek->isValid()&& styk)
        {
            statki.append(statek);
            --i;

        }
        else delete statek;

    }
    foreach(AbstractShip* sta,statki)
    {
        connect(sta,SIGNAL(zatonol(QList<QPoint>,QPixmap)),this,SIGNAL(zatonol(QList<QPoint>,QPixmap)));
    }






}




