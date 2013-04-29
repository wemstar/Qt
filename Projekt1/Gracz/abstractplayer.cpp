#include "abstractplayer.h"
#include <QPoint>


AbstractPlayer::AbstractPlayer()
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




