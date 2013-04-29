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
    void on_gracz1Table_cellClicked(int row, int column);

    void on_gracz1Table_itemClicked(QTableWidgetItem *item);

    void secondPlayerMove(QPoint,bool);


private:
    Ui::GlowneOkno *ui;
    Gra game;
};

#endif // GLOWNEOKNO_H
