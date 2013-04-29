#ifndef EASYSI_H
#define EASYSI_H
#include "abstractplayer.h"

class EasySi : public AbstractPlayer
{
public:
    EasySi();

public slots:
    virtual void wykonajRuch(QPoint);
};

#endif // EASYSI_H
