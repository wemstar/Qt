#include "kostka.h"
#include "ui_kostka.h"
#include <cstdlib>

Kostka::Kostka(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Kostka)
{
    ui->setupUi(this);
}

Kostka::~Kostka()
{
    delete ui;
}

void Kostka::on_losujButton_clicked()
{
    int liczba=rand()%6+1;
    QString nazwa=ui->lineEdit->text();
    emit wylosowane(nazwa,liczba);
    ui->losujDisplay->display(liczba);

}
