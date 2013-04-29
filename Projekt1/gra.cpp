#include "gra.h"
#include "Gracz/easysi.h"
#include "Gracz/realplayer.h"

Gra::Gra(QObject *parent) :
    QObject(parent)
{

    gracz1=new RealPlayer();
    gracz2=new EasySi();
    connect(this,SIGNAL(realStrzal(QPoint)),gracz1,SLOT(wykonajRuch(QPoint)));
    connect(gracz1,SIGNAL(strzel(QPoint)),gracz2,SLOT(uderzenie(QPoint)));
    connect(gracz2,SIGNAL(strzel(QPoint)),gracz1,SLOT(uderzenie(QPoint)));


}
Gra::~Gra()
{
    delete gracz1;
    delete gracz2;
}

void Gra::wybierzCel(int x, int y)
{
    QPoint strzal= QPoint(x,y);
    emit realStrzal(strzal);
}
