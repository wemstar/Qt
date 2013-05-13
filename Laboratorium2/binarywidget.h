#ifndef BINARYWIDGET_H
#define BINARYWIDGET_H

#include <QWidget>

namespace Ui {
class BinaryWidget;
}

class BinaryWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit BinaryWidget(QWidget *parent = 0);
    ~BinaryWidget();
    
private slots:
    void on_binarySpin1_valueChanged(int arg1);

    void on_binarySpin2_valueChanged(int arg1);

    void on_binarySpin3_valueChanged(int arg1);

    void on_binarySpin4_valueChanged(int arg1);

    void on_dzielButton_clicked();

    void on_mnozButton_clicked();

private:
    Ui::BinaryWidget *ui;
    int oblicz();
    void zamien(int);
    //QSpinBox* tab[4];
};

#endif // BINARYWIDGET_H
