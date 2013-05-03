#ifndef ABSTRACTSHIP_H
#define ABSTRACTSHIP_H

#include <QObject>
#include <QtCore>
#include <QtGui>

class AbstractShip:public QObject
{


    Q_OBJECT
public:
    enum direction {RIGHT,DOWN};
    explicit AbstractShip(QPoint poz,direction dir,int il,QObject* parent=0);
    virtual bool isHit(QPoint);
    static bool isBouncing(const AbstractShip& a, const AbstractShip& b);
    bool isValid();

    
signals:
    void zatonol(QList<QPoint>,QPixmap);
    
public slots:
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

inline double distance(QPoint a,QPoint b)
{
    return sqrt(pow(a.x()-b.x(),2)+pow(a.y()-b.y(),2));
}


#endif // ABSTRACTSHIP_H
