#include "easysi.h"
#include <iostream>
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


    emit strzel(cel);
//    std::cerr<<"SI"<<cel.x()<<cel.y()<<std::endl;
}

