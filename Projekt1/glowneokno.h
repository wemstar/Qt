#ifndef GLOWNEOKNO_H
#define GLOWNEOKNO_H

#include <QMainWindow>
#include "gra.h"
#include <QtGui>
namespace Ui {
class GlowneOkno;
}

class GlowneOkno : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit GlowneOkno(QWidget *parent = 0);
    ~GlowneOkno();
    
private slots:




    void secondPlayerMove(QPoint,bool);
    void firstPlayerMove(QPoint,bool);

protected:
    void zaznaczCel(QTableWidget *cel,QPoint punkt,bool traf);
private:
    Ui::GlowneOkno *ui;
    Gra game;
};

#endif // GLOWNEOKNO_H
