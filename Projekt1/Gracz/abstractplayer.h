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
    QList<AbstractShip*>getStatki();
    



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
    /**
     * funkcja losuje statki
     */
    void losujStatki();
    /**
     * funkcja zmniejsza ilość pozostałych statków
     */
    void zniczenieStatku();
    /**
     * ustawia statek na wybrane położenie
     * @param QPoint                  początek statku
     * @param AbstractShip::direction kierunek
     * @param int                     liczba masztów
     */
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
    /**
     * sygnalizuje przegraną gracza
     */
    void przegrana();

protected:
    /**
     * ustawia   jednomasztowca       
     * @param pkt punkt początku statku
     * @param dir ilosć masztów
     */
     void ustawJednoMasztowiec(QPoint pkt,AbstractShip::direction dir);
     /**
      * ustawia    dwumasztowca         
      * @param pkt punkt początku statku
      * @param dir ilosć masztów
      */
     void ustawDwuMasztowiec(QPoint pkt,AbstractShip::direction dir);
     /**
      * ustawia     trójmasztowca        
      * @param pkt punkt początku statku
      * @param dir ilosć masztów
      */
     void ustawTrzyMasztowiec(QPoint pkt,AbstractShip::direction dir); 
     /**
      * ustawia    czteromasztowca         
      * @param pkt punkt początku statku
      * @param dir ilosć masztów
      */
     void ustawCzteroMasztowiec(QPoint pkt,AbstractShip::direction dir);
     /**
      * czy staki obecne w graczu stykają się
      * @param  i ilosć statków
      * @return   czy stykają się
      */
    bool bouncing(int i=0);
    /**
     *  czy statek bedzie się stykał
     */

    bool bouncing(AbstractShip*);

    /**
     * tablica zawierająca trafione punkty oraz ich wartośc logiczną
     */
    QHash<QPoint,bool> trafione;
    /**
     * tablica zawiera statki
     */
    QList<AbstractShip*> statki;
    int iloscStatkow;
    int jednoMaszt;
    int dwuMaszt;
    int trzyMaszt;
    int czteroMaszt;


};


#endif // ABSTRACTPLAYER_H
