#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QWidget>

namespace Ui {
class ListWidget;
}

class ListWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit ListWidget(QWidget *parent = 0);
    ~ListWidget();
    
private slots:
    void on_addButton_clicked();

private:
    Ui::ListWidget *ui;
};

#endif // LISTWIDGET_H
