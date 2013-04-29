#include "abstractplayer.h"
#include <QPoint>

#include "../Statki/jednomasztowiec.h".h"


AbstractPlayer::AbstractPlayer()
{
    for(int i=0;i<5;++i)
    {
        statki.append(new JednoMasztowiec(QPoint(i,i),AbstractShip::LEFT,this));
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




