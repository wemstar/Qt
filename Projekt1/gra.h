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
    /**
     * sygnał przekauje strzał gracza lokalnego 
     * @param QPoint punkt ostrzelany
     */
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





    /**
     * pozwala na rysowanie po polu gracza 1
     * @param punkty punkty do narysowania
     * @param pic    obrazek ktory zostanie namalowany
     */
    void realRysuj(QList<QPoint>,QPixmap);
    /**
     * pozwala na rysowanie po polu gracza 2
     * @param punkty punkty do narysowania
     * @param pic    obrazek ktory zostanie namalowany
     */
    void abstractRysuj(QList<QPoint>,QPixmap);
    /**
     * sygnalizuje koniec wybierania pozycji statków
     */
    void planszaGotowa();
    /**
     * ustawia statek na wybranej pozycji
     * @param QPoint                  punkt początku statku
     * @param AbstractShip::direction kierunek statku
     * @param int                     ilosc masztow
     */
    void ustawStatek(QPoint,AbstractShip::direction,int);
    /**
     * sygnalizuje rozpoczęcie nowej gry
     */
    void rozpocznijGre();
    /**
     * sygnalizuje przegraną gracza1
     */
    void przegranaGracza1();
    /**
     * sygnalizuje przegraną gracza2
     */
    void przegranaGracza2();



    
public slots:
	/**
	 * slot przekazuje do klasy realPlayer inforacje o współrzędnych wybranych w GUI
	 * @param x
	 * @param y
	 */
    void wybierzCel(int x,int y);
    /**
     * przyjmuje wiadmość o nowej grze
     * ustawia sloty potrzebne do komunikacji z okienkiem
     */
    void nowaGra();
    /**
     * łaczy komunikacje pomiędzy graczami
     */
    void polaczGraczy();
    /**
     * łaczy ostrzał pomiędzy graczami
     */
    void koniecWybierania();
    /**
     * odlicza ilość statków do startu gry
     */
    void odliczanie();
    void zapiszGre(QString filename);
    void zapiszGracza(QXmlStreamWriter*,AbstractPlayer*);
    void zapiszStatek(QXmlStreamWriter*,AbstractShip*);


private:
    AbstractPlayer* gracz1;
    AbstractPlayer* gracz2;
    int iloscStatkow;


    
};

#endif // GRA_H
