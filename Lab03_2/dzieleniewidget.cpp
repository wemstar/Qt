#include "dzieleniewidget.h"
#include "ui_dzieleniewidget.h"

DzielenieWidget::DzielenieWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DzielenieWidget)
{
    ui->setupUi(this);
}

DzielenieWidget::~DzielenieWidget()
{
    delete ui;
}

void DzielenieWidget::on_minimumValue_textChanged(const QString &arg1)
{
    zmien_zakres();
}

void DzielenieWidget::on_maximumValue_textChanged(const QString &arg1)
{
    zmien_zakres();
}

void DzielenieWidget::on_XSpin_valueChanged(int arg1)
{
    podziel();
}

void DzielenieWidget::on_XSlider_valueChanged(int value)
{
    podziel();
}

void DzielenieWidget::on_XDial_valueChanged(int value)
{
    podziel();
}

void DzielenieWidget::on_YSpin_valueChanged(int arg1)
{
    podziel();
}

void DzielenieWidget::on_YDial_valueChanged(int value)
{
    podziel();
}
void DzielenieWidget::zmien_zakres()
{
    int max=ui->maximumValue->text().toInt();
    int min=ui->minimumValue->text().toInt();
    ui->XSpin->setRange(min,max);
    ui->XSlider->setRange(min,max);
    ui->XDial->setRange(min,max);

    ui->YSpin->setRange(min,max);
    ui->YSlider->setRange(min,max);
    ui->YDial->setRange(min,max);

}
void DzielenieWidget::podziel()
{
    ui->dzielenieValue->setText(QString("%1").arg((double)ui->XDial->value()/(double)ui->YDial->value()));

}
