#ifndef ABSTRACTSHIP_H
#define ABSTRACTSHIP_H

#include <QObject>
#include <QtCore>
#include <QtGui>
/**
 * klasa reprezentuje abstrakcyjny statek
 */
class AbstractShip:public QObject
{


    Q_OBJECT
public:
    enum direction {RIGHT,DOWN};
    /**
     * Konstuktor statku
     * @param  poz    pozycja początku statku
     * @param  dir    kierunek statku
     * @param  il     ilosc masztów
     * @param  parent rodzic statku
     */
    explicit AbstractShip(QPoint poz,direction dir,int il,QObject* parent=0);
    /**
     * sprawdza czy statek został trafiony
     * @param  QPoint punkt ostrzału
     * @return        czy został trafiony True oznacza trafienie
     */
    virtual bool isHit(QPoint);
    /**
     * funkcja która sprawdza czy dwa statki stykają sie bokami
     * @param  a statek 1
     * @param  b statek2
     * @return   true jesli soę stykają
     */
    static bool isBouncing(const AbstractShip& a, const AbstractShip& b);
    /**
     * sprawdza czy współrzędne statku nie wychodzą poza zakres
     * @return true jeśli statek jest dobrze ustawiony
     */
    bool isValid();
    /**
     * @return zwraca punkty w których znajduje się statek
     */
    QList<QPoint> kordy();
    /**
     * 
     * @return obraz symbolizujący statek
     */
    QPixmap obraz();
    /**
     *      
     * @return true jeśli statek został zniszczony
     */
    bool zniszczony();

    
    /**
     *  
     */
signals:
    void zatonol(QList<QPoint>,QPixmap);

    
public slots:
/**
 * ustawia pozycje statku
 * @param poz punkt początkowy
 * @param dir kierunek
 */
    void setPosition(QPoint poz,direction dir);

protected:
//    QHash<QPoint,bool>& punktyStatku();
    QHash<QPoint,bool> pozycja;

    QPixmap obrazek;
    int ilosc_pol;
    
};
/**
 * funkcja hasująca dla punktów
 * @param  p
 * @return
 */
inline uint qHash(const QPoint& p)
{
    return qHash(p.x()*13*p.y());
}

/**
 * funkcja określa odległość między punktami
 * @param  a punkt 1
 * @param  b punkt 2
 * @return   odległość między punktami
 */
inline double distance(QPoint a,QPoint b)
{
    return sqrt(pow(a.x()-b.x(),2)+pow(a.y()-b.y(),2));
}


#endif // ABSTRACTSHIP_H
