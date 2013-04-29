#include "easysi.h"

EasySi::EasySi()
{
}

void EasySi::wykonajRuch(QPoint)
{
    QPoint cel=QPoint();
    while(true)
    {
        cel=QPoint(qrand()%10,qrand()%10);
        if(!trafione.contains(cel))break;


    }
    trafione.append(cel);
    emit strzel(cel);
}
