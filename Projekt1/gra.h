#ifndef GRA_H
#define GRA_H

#include <QObject>
#include "Gracz/abstractplayer.h"

/**
 * klasa odpowiada za mechnike gry oraz za komunikacje między graczami
 * kominkacja odbywa się za pomocą wymiany sygnałów miedzy graczami oraz GUI
 */
class Gra : public QObject
{
    Q_OBJECT
public:
    explicit Gra(QObject *parent = 0);
    ~Gra();
    
signals:

    void realStrzal(QPoint);
    /**
     * syganł przekazuje dalej wiadomosc i otrafeniu przez nie realnego gracza
     * @param QPoint
     * @param bool
     */
    void abstractHit(QPoint,bool);
    /**
     * sygnałl przekazuje dalej sygnał o tarafeniu przez lokalnego gracza
     * @param QPoint
     * @param bool
     */
    void realHit(QPoint,bool);

    void realZatonol(QList<QPoint>,QPixmap);
    void abstractZatonol(QList<QPoint>,QPixmap);


    
public slots:
	/**
	 * slot przekazuje do klasy realPlayer inforacje o współrzędnych wybranych w GUI
	 * @param x
	 * @param y
	 */
    void wybierzCel(int x,int y);


private:
    AbstractPlayer* gracz1;
    AbstractPlayer* gracz2;

    
};

#endif // GRA_H
