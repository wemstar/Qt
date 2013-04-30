#ifndef REALPLAYER_H
#define REALPLAYER_H
#include "abstractplayer.h"


/**
 * klasa reprezentuje Prawdziwego lokalnego gracza
 */
class RealPlayer : public AbstractPlayer
{
public:
    RealPlayer();
public slots:
/**
 * funkcja odpowiada za ruch gracza jest on przechwytywany z głównego okna
 * @param QPoint
 */
    virtual void wykonajRuch(QPoint);
};

#endif // REALPLAYER_H
