/********************************************************************************
** Form generated from reading UI file 'kostka.ui'
**
** Created: Sat Mar 23 17:46:31 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOSTKA_H
#define UI_KOSTKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kostka
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *losujButton;
    QLCDNumber *losujDisplay;

    void setupUi(QWidget *Kostka)
    {
        if (Kostka->objectName().isEmpty())
            Kostka->setObjectName(QStringLiteral("Kostka"));
        Kostka->resize(239, 90);
        verticalLayout = new QVBoxLayout(Kostka);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Kostka);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Kostka);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        losujButton = new QPushButton(Kostka);
        losujButton->setObjectName(QStringLiteral("losujButton"));

        horizontalLayout_2->addWidget(losujButton);

        losujDisplay = new QLCDNumber(Kostka);
        losujDisplay->setObjectName(QStringLiteral("losujDisplay"));

        horizontalLayout_2->addWidget(losujDisplay);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Kostka);

        QMetaObject::connectSlotsByName(Kostka);
    } // setupUi

    void retranslateUi(QWidget *Kostka)
    {
        Kostka->setWindowTitle(QApplication::translate("Kostka", "Form", 0));
        label->setText(QApplication::translate("Kostka", "Nazwa", 0));
        losujButton->setText(QApplication::translate("Kostka", "Losuj", 0));
    } // retranslateUi

};

namespace Ui {
    class Kostka: public Ui_Kostka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOSTKA_H
