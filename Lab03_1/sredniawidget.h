#ifndef SREDNIAWIDGET_H
#define SREDNIAWIDGET_H

#include <QWidget>

namespace Ui {
class SredniaWidget;
}

class SredniaWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit SredniaWidget(QWidget *parent = 0);
    ~SredniaWidget();
    void oblicz_wartosc();
    
private slots:


    void on_valueDialA_valueChanged(int position);

    void on_valueDialB_valueChanged(int position);

    void on_weightSliderA_valueChanged(int position);

    void on_weightSliderB_valueChanged(int position);

private:
    Ui::SredniaWidget *ui;

};

#endif // SREDNIAWIDGET_H
