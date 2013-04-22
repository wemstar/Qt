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
   virtual void uderzenie(QPoint);
    virtual void wykonajRuch()=0;



signals:
    void strzel(QPoint);
    void trafienie(bool);

protected:
    QVector<QPoint> trafione;
    QVector<AbstractShip*> statki;


};

#endif // ABSTRACTPLAYER_H
