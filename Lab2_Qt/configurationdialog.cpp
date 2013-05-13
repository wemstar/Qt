#include "configurationdialog.h"
#include "ui_configurationdialog.h"
#include <QtCore>
#include <QtGui>

ConfigurationDialog::ConfigurationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigurationDialog)
{
    ui->setupUi(this);
}

ConfigurationDialog::~ConfigurationDialog()
{
    delete ui;
}

void ConfigurationDialog::on_browseButton_clicked()
{
    QString fileName=QFileDialog::getOpenFileName(this);
    ui->fileEdit->setText(fileName);
}
