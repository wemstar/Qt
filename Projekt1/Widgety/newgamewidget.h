#ifndef NEWGAMEWIDGET_H
#define NEWGAMEWIDGET_H

#include <QWidget>

namespace Ui {
class NewGameWidget;
}

class NewGameWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit NewGameWidget(QWidget *parent = 0);
    ~NewGameWidget();
    
private:
    Ui::NewGameWidget *ui;
};

#endif // NEWGAMEWIDGET_H
