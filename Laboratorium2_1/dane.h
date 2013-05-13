#ifndef DANE_H
#define DANE_H

#include <QWidget>

namespace Ui {
class dane;
}

class dane : public QWidget
{
    Q_OBJECT
    
public:
    explicit dane(QWidget *parent = 0);
    ~dane();
public slots:
    void nowy(QString,int);

    
private:
    Ui::dane *ui;
    double suma;
    int losowanie;
};

#endif // DANE_H
