#include "gra.h"
#include "Gracz/easysi.h"
#include "Gracz/realplayer.h"

Gra::Gra(QObject *parent) :
    QObject(parent)
{

    gracz1=new RealPlayer();
    gracz2=new EasySi();
    // przesyła sygnał z gui do gracza
    connect(this,SIGNAL(realStrzal(QPoint)),gracz1,SLOT(wykonajRuch(QPoint)));

    // przysyła strzały pomiędzy graczami
    connect(gracz1,SIGNAL(strzel(QPoint)),gracz2,SLOT(uderzenie(QPoint)));
    connect(gracz2,SIGNAL(strzel(QPoint)),gracz1,SLOT(uderzenie(QPoint)));
    // wymusza odpowiedz gracza komputerowego na ruch prawdziwego
    connect(gracz1,SIGNAL(strzel(QPoint)),gracz2,SLOT(wykonajRuch(QPoint)));
    //sprawdza czy punkt został trafiony
    connect(gracz1,SIGNAL(trafienie(QPoint,bool)),gracz2,SLOT(isHit(QPoint,bool)));
    connect(gracz2,SIGNAL(trafienie(QPoint,bool)),gracz1,SLOT(isHit(QPoint,bool)));

    //sygnały przekazywane do GUI
    connect(gracz1,SIGNAL(trafienie(QPoint,bool)),this,SIGNAL(abstractHit(QPoint,bool)));
    connect(gracz2,SIGNAL(trafienie(QPoint,bool)),this,SIGNAL(realHit(QPoint,bool)));


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
