#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->dialRadius,SIGNAL(valueChanged(int)),ui->DrawCircle,SLOT(setRadius(int)));
    connect(ui->blueButton,SIGNAL(toggled(bool)),ui->DrawCircle,SLOT(setColor()));

}

Widget::~Widget()
{
    delete ui;
}
