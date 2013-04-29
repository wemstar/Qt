#include "realplayer.h"

RealPlayer::RealPlayer()
{
}

void RealPlayer::wykonajRuch(QPoint p)
{
    emit strzel(p);


}
