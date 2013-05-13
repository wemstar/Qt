#include "puzzlesizewidget.h"

PuzzleSizeWidget::PuzzleSizeWidget(QWidget *parent) :
    QFrame(parent)
{
}

QSize PuzzleSizeWidget::value() const
{
    return m_size;
}

void PuzzleSizeWidget::setValue(QSize val)
{
    if(val==m_size) return ;
    m_size=val;
    update();
}
QSize PuzzleSizeWidget::sizeHint() const
{
    return QSize(300,300);
}
