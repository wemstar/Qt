#include "listwidget.h"
#include "ui_listwidget.h"
#include <QtCore>

ListWidget::ListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWidget)
{
    ui->setupUi(this);
}

ListWidget::~ListWidget()
{
    delete ui;
}

void ListWidget::on_addButton_clicked()
{
    QString str(" ");
    if(ui->valueCheck->isChecked())
    {
        str=str+ QString("%1").arg(ui->valueSpin->value());
    }
    if(ui->textCheck->isChecked())str=str+ QString(" \" %1 \" ").arg(ui->textLine->text());

    ui->textDisplay->append(str);


}
