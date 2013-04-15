#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionAdd_to_List_triggered();

    void on_actionClean_triggered();

    void on_addButton_clicked();

    void on_clearButton_clicked();

    void on_actionCreate_Zip_triggered();

    void on_nameEdit_textChanged(const QString );

    void on_surnameEdit_textChanged(const QString );

    void on_noEdit_textChanged(const QString );

private:
    Ui::MainWindow *ui;
    QStringList pliki;
    void status();
};

#endif // MAINWINDOW_H
