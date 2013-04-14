#include "newgamewidget.h"
#include "ui_newgamewidget.h"

NewGameWidget::NewGameWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewGameWidget)
{
    ui->setupUi(this);
}

NewGameWidget::~NewGameWidget()
{
    delete ui;
}
