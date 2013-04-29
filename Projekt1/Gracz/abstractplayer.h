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



signals:
    /**
      wysuła obliczony ruch do innego gracza;
      */
    void strzel(QPoint);
    /**
      odpowiada czy zostal trafiony statek
      */
    void trafienie(bool);

protected:
    QVector<QPoint> trafione;
    QVector<AbstractShip*> statki;


};

#endif // ABSTRACTPLAYER_H
