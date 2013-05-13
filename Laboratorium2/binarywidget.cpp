#include "binarywidget.h"
#include "ui_binarywidget.h"

BinaryWidget::BinaryWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BinaryWidget)
{
    ui->setupUi(this);
    /*tab[0]=ui->binarySpin1;
    tab[1]=ui->binarySpin2;
    tab[2]=ui->binarySpin3;
    tab[3]=ui->binarySpin4;*/
}

BinaryWidget::~BinaryWidget()
{
    delete ui;
}

void BinaryWidget::on_binarySpin1_valueChanged(int arg1)
{
    oblicz();

}



void BinaryWidget::on_binarySpin2_valueChanged(int arg1)
{
    oblicz();
}

void BinaryWidget::on_binarySpin3_valueChanged(int arg1)
{
    oblicz();
}

void BinaryWidget::on_binarySpin4_valueChanged(int arg1)
{
    oblicz();
}
int BinaryWidget::oblicz()
{
    int liczba=ui->binarySpin1->value()*8+ui->binarySpin2->value()*4+ui->binarySpin3->value()*2+ui->binarySpin4->value();
    ui->binaryLine->setText(QString("%1").arg(liczba));
    if(liczba==0)ui->dzielButton->setEnabled(false);
    else ui->dzielButton->setEnabled(true);
    if(liczba>8)ui->mnozButton->setEnabled(false);
    else ui->mnozButton->setEnabled(true);
    return liczba;

}

void BinaryWidget::on_dzielButton_clicked()
{
    int liczba=oblicz();
    int nowa=liczba/2;
    zamien(nowa);



}

void BinaryWidget::on_mnozButton_clicked()
{
    int liczba=oblicz();
    int nowa=liczba*2;
    zamien(nowa);

}
void BinaryWidget::zamien(int nowa)
{
    ui->binarySpin4->setValue(nowa%2);
    nowa/=2;
    ui->binarySpin3->setValue(nowa%2);
    nowa/=2;
    ui->binarySpin2->setValue(nowa%2);
    nowa/=2;
    ui->binarySpin1->setValue(nowa);

}
