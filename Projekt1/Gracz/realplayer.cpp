#include "realplayer.h"
#include <iostream>
RealPlayer::RealPlayer()
{
}

void RealPlayer::wykonajRuch(QPoint p)
{
    if(trafione.contains(p))return;
    emit strzel(p);
//    std::cerr << p.x() <<p.y();



}
