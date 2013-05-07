#ifndef GLOWNEOKNO_H
#define GLOWNEOKNO_H

#include <QMainWindow>
#include "gra.h"
#include <QtGui>
namespace Ui {
class GlowneOkno;
}

/**
 * głowne okienko programu
 * Zawiera dwa QTable widget które są planszmi dla graczy
 */
class GlowneOkno : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit GlowneOkno(QWidget *parent = 0);
    ~GlowneOkno();
    
private slots:



	/**
	 * slot odbiera ruch drugiego gracza i wysyła go do funkcji zaznaczCel
	 * @param QPoint
	 * @param bool
	 */
    void secondPlayerMove(QPoint,bool);
    /**
     * slot odbiera ruch pierwszego gracza i wysyła go do funkcji zaznaczCel
     * @param QPoint
     * @param bool
     */
    void firstPlayerMove(QPoint,bool);
    /**
     * pozwala na rysowanie po polu gracza 1
     * @param punkty punkty do narysowania
     * @param pic    obrazyk ktory ma być narysowany
     */
    void firstPlayerDraw(QList<QPoint> punkty,QPixmap pic);
    /**
     * pozwala na rysowanie po polu gracza 1
     * @param punkty punkty do narysowania
     * @param pic    obrazek ktory zostanie namalowany
     */
    void secondPlayerDraw(QList<QPoint> punkty,QPixmap pic);
    /**
     * akcja odpowiadajaca za rozpoczecie nowej gry
     */
    void on_actionNew_Game_triggered();

    /**
     * akcja doaje jednomasztowca do gry 
     */
    void on_actionDodaj_Jednomasztowca_triggered();
    /**
     * akcja dodaje dwumasztowca do gry
     */
    void on_actionAddTwo_funnel_triggered();
    /**
     * akcja dodaje  trzymasztowca do gry
     */

    void on_actionAdd_Three_funne_triggered();
    /**
     * kcja dodaje  czteromasztowca do gry
     */
    void on_actionAdd_Four_funnel_triggered();
    /**
     * slot rozpoczynajacy gre(po ustawieniu statków)
     */
    void rozpocznijGre();
    /**
     * slot który komunikuje przeganą gracza 2
     */
    void przegralGracz2();
    /**
     * slot który komunikuje przeganą gracza 1
     */
    void przegralGracz1();


    void on_actionSave_Game_triggered();

signals:
/**
 * sygnal wysyłany po nacisnięciu akcji dodącej statek
 * @param QPoint                  punkt poczatkowy statku
 * @param AbstractShip::direction kirunek statku
 * @param int                     liczba masztów
 */
    void wybierzStatek(QPoint,AbstractShip::direction,int );
protected:
	/**
	 * metoda zaznacza trafiony punkt w odpowiedniej tabelce
	 * @param cel tabelka która zostanie wybrana
	 * @param punkt	punkt który został trafiony
	 * @param traf czy pod celem ukrywał się statek
	 */
    void zaznaczCel(QTableWidget *cel,QPoint punkt,bool traf);
    /**
     * zatapia wybrany cel
     * @param cel   plansza w którj znajduje się zaatopiony zel
     * @param punkt punkt w którym znajduje się zatopiony cele
     * @param pic   obrazek zatopienia statku
     */
    void zatopCel(QTableWidget * cel,QPoint punkt,QPixmap pic);
private:
    /**
     * funkcja określa kierunek statku
     * @return typ wyliczeniowy reprezentujący kierunek
     */
    AbstractShip::direction kierunek();
    QPoint punkt();
    Ui::GlowneOkno *ui;
    Gra *game;
};

#endif // GLOWNEOKNO_H
