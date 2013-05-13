#include "dane.h"
#include "ui_dane.h"

dane::dane(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dane)
{
    ui->setupUi(this);
    suma=0;
    losowanie=1;
}

dane::~dane()
{
    delete ui;
}
void dane::nowy(QString str, int val)
{
    QString dis=QString("Losowanie nr [%1] [Kostka %2] wynik: %3").arg(losowanie).arg(str).arg(val);
    suma+=val;
    ui->textDisplay->append(dis);
    ui->sredniaDisplay->setText(QString("%1").arg(suma/losowanie));
    ++losowanie;

}
