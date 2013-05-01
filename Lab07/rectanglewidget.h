#ifndef RECTANGLEWIDGET_H
#define RECTANGLEWIDGET_H

#include <QWidget>

class RectangleWidget : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ colo WRITE setColor)

public:
    explicit RectangleWidget(QWidget *parent = 0);
    QColor colo();

protected:
    void paintEvent(QPaintEvent * ev);
    void mousePressEvent(QMouseEvent * ev);
    
signals:
    void rectangleCange(QColor col);

    
public slots:
    void setColor(QColor col);


private:
    QColor color;
    QColor color2;
    int wybrany;
    
};

#endif // RECTANGLEWIDGET_H
