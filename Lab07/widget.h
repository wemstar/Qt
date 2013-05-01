#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:


    void on_redSlide_valueChanged(int value);

    void on_greenSlide_valueChanged(int value);

    void on_blueSlider_valueChanged(int value);
    void rectChange(QColor);

private:
    Ui::Widget *ui;
    void zmienColor();
};

#endif // WIDGET_H
