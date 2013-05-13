#ifndef CONFIGURATIONDIALOG_H
#define CONFIGURATIONDIALOG_H

#include <QDialog>

namespace Ui {
class ConfigurationDialog;
}

class ConfigurationDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit ConfigurationDialog(QWidget *parent = 0);
    ~ConfigurationDialog();
    
private slots:
    void on_browseButton_clicked();

private:
    Ui::ConfigurationDialog *ui;
};

#endif // CONFIGURATIONDIALOG_H
