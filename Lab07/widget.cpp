#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->rectWidg,SIGNAL(rectangleCange(QColor)),this,SLOT(rectChange(QColor)));
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_redSlide_valueChanged(int value)
{
    zmienColor();
}

void Widget::on_greenSlide_valueChanged(int value)
{
    zmienColor();
}

void Widget::on_blueSlider_valueChanged(int value)
{
    zmienColor();
}

void Widget::rectChange(QColor col)
{
    ui->blueSlider->setValue(col.blue());
    ui->redSlide->setValue(col.red());
    ui->greenSlide->setValue(col.green());

}

void Widget::zmienColor()
{
    QColor col=QColor(ui->redSlide->value(),ui->greenSlide->value() ,ui->blueSlider->value());

    ui->rectWidg->setColor(col);
}
