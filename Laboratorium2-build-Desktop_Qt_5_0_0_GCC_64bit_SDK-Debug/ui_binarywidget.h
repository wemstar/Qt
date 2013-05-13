/********************************************************************************
** Form generated from reading UI file 'binarywidget.ui'
**
** Created: Sat Mar 23 16:38:33 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINARYWIDGET_H
#define UI_BINARYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BinaryWidget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *binarySpin1;
    QSpinBox *binarySpin2;
    QSpinBox *binarySpin3;
    QSpinBox *binarySpin4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *binaryLine;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *mnozButton;
    QPushButton *dzielButton;
    QPushButton *exitButton;

    void setupUi(QWidget *BinaryWidget)
    {
        if (BinaryWidget->objectName().isEmpty())
            BinaryWidget->setObjectName(QStringLiteral("BinaryWidget"));
        BinaryWidget->resize(613, 300);
        horizontalLayout_3 = new QHBoxLayout(BinaryWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(BinaryWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        binarySpin1 = new QSpinBox(BinaryWidget);
        binarySpin1->setObjectName(QStringLiteral("binarySpin1"));
        binarySpin1->setMaximum(1);

        horizontalLayout->addWidget(binarySpin1);

        binarySpin2 = new QSpinBox(BinaryWidget);
        binarySpin2->setObjectName(QStringLiteral("binarySpin2"));
        binarySpin2->setMaximum(1);

        horizontalLayout->addWidget(binarySpin2);

        binarySpin3 = new QSpinBox(BinaryWidget);
        binarySpin3->setObjectName(QStringLiteral("binarySpin3"));
        binarySpin3->setMaximum(1);

        horizontalLayout->addWidget(binarySpin3);

        binarySpin4 = new QSpinBox(BinaryWidget);
        binarySpin4->setObjectName(QStringLiteral("binarySpin4"));
        binarySpin4->setMaximum(1);

        horizontalLayout->addWidget(binarySpin4);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(BinaryWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        binaryLine = new QLineEdit(BinaryWidget);
        binaryLine->setObjectName(QStringLiteral("binaryLine"));
        binaryLine->setReadOnly(true);

        horizontalLayout_2->addWidget(binaryLine);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(179, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mnozButton = new QPushButton(BinaryWidget);
        mnozButton->setObjectName(QStringLiteral("mnozButton"));

        verticalLayout->addWidget(mnozButton);

        dzielButton = new QPushButton(BinaryWidget);
        dzielButton->setObjectName(QStringLiteral("dzielButton"));

        verticalLayout->addWidget(dzielButton);

        exitButton = new QPushButton(BinaryWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        verticalLayout->addWidget(exitButton);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(BinaryWidget);
        QObject::connect(exitButton, SIGNAL(clicked()), BinaryWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(BinaryWidget);
    } // setupUi

    void retranslateUi(QWidget *BinaryWidget)
    {
        BinaryWidget->setWindowTitle(QApplication::translate("BinaryWidget", "BinaryWidget", 0));
        label->setText(QApplication::translate("BinaryWidget", "Binary", 0));
        label_2->setText(QApplication::translate("BinaryWidget", "Decimal", 0));
        mnozButton->setText(QApplication::translate("BinaryWidget", "*2", 0));
        dzielButton->setText(QApplication::translate("BinaryWidget", "/2", 0));
        exitButton->setText(QApplication::translate("BinaryWidget", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class BinaryWidget: public Ui_BinaryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINARYWIDGET_H
