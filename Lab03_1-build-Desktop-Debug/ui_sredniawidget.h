/********************************************************************************
** Form generated from reading UI file 'sredniawidget.ui'
**
** Created: Mon Mar 25 19:41:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SREDNIAWIDGET_H
#define UI_SREDNIAWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SredniaWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *valueLabelA;
    QDial *valueDialA;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSlider *weightSliderA;
    QProgressBar *weightBarA;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *valueLabelB;
    QDial *valueDialB;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSlider *weightSliderB;
    QProgressBar *weightProgresB;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *sredniaLabel;

    void setupUi(QWidget *SredniaWidget)
    {
        if (SredniaWidget->objectName().isEmpty())
            SredniaWidget->setObjectName(QString::fromUtf8("SredniaWidget"));
        SredniaWidget->resize(678, 475);
        verticalLayout_3 = new QVBoxLayout(SredniaWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(SredniaWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        valueLabelA = new QLabel(groupBox);
        valueLabelA->setObjectName(QString::fromUtf8("valueLabelA"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        valueLabelA->setFont(font);

        horizontalLayout->addWidget(valueLabelA);

        valueDialA = new QDial(groupBox);
        valueDialA->setObjectName(QString::fromUtf8("valueDialA"));
        valueDialA->setMaximum(5);
        valueDialA->setValue(5);

        horizontalLayout->addWidget(valueDialA);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        weightSliderA = new QSlider(groupBox);
        weightSliderA->setObjectName(QString::fromUtf8("weightSliderA"));
        weightSliderA->setMaximum(100);
        weightSliderA->setValue(50);
        weightSliderA->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(weightSliderA);

        weightBarA = new QProgressBar(groupBox);
        weightBarA->setObjectName(QString::fromUtf8("weightBarA"));
        weightBarA->setValue(50);

        horizontalLayout_2->addWidget(weightBarA);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(SredniaWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        valueLabelB = new QLabel(groupBox_2);
        valueLabelB->setObjectName(QString::fromUtf8("valueLabelB"));
        valueLabelB->setFont(font);

        horizontalLayout_3->addWidget(valueLabelB);

        valueDialB = new QDial(groupBox_2);
        valueDialB->setObjectName(QString::fromUtf8("valueDialB"));
        valueDialB->setMaximum(5);
        valueDialB->setValue(5);

        horizontalLayout_3->addWidget(valueDialB);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        weightSliderB = new QSlider(groupBox_2);
        weightSliderB->setObjectName(QString::fromUtf8("weightSliderB"));
        weightSliderB->setMaximum(100);
        weightSliderB->setValue(50);
        weightSliderB->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(weightSliderB);

        weightProgresB = new QProgressBar(groupBox_2);
        weightProgresB->setObjectName(QString::fromUtf8("weightProgresB"));
        weightProgresB->setValue(50);
        weightProgresB->setInvertedAppearance(true);

        horizontalLayout_4->addWidget(weightProgresB);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addWidget(groupBox_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(SredniaWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_6);

        sredniaLabel = new QLabel(SredniaWidget);
        sredniaLabel->setObjectName(QString::fromUtf8("sredniaLabel"));
        sredniaLabel->setFont(font);

        horizontalLayout_5->addWidget(sredniaLabel);


        verticalLayout_3->addLayout(horizontalLayout_5);


        retranslateUi(SredniaWidget);
        QObject::connect(valueDialA, SIGNAL(sliderMoved(int)), valueLabelA, SLOT(setNum(int)));
        QObject::connect(valueDialB, SIGNAL(sliderMoved(int)), valueLabelB, SLOT(setNum(int)));
        QObject::connect(weightSliderB, SIGNAL(sliderMoved(int)), weightProgresB, SLOT(setValue(int)));
        QObject::connect(weightSliderA, SIGNAL(sliderMoved(int)), weightBarA, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(SredniaWidget);
    } // setupUi

    void retranslateUi(QWidget *SredniaWidget)
    {
        SredniaWidget->setWindowTitle(QApplication::translate("SredniaWidget", "SredniaWidget", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SredniaWidget", "A", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SredniaWidget", "value", 0, QApplication::UnicodeUTF8));
        valueLabelA->setText(QApplication::translate("SredniaWidget", "5", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SredniaWidget", "weight", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("SredniaWidget", "GroupBox", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SredniaWidget", "value", 0, QApplication::UnicodeUTF8));
        valueLabelB->setText(QApplication::translate("SredniaWidget", "5", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SredniaWidget", "weight", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SredniaWidget", "Srednia wazona z a  i b =", 0, QApplication::UnicodeUTF8));
        sredniaLabel->setText(QApplication::translate("SredniaWidget", "5", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SredniaWidget: public Ui_SredniaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SREDNIAWIDGET_H
