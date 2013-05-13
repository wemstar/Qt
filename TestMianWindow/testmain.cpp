#include "testmain.h"
#include "ui_testmain.h"

TestMain::TestMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestMain)
{
    ui->setupUi(this);
}

TestMain::~TestMain()
{
    delete ui;
}
