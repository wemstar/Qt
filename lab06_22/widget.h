#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtCore>
#include <QtGui>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
signals:
    void zmianaPromienia(int);
    void zmianaKoloru(QColor);
    
private slots:
    void on_radiusDial_valueChanged(int value);

    void on_red_clicked(bool checked);

    void on_blueRadio_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
