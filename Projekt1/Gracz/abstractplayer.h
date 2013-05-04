#ifndef ABSTRACTPLAYER_H
#define ABSTRACTPLAYER_H
#include <QObject>
#include <QtCore>
#include "../Statki/abstractship.h"

/**
 * Klasa reprezentuje abstrakcyjnego gracza 
 */
class AbstractPlayer:public QObject
{
    Q_OBJECT
public:
    AbstractPlayer(QObject* parent=0);
    void losujStatki();




public slots:
    /**
     * przyjmuje uderzenie od innego gracza
     * @param QPoint punkt w który udzerzył
     */
   virtual void uderzenie(QPoint);

    /**
     * Wykonuje ruch specyficzny dla danego gracza
     * @param QPoint
     */
   virtual void wykonajRuch(QPoint)=0;
    /**
     * przypisuje do tablicy celów czy statek został trafiony
     * @param x trafiony punkt  
     * @param traf czy został trafiony
     */
    void isHit(QPoint x,bool traf);
    void zniczenieStatku();
    void ustawStatek(QPoint,AbstractShip::direction,int);



signals:
   /**
    * wysyła do innego gracza punkt
    * @param QPoint
    */
    void strzel(QPoint);
    /**
     * odpowiada na strzał inego gracza
     * @param QPoint punkt trafienia
     * @param bool  czy pod punktem zanjdował się statek
     */
    void trafienie(QPoint,bool);
    void narysujStatek(QList<QPoint>,QPixmap);
    void przegrana();

protected:
     void ustawJednoMasztowiec(QPoint pkt,AbstractShip::direction dir);
     void ustawDwuMasztowiec(QPoint pkt,AbstractShip::direction dir);
     void ustawTrzyMasztowiec(QPoint pkt,AbstractShip::direction dir);
     void ustawCzteroMasztowiec(QPoint pkt,AbstractShip::direction dir);

    bool bouncing(int i=0);
    bool bouncing(AbstractShip*);

    /**
     * tablica zawierająca trafione punkty oraz ich wartośc logiczną
     */
    QHash<QPoint,bool> trafione;
    /**
     * tablica zawiera statki
     */
    QVector<AbstractShip*> statki;
    int iloscStatkow;
    int jednoMaszt;
    int dwuMaszt;
    int trzyMaszt;
    int czteroMaszt;


};


#endif // ABSTRACTPLAYER_H
