#ifndef KOSTKA_H
#define KOSTKA_H

#include <QWidget>

namespace Ui {
class Kostka;
}

class Kostka : public QWidget
{
    Q_OBJECT
    
public:
    explicit Kostka(QWidget *parent = 0);
    ~Kostka();
signals:
    void wylosowane(QString str,int val);

    
private slots:
    void on_losujButton_clicked();

private:
    Ui::Kostka *ui;
};

#endif // KOSTKA_H
