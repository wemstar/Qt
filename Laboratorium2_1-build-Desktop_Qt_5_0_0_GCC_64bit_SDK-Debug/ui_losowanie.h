/********************************************************************************
** Form generated from reading UI file 'losowanie.ui'
**
** Created: Sat Mar 23 17:35:20 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSOWANIE_H
#define UI_LOSOWANIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Losowanie
{
public:

    void setupUi(QWidget *Losowanie)
    {
        if (Losowanie->objectName().isEmpty())
            Losowanie->setObjectName(QStringLiteral("Losowanie"));
        Losowanie->resize(400, 300);

        retranslateUi(Losowanie);

        QMetaObject::connectSlotsByName(Losowanie);
    } // setupUi

    void retranslateUi(QWidget *Losowanie)
    {
        Losowanie->setWindowTitle(QApplication::translate("Losowanie", "Losowanie", 0));
    } // retranslateUi

};

namespace Ui {
    class Losowanie: public Ui_Losowanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSOWANIE_H
