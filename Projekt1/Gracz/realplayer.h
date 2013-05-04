#ifndef REALPLAYER_H
#define REALPLAYER_H
#include "abstractplayer.h"


/**
 * klasa reprezentuje Prawdziwego lokalnego gracza
 */
class RealPlayer : public AbstractPlayer
{
public:
    RealPlayer(QObject* parent=0);
public slots:
/**
 * funkcja odpowiada za ruch gracza jest on przechwytywany z głównego okna
 * @param QPoint
 */
    virtual void wykonajRuch(QPoint);

protected:
    void ustawJednoMasztowiec(QPoint pkt,AbstractShip::direction dir);
    void ustawDwuMasztowiec(QPoint pkt,AbstractShip::direction dir);
    void ustawTrzyMasztowiec(QPoint pkt,AbstractShip::direction dir);
    void ustawCzteroMasztowiec(QPoint pkt,AbstractShip::direction dir);
};

#endif // REALPLAYER_H
