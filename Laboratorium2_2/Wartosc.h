#ifndef WARTOSC_H
#define WARTOSC_H

#include <QWidget>

namespace Ui {
class Wartosc;
}

class Wartosc : public QWidget
{
    Q_OBJECT
    
public:
    explicit Wartosc(QString str,QWidget *parent = 0);
    ~Wartosc();
signals:
    void zmiana(double);
    
private slots:
    void on_calkowiteDial_sliderMoved(int position);

    void on_rzeczywisteDial_sliderMoved(int position);

private:
    Ui::Wartosc *ui;
    double wartosc;
    QString title;
};

#endif // WARTOSC_H
