#ifndef RYSUJKOLA_H
#define RYSUJKOLA_H

#include <QWidget>

class RysujKola : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ Color  NOTIFY colorChanged)
    Q_PROPERTY(int radius READ getRadius WRITE setRadius NOTIFY radiusChanged)
public:
    explicit RysujKola(QWidget *parent = 0);
    QColor Color();
    int getRadius();
protected:
    void mousePressEvent(QMouseEvent *);
    void paintEvent(QPaintEvent *);
    
signals:
    void colorChanged(QColor);
    void radiusChanged(int);
    
public slots:
    void setColor();
    void setRadius(int rad);

private:
    QPoint punkt;
    QImage pixmap;
    int radius;
    QColor color;
    
};

#endif // RYSUJKOLA_H
