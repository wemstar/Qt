#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(this,SIGNAL(zmianaKoloru(QColor)),ui->paintWidget,SLOT(setColor(QColor)));
    connect(this,SIGNAL(zmianaPromienia(int)),ui->paintWidget,SLOT(setRadius(int)));
    emit zmianaKoloru(Qt::blue);
    emit zmianaPromienia(ui->radiusDial->value());

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_radiusDial_valueChanged(int value)
{
    emit zmianaPromienia(value);
}

void Widget::on_red_clicked(bool checked)
{
    emit zmianaKoloru(Qt::red);
}

void Widget::on_blueRadio_clicked()
{
    emit zmianaKoloru(Qt::blue);
}
