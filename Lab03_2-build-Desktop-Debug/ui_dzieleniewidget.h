/********************************************************************************
** Form generated from reading UI file 'dzieleniewidget.ui'
**
** Created: Mon Mar 25 20:59:15 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DZIELENIEWIDGET_H
#define UI_DZIELENIEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDial>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DzielenieWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSpinBox *XSpin;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSlider *XSlider;
    QDial *XDial;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *YSpin;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSlider *YSlider;
    QDial *YDial;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *dzielenieValue;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *minimumValue;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLineEdit *maximumValue;

    void setupUi(QWidget *DzielenieWidget)
    {
        if (DzielenieWidget->objectName().isEmpty())
            DzielenieWidget->setObjectName(QString::fromUtf8("DzielenieWidget"));
        DzielenieWidget->resize(506, 396);
        verticalLayout_3 = new QVBoxLayout(DzielenieWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox = new QGroupBox(DzielenieWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        XSpin = new QSpinBox(groupBox);
        XSpin->setObjectName(QString::fromUtf8("XSpin"));
        XSpin->setMaximum(5);
        XSpin->setValue(1);

        verticalLayout->addWidget(XSpin);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        XSlider = new QSlider(groupBox);
        XSlider->setObjectName(QString::fromUtf8("XSlider"));
        XSlider->setMaximum(5);
        XSlider->setValue(1);
        XSlider->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(XSlider);

        XDial = new QDial(groupBox);
        XDial->setObjectName(QString::fromUtf8("XDial"));

        horizontalLayout->addWidget(XDial);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(DzielenieWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        YSpin = new QSpinBox(groupBox_2);
        YSpin->setObjectName(QString::fromUtf8("YSpin"));
        YSpin->setMaximum(5);
        YSpin->setValue(1);

        verticalLayout_2->addWidget(YSpin);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        YSlider = new QSlider(groupBox_2);
        YSlider->setObjectName(QString::fromUtf8("YSlider"));
        YSlider->setMaximum(5);
        YSlider->setValue(1);
        YSlider->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(YSlider);

        YDial = new QDial(groupBox_2);
        YDial->setObjectName(QString::fromUtf8("YDial"));
        YDial->setMaximum(5);
        YDial->setValue(1);

        horizontalLayout_2->addWidget(YDial);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(groupBox_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(DzielenieWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label);

        dzielenieValue = new QLineEdit(DzielenieWidget);
        dzielenieValue->setObjectName(QString::fromUtf8("dzielenieValue"));
        dzielenieValue->setReadOnly(true);

        horizontalLayout_4->addWidget(dzielenieValue);


        verticalLayout_3->addLayout(horizontalLayout_4);

        groupBox_3 = new QGroupBox(DzielenieWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        minimumValue = new QLineEdit(groupBox_3);
        minimumValue->setObjectName(QString::fromUtf8("minimumValue"));

        horizontalLayout_5->addWidget(minimumValue);

        horizontalSpacer_3 = new QSpacerItem(34, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        maximumValue = new QLineEdit(groupBox_3);
        maximumValue->setObjectName(QString::fromUtf8("maximumValue"));

        horizontalLayout_5->addWidget(maximumValue);


        verticalLayout_3->addWidget(groupBox_3);


        retranslateUi(DzielenieWidget);
        QObject::connect(XSpin, SIGNAL(valueChanged(int)), XSlider, SLOT(setValue(int)));
        QObject::connect(XSpin, SIGNAL(valueChanged(int)), XDial, SLOT(setValue(int)));
        QObject::connect(XSlider, SIGNAL(valueChanged(int)), XDial, SLOT(setValue(int)));
        QObject::connect(XSlider, SIGNAL(valueChanged(int)), XSpin, SLOT(setValue(int)));
        QObject::connect(XDial, SIGNAL(valueChanged(int)), XSlider, SLOT(setValue(int)));
        QObject::connect(XDial, SIGNAL(valueChanged(int)), XSpin, SLOT(setValue(int)));
        QObject::connect(YSpin, SIGNAL(valueChanged(int)), YDial, SLOT(setValue(int)));
        QObject::connect(YSpin, SIGNAL(valueChanged(int)), YSlider, SLOT(setValue(int)));
        QObject::connect(YSlider, SIGNAL(valueChanged(int)), YDial, SLOT(setValue(int)));
        QObject::connect(YSlider, SIGNAL(valueChanged(int)), YSpin, SLOT(setValue(int)));
        QObject::connect(YDial, SIGNAL(valueChanged(int)), YSpin, SLOT(setValue(int)));
        QObject::connect(YDial, SIGNAL(valueChanged(int)), YSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(DzielenieWidget);
    } // setupUi

    void retranslateUi(QWidget *DzielenieWidget)
    {
        DzielenieWidget->setWindowTitle(QApplication::translate("DzielenieWidget", "DzielenieWidget", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DzielenieWidget", "X", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("DzielenieWidget", "Y", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DzielenieWidget", "x/y=", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("DzielenieWidget", "Setting for x and y values", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DzielenieWidget", "minimum", 0, QApplication::UnicodeUTF8));
        minimumValue->setText(QApplication::translate("DzielenieWidget", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DzielenieWidget", "maximum", 0, QApplication::UnicodeUTF8));
        maximumValue->setText(QApplication::translate("DzielenieWidget", "5", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DzielenieWidget: public Ui_DzielenieWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DZIELENIEWIDGET_H
