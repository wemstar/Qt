#include "sredniawidget.h"
#include "ui_sredniawidget.h"

SredniaWidget::SredniaWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SredniaWidget)
{
    ui->setupUi(this);
}

SredniaWidget::~SredniaWidget()
{
    delete ui;
}


void SredniaWidget::oblicz_wartosc()
{
    int x=ui->valueDialA->value()*(ui->weightSliderA->value());
    int y=ui->valueDialB->value()*(ui->weightSliderB->value());
    int srednia=(x+y);
    ui->sredniaLabel->setText(QString("%1").arg(srednia/100));
}

void SredniaWidget::on_valueDialA_valueChanged(int position)
{
    oblicz_wartosc();

}

void SredniaWidget::on_valueDialB_valueChanged(int position)
{
    oblicz_wartosc();
}

void SredniaWidget::on_weightSliderA_valueChanged(int position)
{

    ui->weightSliderB->setValue(100-position);
    ui->weightProgresB->setValue(100-position);
    oblicz_wartosc();
}

void SredniaWidget::on_weightSliderB_valueChanged(int position)
{

    ui->weightSliderA->setValue(100-position);
    ui->weightBarA->setValue(100-position);
    oblicz_wartosc();
}
