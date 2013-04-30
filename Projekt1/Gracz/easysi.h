#ifndef EASYSI_H
#define EASYSI_H
#include "abstractplayer.h"


/**
 * klasa reprezentuje gracza zawierającą stuczną inteligencje
 * działa on na zasadzie losowego doboru celów
 */
class EasySi : public AbstractPlayer
{
public:
    EasySi();

public slots:
/**
 * metoda losuje punkt który zostanie ostrzelany
 * @param QPoint
 */
    virtual void wykonajRuch(QPoint);

};

#endif // EASYSI_H
