#include "gra.h"
#include "Gracz/easysi.h"
#include "Gracz/realplayer.h"
#include <iostream>
Gra::Gra(QObject *parent) :
    QObject(parent)
{
    gracz1=new RealPlayer(this);
    gracz2=new EasySi(this);
    connect(this,SIGNAL(planszaGotowa()),this,SLOT(polaczGraczy()));
    polaczGraczy();

}

void Gra::polaczGraczy()
{

    gracz2->losujStatki();
//    gracz1->losujStatki();



    connect(gracz1,SIGNAL(narysujStatek(QList<QPoint>,QPixmap)),this,SIGNAL(abstractRysuj(QList<QPoint>,QPixmap)));
    connect(gracz2,SIGNAL(narysujStatek(QList<QPoint>,QPixmap)),this,SIGNAL(realRysuj(QList<QPoint>,QPixmap)));
    nowaGra();

}

void Gra::koniecWybierania()
{
    disconnect(this,SIGNAL(ustawStatek(QPoint,AbstractShip::direction,int)),gracz1,SLOT(ustawStatek(QPoint,AbstractShip::direction,int)));
    disconnect(gracz1,SIGNAL(narysujStatek(QList<QPoint>,QPixmap)),this,SIGNAL(abstractRysuj(QList<QPoint>,QPixmap)));
    disconnect(gracz1,SIGNAL(narysujStatek(QList<QPoint>,QPixmap)),this,SLOT(odliczanie()));
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

    connect(gracz1,SIGNAL(przegrana()),this,SIGNAL(przegranaGracza1()));
    connect(gracz2,SIGNAL(przegrana()),this,SIGNAL(przegranaGracza2()));

    connect(gracz1,SIGNAL(narysujStatek(QList<QPoint>,QPixmap)),gracz1,SLOT(zniczenieStatku()));
    connect(gracz2,SIGNAL(narysujStatek(QList<QPoint>,QPixmap)),gracz2,SLOT(zniczenieStatku()));
}

void Gra::odliczanie()
{
    --iloscStatkow;
    if(iloscStatkow==0)
    {
        koniecWybierania();
        emit rozpocznijGre();
    }
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

void Gra::nowaGra()
{
    iloscStatkow=10;

    connect(this,SIGNAL(ustawStatek(QPoint,AbstractShip::direction,int)),gracz1,SLOT(ustawStatek(QPoint,AbstractShip::direction,int)));
    connect(gracz1,SIGNAL(narysujStatek(QList<QPoint>,QPixmap)),this,SIGNAL(abstractRysuj(QList<QPoint>,QPixmap)));
    connect(gracz1,SIGNAL(narysujStatek(QList<QPoint>,QPixmap)),this,SLOT(odliczanie()));









}
