#ifndef MANUALWIDGET_H
#define MANUALWIDGET_H

#include <QWidget>

namespace Ui {
class ManualWidget;
}

class ManualWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit ManualWidget(QWidget *parent = 0);
    ~ManualWidget();
    
private:
    Ui::ManualWidget *ui;
};

#endif // MANUALWIDGET_H
