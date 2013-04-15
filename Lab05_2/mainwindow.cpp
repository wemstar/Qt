#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

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

void MainWindow::on_actionAdd_to_List_triggered()
{
    pliki<< QFileDialog::getOpenFileNames(this);
    ui->fileList->clear();
    ui->fileList->append(pliki.join("\n"));
}

void MainWindow::on_actionClean_triggered()
{
    pliki.clear();
    ui->fileList->clear();
}

void MainWindow::on_addButton_clicked()
{
    on_actionAdd_to_List_triggered();
}

void MainWindow::on_clearButton_clicked()
{
    on_actionAdd_to_List_triggered();
}

void MainWindow::on_actionCreate_Zip_triggered()
{
    QProcess zip(this);
    QStringList opcje;
    opcje <<QString("-v")<< QString("%1_%2_%3").arg(ui->surnameEdit->text()).arg(ui->nameEdit->text()).arg(ui->noEdit->text());
    opcje << pliki;
    zip.start("zip",opcje);
    zip.waitForFinished();
    ui->fileOutput->append(zip.readAllStandardOutput());
}

void MainWindow::on_nameEdit_textChanged(const QString )
{
    status();
}

void MainWindow::on_surnameEdit_textChanged(const QString )
{
    status();
}

void MainWindow::on_noEdit_textChanged(const QString )
{
    status();
}
void MainWindow::status()
{
   ui->procesLabel->setText( QString("zip -v %1_%2_%3 <file1..> <file2..> ...").arg(ui->surnameEdit->text()).arg(ui->nameEdit->text()).arg(ui->noEdit->text()));
}
