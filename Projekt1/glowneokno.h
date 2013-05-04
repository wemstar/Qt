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
 * Zawiera dwa QTable widget które odpowiadają planszą
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

    void firstPlayerDraw(QList<QPoint> punkty,QPixmap pic);
    void secondPlayerDraw(QList<QPoint> punkty,QPixmap pic);

    void on_actionNew_Game_triggered();


    void on_actionDodaj_Jednomasztowca_triggered();

    void on_actionAddTwo_funnel_triggered();

    void on_actionAdd_Three_funne_triggered();

    void on_actionAdd_Four_funnel_triggered();

signals:
    void wybierzStatek(QPoint,AbstractShip::direction,int );
protected:
	/**
	 * metoda zaznacza trafiony punkt w odpowiedniej tabelce
	 * @param cel tabelka która zostanie wybrana
	 * @param punkt	punkt który został trafiony
	 * @param traf czy pod celem ukrywał się statek
	 */
    void zaznaczCel(QTableWidget *cel,QPoint punkt,bool traf);
    void zatopCel(QTableWidget * cel,QPoint punkt,QPixmap pic);
private:
    AbstractShip::direction kierunek();
    QPoint punkt();
    Ui::GlowneOkno *ui;
    Gra *game;
};

#endif // GLOWNEOKNO_H
