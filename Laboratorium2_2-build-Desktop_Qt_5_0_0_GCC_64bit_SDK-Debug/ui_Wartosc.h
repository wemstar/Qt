/********************************************************************************
** Form generated from reading UI file 'Wartosc.ui'
**
** Created: Sat Mar 23 18:31:25 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARTOSC_H
#define UI_WARTOSC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wartosc
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QDial *calkowiteDial;
    QDial *rzeczywisteDial;

    void setupUi(QWidget *Wartosc)
    {
        if (Wartosc->objectName().isEmpty())
            Wartosc->setObjectName(QStringLiteral("Wartosc"));
        Wartosc->resize(250, 154);
        verticalLayout = new QVBoxLayout(Wartosc);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(Wartosc);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        calkowiteDial = new QDial(groupBox);
        calkowiteDial->setObjectName(QStringLiteral("calkowiteDial"));

        horizontalLayout->addWidget(calkowiteDial);

        rzeczywisteDial = new QDial(groupBox);
        rzeczywisteDial->setObjectName(QStringLiteral("rzeczywisteDial"));

        horizontalLayout->addWidget(rzeczywisteDial);


        verticalLayout->addWidget(groupBox);


        retranslateUi(Wartosc);

        QMetaObject::connectSlotsByName(Wartosc);
    } // setupUi

    void retranslateUi(QWidget *Wartosc)
    {
        Wartosc->setWindowTitle(QApplication::translate("Wartosc", "Form", 0));
        groupBox->setTitle(QApplication::translate("Wartosc", "GroupBox", 0));
    } // retranslateUi

};

namespace Ui {
    class Wartosc: public Ui_Wartosc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARTOSC_H
