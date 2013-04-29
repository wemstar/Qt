#ifndef ABSTRACTPLAYER_H
#define ABSTRACTPLAYER_H
#include <QObject>
#include <QtCore>
#include "../Statki/abstractship.h"

class AbstractPlayer:public QObject
{
    Q_OBJECT
public:
    AbstractPlayer();




public slots:
    /**
      przyjmuje ruch od innego gracza
      */
   virtual void uderzenie(QPoint);

    /**
      oblicza ruch specyficzny dla posczególnego gracza
      */
   virtual void wykonajRuch(QPoint)=0;
    /**
      slot przyjumjacy czy udzerzenie trafilo
      */
    void isHit(QPoint x,bool traf);



signals:
    /**
      wysuła obliczony ruch do innego gracza;
      */
    void strzel(QPoint);
    /**
      odpowiada czy zostal trafiony statek
      */
    void trafienie(QPoint,bool);

protected:

    QHash<QPoint,bool> trafione;
    QVector<AbstractShip*> statki;


};

inline uint qHash(const QPoint& p)
{
    return qHash(p.x()+p.y());
}

#endif // ABSTRACTPLAYER_H
