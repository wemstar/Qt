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

void MainWindow::on_actionSave_triggered()
{
    QFile plik(fileName);
    if(!plik.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append))return;
    QTextStream out(&plik);
    QString str=ui->plikText->toPlainText();
    out<<str;



}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this,"program kalkulator","progrma wczytuje dane z pliku i oblicz ich sumę");
}

void MainWindow::on_actionAboutQT_triggered()
{
    QMessageBox::aboutQt(this);
}
