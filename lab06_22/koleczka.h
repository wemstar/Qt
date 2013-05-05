#ifndef KOLECZKA_H
#define KOLECZKA_H

#include <QWidget>

class Koleczka : public QWidget
{
    Q_OBJECT
public:
    explicit Koleczka(QWidget *parent = 0);
    
signals:
    
public slots:
    void setColor(QColor);
    void setRadius(int);
    void wyczysc();
protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);
    QColor color;
    int radius;
    QPixmap img;
//    QPixm punkt;

    
};

#endif // KOLECZKA_H
