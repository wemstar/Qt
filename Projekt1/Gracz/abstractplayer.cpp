#include "abstractplayer.h"
#include <QPoint>


AbstractPlayer::AbstractPlayer()
{

}
void AbstractPlayer::trafiony(QPoint x )
{
    bool traf=false;
    foreach (AbstractShip* statek, statki) {
        if(traf=statek->isHit(x))break;

    }
    emit trafienie(traf);

}

