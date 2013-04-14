#include "polestatki.h"
#include "ui_polestatki.h"

PoleStatki::PoleStatki(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PoleStatki)
{
    ui->setupUi(this);
}

PoleStatki::~PoleStatki()
{
    delete ui;
}
