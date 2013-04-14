#ifndef ABSTRACTSHIP_H
#define ABSTRACTSHIP_H

#include <QObject>
#include <QtCore>

class AbstractShip:public QObject
{
    Q_OBJECT
public:
    explicit AbstractShip();
    virtual bool isHit(QPoint)=0;
    
signals:
    
public slots:
    
};

#endif // ABSTRACTSHIP_H
