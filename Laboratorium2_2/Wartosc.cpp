#include "Wartosc.h"
#include "ui_Wartosc.h"

Wartosc::Wartosc(QString str, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Wartosc)
{
    title=str;
    wartosc=0;
    ui->setupUi(this);
    ui->groupBox->setTitle(str+QString(" =  %1").arg(wartosc));
}

Wartosc::~Wartosc()
{
    delete ui;
}

void Wartosc::on_calkowiteDial_sliderMoved(int position)
{
    wartosc=position+double(ui->rzeczywisteDial->value())/100;
    ui->groupBox->setTitle(title+QString(" = %1").arg(wartosc));
    emit zmiana(wartosc);
}

void Wartosc::on_rzeczywisteDial_sliderMoved(int position)
{
    wartosc=ui->calkowiteDial->value()+double(position)/100;
    ui->groupBox->setTitle(title+QString(" = %1").arg(wartosc));
    emit zmiana(wartosc);

}
