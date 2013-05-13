#ifndef ILOCZYN_H
#define ILOCZYN_H

#include <QWidget>

namespace Ui {
class Iloczyn;
}

class Iloczyn : public QWidget
{
    Q_OBJECT
    
public:
    explicit Iloczyn(QWidget *parent = 0);
    ~Iloczyn();
public slots:
    void noweX(double);
    void noweY(double);

    
private:
    Ui::Iloczyn *ui;
    double x;
    double y;
};

#endif // ILOCZYN_H
