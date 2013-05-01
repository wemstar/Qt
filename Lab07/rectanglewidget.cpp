#include "rectanglewidget.h"
#include <QtCore>
#include <QtGui>


RectangleWidget::RectangleWidget(QWidget *parent) :
    QWidget(parent)
{
    color=QColor(255,255,255);
    wybrany=0;
}

QColor RectangleWidget::colo()
{
    return color;
}

void RectangleWidget::paintEvent(QPaintEvent *ev)
{


    QPainter pai(this);
    pai.setBrush(color);
    if(wybrany==0)pai.setPen(QPen(Qt::black,5));
    pai.drawRect(10,10,size().rwidth()/2,size().rheight()-15);
    pai.setPen(QPen());
    if(wybrany==1)pai.setPen(QPen(Qt::black,5));
    pai.setBrush(color2);
    pai.drawRect(size().rwidth()/2+10,10,size().rwidth()-15,size().rheight()-15);
    pai.setPen(QPen(Qt::red,20));
    pai.drawText(frameSize().width()/2-50,frameSize().height()/2," Clic to change active rectangle");

}

void RectangleWidget::mousePressEvent(QMouseEvent *ev)
{
    QPoint pozycja=ev->pos();
    if(pozycja.rx()<size().rwidth()/2)
    {
        wybrany=0;
        emit rectangleCange(color);
    }
    else
    {
        wybrany=1;
        emit rectangleCange(color2);
    }
    update();

}

void RectangleWidget::setColor(QColor col)
{
    if(wybrany==0)color =col;
    else color2=col;

    update();
}




