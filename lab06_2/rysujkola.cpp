#include "rysujkola.h"
#include <QtCore>
#include <QtGui>


RysujKola::RysujKola(QWidget *parent) :
    QWidget(parent)
{
    radius=50;
    color=Qt::red;


}

QColor RysujKola::Color()
{
    return color;
}

int RysujKola::getRadius()
{
    return radius;
}

void RysujKola::mousePressEvent(QMouseEvent * ev)
{

    punkt=ev->pos();


    update();

}

void RysujKola::paintEvent(QPaintEvent * )
{
    QPainter paint(this);
    QPen pen(color,1);
    paint.setPen(pen);
    paint.drawEllipse(punkt,radius,radius);










}


void RysujKola::setColor()
{
    color=color==Qt::red?Qt::blue : Qt::red;
}

void RysujKola::setRadius(int rad)
{
    if(rad==radius)return;
    radius=rad;
    emit radiusChanged(rad);
}



