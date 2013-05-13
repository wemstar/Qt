#include "Iloczyn.h"
#include "ui_Iloczyn.h"

Iloczyn::Iloczyn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Iloczyn)
{
    ui->setupUi(this);
    x=0;
    y=0;
}

Iloczyn::~Iloczyn()
{
    delete ui;
}
void Iloczyn::noweX(double nx)
{
    x=nx;
    ui->iloczynDisplay->setText(QString("%1 * %2 = %3").arg(x).arg(y).arg(x*y));

}
void Iloczyn::noweY(double ny)
{
    y=ny;
    ui->iloczynDisplay->setText(QString("%1 * %2 = %3").arg(x).arg(y).arg(x*y));

}
