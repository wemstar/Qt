#include "koleczka.h"
#include <QtCore>
#include <QtGui>

Koleczka::Koleczka(QWidget *parent) :
    QWidget(parent)
{
    img=QImage(QSize(1024,1024),QImage::Format_ARGB32);
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
    img=QImage(QSize(1024,1024),QImage::Format_ARGB32);
    repaint();
}

void Koleczka::paintEvent(QPaintEvent *)
{

    QPainter widgetPainter(this);
    widgetPainter.drawImage(0,0,img);
}

void Koleczka::mousePressEvent(QMouseEvent * ev)
{
    QPainter paintImg(&img);
    paintImg.initFrom(this);
    paintImg.setPen(QPen(color));
    paintImg.drawEllipse(ev->pos(),radius,radius);
    paintImg.end();
    repaint();
}
