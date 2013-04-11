#ifndef DANEADRESOWE_H
#define DANEADRESOWE_H

#include <QMainWindow>

namespace Ui {
class DaneAdresowe;
}

class DaneAdresowe : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit DaneAdresowe(QWidget *parent = 0);
    ~DaneAdresowe();
    
private slots:
    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionNew_triggered();

    void on_actionExit_triggered();

    void on_actionOpen_triggered();

private:
    void zapisz();
    void wyczysc();
    Ui::DaneAdresowe *ui;
};

#endif // DANEADRESOWE_H
