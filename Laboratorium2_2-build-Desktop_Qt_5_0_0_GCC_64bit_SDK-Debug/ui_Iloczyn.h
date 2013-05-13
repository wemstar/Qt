/********************************************************************************
** Form generated from reading UI file 'Iloczyn.ui'
**
** Created: Sat Mar 23 18:29:11 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ILOCZYN_H
#define UI_ILOCZYN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Iloczyn
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *iloczynDisplay;

    void setupUi(QWidget *Iloczyn)
    {
        if (Iloczyn->objectName().isEmpty())
            Iloczyn->setObjectName(QStringLiteral("Iloczyn"));
        Iloczyn->resize(230, 49);
        horizontalLayout = new QHBoxLayout(Iloczyn);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        iloczynDisplay = new QLineEdit(Iloczyn);
        iloczynDisplay->setObjectName(QStringLiteral("iloczynDisplay"));
        iloczynDisplay->setReadOnly(true);

        horizontalLayout->addWidget(iloczynDisplay);


        retranslateUi(Iloczyn);

        QMetaObject::connectSlotsByName(Iloczyn);
    } // setupUi

    void retranslateUi(QWidget *Iloczyn)
    {
        Iloczyn->setWindowTitle(QApplication::translate("Iloczyn", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Iloczyn: public Ui_Iloczyn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ILOCZYN_H
