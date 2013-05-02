#include "glowneokno.h"
#include "ui_glowneokno.h"
#include <iostream>

GlowneOkno::GlowneOkno(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GlowneOkno)
{
    ui->setupUi(this);
    game= new Gra();
    //ustawienai dla tabeli 1

    ui->gracz1Table->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz1Table->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz1Table->setMinimumSize(400,400);
    ui->gracz1Table->setEnabled(false);
    //ustawienia dla tabeli 2

    ui->gracz2Table->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz2Table->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz2Table->setMinimumSize(400,400);
//    ui->gracz2Table->setEnabled(false);

    connect(ui->gracz2Table,SIGNAL(cellPressed(int,int)),game,SLOT(wybierzCel(int,int)));
    connect(game,SIGNAL(abstractHit(QPoint,bool)),this,SLOT(secondPlayerMove(QPoint,bool)));
    connect(game,SIGNAL(realHit(QPoint,bool)),this,SLOT(firstPlayerMove(QPoint,bool)));

    connect(game,SIGNAL(abstractZatonol(QList<QPoint>,QPixmap)),this,SLOT(secondPlayerDrawn(QList<QPoint>,QPixmap)));
    connect(game,SIGNAL(realZatonol(QList<QPoint>,QPixmap)),this,SLOT(firstPlayerDrawn(QList<QPoint>,QPixmap)));
}

GlowneOkno::~GlowneOkno()
{
    delete ui;
}





void GlowneOkno::secondPlayerMove(QPoint x, bool t)
{
    zaznaczCel(ui->gracz1Table,x,t);

}

void GlowneOkno::firstPlayerMove(QPoint x, bool t)
{
    zaznaczCel(ui->gracz2Table,x,t);
    //    std::cerr << "cos";

}

void GlowneOkno::firstPlayerDrawn(QList<QPoint> punkty, QPixmap pic)
{
    QTableWidget* cel=ui->gracz2Table;
    foreach(QPoint punkt,punkty)
    {
        zatopCel(cel,punkt,pic);
    }
    repaint();

}

void GlowneOkno::zaznaczCel(QTableWidget *cel, QPoint punkt, bool traf)
{
    QLabel* item=new QLabel(this);
    QPixmap pix;
    if(traf)
    {
        pix.load(":/new/cel/trafiony");

    }else
    {
        pix.load(":/new/cel/pudlo");
    }
    item->setPixmap(pix);
    cel->setCellWidget(punkt.x(),punkt.y(),item);
}

void GlowneOkno::zatopCel(QTableWidget *cel, QPoint punkt, QPixmap pic)
{
    QLabel* item=new QLabel();

    item->setPixmap(pic);
    cel->setCellWidget(punkt.x(),punkt.y(),item);
//    std::cerr<<punkt.x()<<" "<< punkt.y();


}

void GlowneOkno::secondPlayerDrawn(QList<QPoint> punkty, QPixmap pic)
{
    QTableWidget* cel=ui->gracz1Table;
    foreach(QPoint punkt,punkty)
    {
        zatopCel(cel,punkt,pic);
    }
    repaint();
}

