#include "glowneokno.h"
#include "ui_glowneokno.h"

GlowneOkno::GlowneOkno(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GlowneOkno)
{
    ui->setupUi(this);
    //ustawienai dla tabeli 1

    ui->gracz1Table->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz1Table->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz1Table->setMinimumSize(400,400);
    ui->gracz2Table->setEnabled(false);
    //ustawienia dla tabeli 2

    ui->gracz2Table->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz2Table->verticalHeader()->setResizeMode(QHeaderView::Stretch);
    ui->gracz2Table->setMinimumSize(400,400);
    ui->gracz2Table->setEnabled(false);

    connect(ui->gracz1Table,SIGNAL(cellPressed(int,int)),&game,SLOT(wybierzCel(int,int)));
     connect(&game,SIGNAL(abstractHit(QPoint,bool)),this,SLOT(secondPlayerMove(QPoint,bool)));
}

GlowneOkno::~GlowneOkno()
{
    delete ui;
}

void GlowneOkno::on_gracz1Table_cellClicked(int row, int column)
{
//    ui->gracz1Table->item(row,column)->setText(QString("cos"));

    QLabel* item=new QLabel(this);
    QPixmap pix;
    pix.load(":/new/statki/jeden");
    item->setPixmap(pix);
    item->setEnabled(false);
    ui->gracz1Table->setCellWidget(row,column,item);


}

void GlowneOkno::on_gracz1Table_itemClicked(QTableWidgetItem *item)
{

}

void GlowneOkno::secondPlayerMove(QPoint x, bool t)
{
    QLabel* item=new QLabel(this);
    QPixmap pix;
    if(t)
    {
        pix.load(":/new/statki/dwa");

    }else
    {
        pix.load(":/new/statki/trzy");
    }
    item->setPixmap(pix);
    ui->gracz2Table->setCellWidget(x.x(),x.y(),item);
}
