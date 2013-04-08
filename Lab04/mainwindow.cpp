#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    fileName = QFileDialog::getOpenFileName();
    QFile plik(fileName);
    if(!plik.open(QIODevice::ReadOnly|QIODevice::Text))return;
    QTextStream in(&plik);
    double suma=0;
    ui->plikText->clear();
    ui->filnameText->setText(fileName);
    do
    {
        double liczba;
        in>>liczba;
        ui->plikText->append(QString("%1\n").arg(liczba));
        suma+=liczba;
    }while(!in.atEnd());
    ui->wynikText->setText(QString("%1").arg(suma));
}
