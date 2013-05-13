/********************************************************************************
** Form generated from reading UI file 'dane.ui'
**
** Created: Sat Mar 23 17:57:38 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANE_H
#define UI_DANE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dane
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textDisplay;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *sredniaDisplay;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *dane)
    {
        if (dane->objectName().isEmpty())
            dane->setObjectName(QStringLiteral("dane"));
        dane->resize(430, 210);
        horizontalLayout = new QHBoxLayout(dane);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textDisplay = new QTextBrowser(dane);
        textDisplay->setObjectName(QStringLiteral("textDisplay"));

        horizontalLayout->addWidget(textDisplay);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(dane);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        sredniaDisplay = new QLineEdit(dane);
        sredniaDisplay->setObjectName(QStringLiteral("sredniaDisplay"));
        sredniaDisplay->setReadOnly(true);

        verticalLayout->addWidget(sredniaDisplay);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(dane);

        QMetaObject::connectSlotsByName(dane);
    } // setupUi

    void retranslateUi(QWidget *dane)
    {
        dane->setWindowTitle(QApplication::translate("dane", "Form", 0));
        label->setText(QApplication::translate("dane", "\305\232rednia", 0));
    } // retranslateUi

};

namespace Ui {
    class dane: public Ui_dane {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANE_H
