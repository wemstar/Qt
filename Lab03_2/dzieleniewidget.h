#ifndef DZIELENIEWIDGET_H
#define DZIELENIEWIDGET_H

#include <QWidget>

namespace Ui {
class DzielenieWidget;
}

class DzielenieWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit DzielenieWidget(QWidget *parent = 0);
    ~DzielenieWidget();
    
private slots:
    void on_minimumValue_textChanged(const QString &arg1);

    void on_maximumValue_textChanged(const QString &arg1);

    void on_XSpin_valueChanged(int arg1);

    void on_XSlider_valueChanged(int value);

    void on_XDial_valueChanged(int value);

    void on_YSpin_valueChanged(int arg1);

    void on_YDial_valueChanged(int value);

private:
    Ui::DzielenieWidget *ui;
    void podziel();
    void zmien_zakres();
};

#endif // DZIELENIEWIDGET_H
