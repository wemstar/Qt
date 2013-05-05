#include "koleczka.h"
#include <QtCore>
#include <QtGui>

Koleczka::Koleczka(QWidget *parent) :
    QWidget(parent)
{
    img=QPixmap(QSize(1024,1024));
    img.fill();
}

void Koleczka::setColor(QColor col)
{
    color=col;
}

void Koleczka::setRadius(int rad)
{
    radius=rad;
}

void Koleczka::wyczysc()
{
   img.fill();
    repaint();
}

void Koleczka::paintEvent(QPaintEvent *)
{

    QPainter widgetPainter(this);
    widgetPainter.drawPixmap(0,0,size().width(),size().height(),img);
}

void Koleczka::mousePressEvent(QMouseEvent * ev)
{
    img=img.scaled(size());
    QPainter paintImg(&img);
    paintImg.initFrom(this);

    paintImg.setPen(QPen(color));
    paintImg.drawEllipse(ev->pos(),radius,radius);
    paintImg.end();
    repaint();
}
