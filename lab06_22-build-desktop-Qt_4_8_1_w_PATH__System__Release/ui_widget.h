/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sun May 5 23:26:38 2013
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
#include <QtGui/QDial>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "koleczka.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QDial *radiusDial;
    QSpinBox *radiusSpin;
    QGroupBox *Color;
    QVBoxLayout *verticalLayout;
    QRadioButton *red;
    QRadioButton *blueRadio;
    QPushButton *clearButton;
    Koleczka *paintWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radiusDial = new QDial(groupBox);
        radiusDial->setObjectName(QString::fromUtf8("radiusDial"));
        radiusDial->setValue(5);

        verticalLayout_2->addWidget(radiusDial);

        radiusSpin = new QSpinBox(groupBox);
        radiusSpin->setObjectName(QString::fromUtf8("radiusSpin"));
        radiusSpin->setValue(5);

        verticalLayout_2->addWidget(radiusSpin);


        verticalLayout_3->addWidget(groupBox);

        Color = new QGroupBox(Widget);
        Color->setObjectName(QString::fromUtf8("Color"));
        verticalLayout = new QVBoxLayout(Color);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        red = new QRadioButton(Color);
        red->setObjectName(QString::fromUtf8("red"));
        red->setChecked(true);

        verticalLayout->addWidget(red);

        blueRadio = new QRadioButton(Color);
        blueRadio->setObjectName(QString::fromUtf8("blueRadio"));

        verticalLayout->addWidget(blueRadio);


        verticalLayout_3->addWidget(Color);

        clearButton = new QPushButton(Widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        verticalLayout_3->addWidget(clearButton);


        horizontalLayout->addLayout(verticalLayout_3);

        paintWidget = new Koleczka(Widget);
        paintWidget->setObjectName(QString::fromUtf8("paintWidget"));

        horizontalLayout->addWidget(paintWidget);


        retranslateUi(Widget);
        QObject::connect(radiusDial, SIGNAL(valueChanged(int)), radiusSpin, SLOT(setValue(int)));
        QObject::connect(radiusSpin, SIGNAL(valueChanged(int)), radiusDial, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Widget", "Radius", 0, QApplication::UnicodeUTF8));
        Color->setTitle(QApplication::translate("Widget", "Color", 0, QApplication::UnicodeUTF8));
        red->setText(QApplication::translate("Widget", "Red", 0, QApplication::UnicodeUTF8));
        blueRadio->setText(QApplication::translate("Widget", "blue", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("Widget", "Clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
