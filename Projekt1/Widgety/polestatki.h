#ifndef POLESTATKI_H
#define POLESTATKI_H

#include <QWidget>

namespace Ui {
class PoleStatki;
}

class PoleStatki : public QWidget
{
    Q_OBJECT
    
public:
    explicit PoleStatki(QWidget *parent = 0);
    ~PoleStatki();
    
private:
    Ui::PoleStatki *ui;
};

#endif // POLESTATKI_H
