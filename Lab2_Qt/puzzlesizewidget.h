#ifndef PUZZLESIZEWIDGET_H
#define PUZZLESIZEWIDGET_H

#include <QFrame>

class PuzzleSizeWidget : public QFrame
{
    Q_OBJECT
    Q_PROPERTY( QSize m_size READ value WRITE setValue)
public:
    explicit PuzzleSizeWidget(QWidget *parent = 0);
    QSize value() const;
    QSize sizeHint() const;
    
signals:
    void valueChanged(const QSize&);
    void horizontalValueChange(int);
    void verticalValueChange(int);
    
public slots:
    void setValue(QSize val);
    
protected:
    QSize m_size;
};

#endif // PUZZLESIZEWIDGET_H
