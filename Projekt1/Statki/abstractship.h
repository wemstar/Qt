#ifndef ABSTRACTSHIP_H
#define ABSTRACTSHIP_H

#include <QObject>
#include <QtCore>
#include <QtGui>

class AbstractShip:public QObject
{


    Q_OBJECT
public:
    enum direction {LEFT,RIGHT,UP,DOWN};
    explicit AbstractShip(QPoint poz,direction dir,QObject* parent=0);
    virtual bool isHit(QPoint)=0;
    static bool isValid(const AbstractShip& a, const AbstractShip& b);

    
signals:
    
public slots:

protected:
    QPoint pozycja;
    direction kierunek;
    QPixmap obrazek;
    
};

#endif // ABSTRACTSHIP_H
