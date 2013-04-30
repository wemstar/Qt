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
    AbstractPlayer();




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

protected:
    /**
     * tablica zawierająca trafione punkty oraz ich wartośc logiczną
     */
    QHash<QPoint,bool> trafione;
    /**
     * tablica zawiera statki
     */
    QVector<AbstractShip*> statki;


};
/**
 * funkcja hasująca dla punktów
 * @param  p
 * @return
 */
inline uint qHash(const QPoint& p)
{
    return qHash(p.x()*p.y());
}

#endif // ABSTRACTPLAYER_H
