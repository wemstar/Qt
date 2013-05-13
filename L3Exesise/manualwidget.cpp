#include "manualwidget.h"
#include "ui_manualwidget.h"

ManualWidget::ManualWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManualWidget)
{
    ui->setupUi(this);
}

ManualWidget::~ManualWidget()
{
    delete ui;
}
