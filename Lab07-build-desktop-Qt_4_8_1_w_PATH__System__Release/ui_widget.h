/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Wed May 1 20:56:18 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "rectanglewidget.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *redSlide;
    QSpinBox *redSpin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *greenSlide;
    QSpinBox *greenSpin;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *blueSlider;
    QSpinBox *blueSpin;
    QLabel *label_4;
    RectangleWidget *rectWidg;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(484, 496);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        redSlide = new QSlider(Widget);
        redSlide->setObjectName(QString::fromUtf8("redSlide"));
        redSlide->setMaximum(255);
        redSlide->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(redSlide);

        redSpin = new QSpinBox(Widget);
        redSpin->setObjectName(QString::fromUtf8("redSpin"));
        redSpin->setMaximum(255);

        horizontalLayout->addWidget(redSpin);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        greenSlide = new QSlider(Widget);
        greenSlide->setObjectName(QString::fromUtf8("greenSlide"));
        greenSlide->setMaximum(255);
        greenSlide->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(greenSlide);

        greenSpin = new QSpinBox(Widget);
        greenSpin->setObjectName(QString::fromUtf8("greenSpin"));
        greenSpin->setMaximum(255);

        horizontalLayout_2->addWidget(greenSpin);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        blueSlider = new QSlider(Widget);
        blueSlider->setObjectName(QString::fromUtf8("blueSlider"));
        blueSlider->setMaximum(255);
        blueSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(blueSlider);

        blueSpin = new QSpinBox(Widget);
        blueSpin->setObjectName(QString::fromUtf8("blueSpin"));
        blueSpin->setMaximum(255);

        horizontalLayout_3->addWidget(blueSpin);


        verticalLayout->addLayout(horizontalLayout_3);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        verticalLayout_2->addLayout(verticalLayout);

        rectWidg = new RectangleWidget(Widget);
        rectWidg->setObjectName(QString::fromUtf8("rectWidg"));

        verticalLayout_2->addWidget(rectWidg);


        retranslateUi(Widget);
        QObject::connect(redSlide, SIGNAL(valueChanged(int)), redSpin, SLOT(setValue(int)));
        QObject::connect(greenSlide, SIGNAL(valueChanged(int)), greenSpin, SLOT(setValue(int)));
        QObject::connect(blueSlider, SIGNAL(valueChanged(int)), blueSpin, SLOT(setValue(int)));
        QObject::connect(redSpin, SIGNAL(valueChanged(int)), redSlide, SLOT(setValue(int)));
        QObject::connect(greenSpin, SIGNAL(valueChanged(int)), greenSlide, SLOT(setValue(int)));
        QObject::connect(blueSpin, SIGNAL(valueChanged(int)), blueSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Red", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "Green", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "Blue", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "Preview", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
