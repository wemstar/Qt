#ifndef REALPLAYER_H
#define REALPLAYER_H
#include "abstractplayer.h"

class RealPlayer : public AbstractPlayer
{
public:
    RealPlayer();
public slots:
    virtual void wykonajRuch();
};

#endif // REALPLAYER_H
