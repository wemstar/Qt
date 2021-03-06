#include "glowneokno.h"
#include "ui_glowneokno.h"
#include <iostream>

GlowneOkno::GlowneOkno(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GlowneOkno)
{
    ui->setupUi(this);

    //ustawienai dla tabeli 1

    ui->gracz1Table->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz1Table->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz1Table->setMinimumSize(400,400);
    ui->gracz1Table->setEnabled(false);
    ui->gracz1Table->setSelectionMode(QAbstractItemView::ContiguousSelection);

//    ustawienia dla tabeli 2

    ui->gracz2Table->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz2Table->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz2Table->setMinimumSize(400,400);
    ui->gracz2Table->setEnabled(false);
    ui->gracz2Table->setSelectionMode(QAbstractItemView::SingleSelection);



    ui->mainToolBar->setVisible(false);
}
void GlowneOkno::rozpocznijGre()
{
    connect(ui->gracz2Table,SIGNAL(cellPressed(int,int)),game,SLOT(wybierzCel(int,int)));
    connect(game,SIGNAL(abstractHit(QPoint,bool)),this,SLOT(secondPlayerMove(QPoint,bool)));
    connect(game,SIGNAL(realHit(QPoint,bool)),this,SLOT(firstPlayerMove(QPoint,bool)));


    ui->gracz1Table->setEnabled(false);
    ui->gracz2Table->setEnabled(true);
    ui->mainToolBar->setVisible(false);
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

void GlowneOkno::firstPlayerDraw(QList<QPoint> punkty, QPixmap pic)
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

AbstractShip::direction GlowneOkno::kierunek()
{
    QTableWidgetSelectionRange zasieg=ui->gracz1Table->selectedRanges()[0];
    return zasieg.columnCount()<zasieg.rowCount()? AbstractShip::RIGHT:AbstractShip::DOWN;
}

QPoint GlowneOkno::punkt()
{
    QTableWidgetSelectionRange zasieg=ui->gracz1Table->selectedRanges()[0];
    return QPoint(zasieg.topRow(),zasieg.leftColumn());


}

void GlowneOkno::secondPlayerDraw(QList<QPoint> punkty, QPixmap pic)
{
    QTableWidget* cel=ui->gracz1Table;
    foreach(QPoint punkt,punkty)
    {
        zatopCel(cel,punkt,pic);
    }
    repaint();
}


void GlowneOkno::on_actionNew_Game_triggered()
{
    ui->gracz1Table->clear();
    ui->gracz2Table->clear();
    ui->gracz1Table->setEnabled(true);
    ui->gracz2Table->setEnabled(false);
    ui->mainToolBar->setVisible(true);
    game= new Gra();
    connect(game,SIGNAL(abstractRysuj(QList<QPoint>,QPixmap)),this,SLOT(secondPlayerDraw(QList<QPoint>,QPixmap)));
    connect(game,SIGNAL(realRysuj(QList<QPoint>,QPixmap)),this,SLOT(firstPlayerDraw(QList<QPoint>,QPixmap)));

    connect(this ,SIGNAL(wybierzStatek(QPoint,AbstractShip::direction,int)),game,SIGNAL(ustawStatek(QPoint,AbstractShip::direction,int)));
    connect(game,SIGNAL(rozpocznijGre()),this,SLOT(rozpocznijGre()));
    connect(game,SIGNAL(przegranaGracza1()),this,SLOT(przegralGracz1()));
    connect(game,SIGNAL(przegranaGracza2()),this,SLOT(przegralGracz2()));


}



void GlowneOkno::on_actionDodaj_Jednomasztowca_triggered()
{
    emit wybierzStatek(punkt(),kierunek(),1);

}

void GlowneOkno::on_actionAddTwo_funnel_triggered()
{
//    std::cerr<< kierunek()<<std::endl;
//    std::cerr<< punkt().x()<<" "<<punkt().y()<<std::endl;
    emit wybierzStatek(punkt(),kierunek(),2);

}

void GlowneOkno::on_actionAdd_Three_funne_triggered()
{
    emit wybierzStatek(punkt(),kierunek(),3);

}

void GlowneOkno::on_actionAdd_Four_funnel_triggered()
{
    emit wybierzStatek(punkt(),kierunek(),4);

}

void GlowneOkno::przegralGracz1()
{
    QMessageBox::information(this,QString(tr("Winner")),QString(tr("Player 2 win")));
    ui->gracz2Table->setEnabled(false);

}
void GlowneOkno::przegralGracz2()
{
    QMessageBox::information(this,QString(tr("Winner")),QString(tr("Player 1 win")));
    ui->gracz2Table->setEnabled(false);

}



void GlowneOkno::on_actionAbout_QT_triggered()
{
    QMessageBox::aboutQt(this);
}

void GlowneOkno::on_actionAbout_Game_triggered()
{
    QMessageBox::about(this,QString(tr("Ships")),QString(tr("To  start game choose new game in menu and then place ships ")));
}

void GlowneOkno::on_actionExit_triggered()
{
    this->close();
}
