#include "daneadresowe.h"
#include "ui_daneadresowe.h"
#include <QtGui>
#include <QtCore>
DaneAdresowe::DaneAdresowe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DaneAdresowe)
{
    ui->setupUi(this);
}

DaneAdresowe::~DaneAdresowe()
{
    delete ui;
}

void DaneAdresowe::on_actionSave_triggered()
{
    QMessageBox msg(this);
    msg.setText(tr("You want to create new contact"));
    msg.setInformativeText(tr("Do you want to save changes?"));
    msg.setStandardButtons(QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel);
    int tryb=msg.exec();

    if(tryb==QMessageBox::Save)zapisz();
    if(tryb==QMessageBox::Discard)wyczysc();


}
void DaneAdresowe::zapisz()
{
    QString fileName=ui->filenameEdit->text();
    QFile plik(fileName);
    plik.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream in(&plik);
    in<< ui->nameEdit->text()<<"\n";
    in<< ui->mailEdit->text()<<"\n";
    in<< ui->phoneEdit->text()<<"\n";
    plik.close();


}
void DaneAdresowe::wyczysc()
{
    ui->nameEdit->clear();
    ui->mailEdit->clear();
    ui->phoneEdit->clear();
}

void DaneAdresowe::on_actionSave_as_triggered()
{
    QString fileName=QFileDialog::getSaveFileName(this);
    ui->filenameEdit->setText(fileName);

}

void DaneAdresowe::on_actionNew_triggered()
{
    on_actionSave_triggered();
    wyczysc();
}

void DaneAdresowe::on_actionExit_triggered()
{
    on_actionSave_triggered();
    this->close();
}

void DaneAdresowe::on_actionOpen_triggered()
{
    QString fileName=QFileDialog::getOpenFileName(this);
    QFile plik(fileName);
    plik.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream out(&plik);
    ui->nameEdit->setText(out.readLine());
    ui->mailEdit->setText(out.readLine());
    ui->phoneEdit->setText(out.readLine());
    plik.close();
}
