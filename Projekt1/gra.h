#ifndef GRA_H
#define GRA_H

#include <QObject>
#include "Gracz/abstractplayer.h"

class Gra : public QObject
{
    Q_OBJECT
public:
    explicit Gra(QObject *parent = 0);
    ~Gra();
    
signals:
    void realStrzal(QPoint);
    void abstractHit(QPoint,bool);


    
public slots:
    void wybierzCel(int x,int y);


private:
    AbstractPlayer* gracz1;
    AbstractPlayer* gracz2;

    
};

#endif // GRA_H
