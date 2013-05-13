/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Mon Apr 22 20:38:54 2013
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
#include "rysujkola.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QDial *dialRadius;
    QSpinBox *spinRadius;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *redButton;
    QRadioButton *blueButton;
    QPushButton *clearButton;
    RysujKola *DrawCircle;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(490, 317);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dialRadius = new QDial(groupBox);
        dialRadius->setObjectName(QString::fromUtf8("dialRadius"));

        verticalLayout->addWidget(dialRadius);

        spinRadius = new QSpinBox(groupBox);
        spinRadius->setObjectName(QString::fromUtf8("spinRadius"));

        verticalLayout->addWidget(spinRadius);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        redButton = new QRadioButton(groupBox_2);
        redButton->setObjectName(QString::fromUtf8("redButton"));
        redButton->setChecked(true);

        verticalLayout_2->addWidget(redButton);

        blueButton = new QRadioButton(groupBox_2);
        blueButton->setObjectName(QString::fromUtf8("blueButton"));

        verticalLayout_2->addWidget(blueButton);


        verticalLayout_3->addWidget(groupBox_2);

        clearButton = new QPushButton(Widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        verticalLayout_3->addWidget(clearButton);


        horizontalLayout->addLayout(verticalLayout_3);

        DrawCircle = new RysujKola(Widget);
        DrawCircle->setObjectName(QString::fromUtf8("DrawCircle"));

        horizontalLayout->addWidget(DrawCircle);


        retranslateUi(Widget);
        QObject::connect(dialRadius, SIGNAL(valueChanged(int)), spinRadius, SLOT(setValue(int)));
        QObject::connect(spinRadius, SIGNAL(valueChanged(int)), dialRadius, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        redButton->setText(QApplication::translate("Widget", "Red", 0, QApplication::UnicodeUTF8));
        blueButton->setText(QApplication::translate("Widget", "Blue", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("Widget", "Clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
