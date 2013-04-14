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
   virtual void trafiony(QPoint);
    virtual void wykonajRuch()=0;


signals:
    void strzel(QPoint);
    void trafienie(bool);

private:
    QSet<QPoint> trafione;
    QSet<AbstractShip*> statki;


};

#endif // ABSTRACTPLAYER_H
