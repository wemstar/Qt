/********************************************************************************
** Form generated from reading UI file 'manualwidget.ui'
**
** Created: Sun Apr 7 18:01:03 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUALWIDGET_H
#define UI_MANUALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManualWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *ManualWidget)
    {
        if (ManualWidget->objectName().isEmpty())
            ManualWidget->setObjectName(QStringLiteral("ManualWidget"));
        ManualWidget->resize(400, 82);
        horizontalLayout = new QHBoxLayout(ManualWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ManualWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(ManualWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(ManualWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(ManualWidget);

        QMetaObject::connectSlotsByName(ManualWidget);
    } // setupUi

    void retranslateUi(QWidget *ManualWidget)
    {
        ManualWidget->setWindowTitle(QApplication::translate("ManualWidget", "ManualWidget", 0));
        label->setText(QApplication::translate("ManualWidget", "Enter Text", 0));
        pushButton->setText(QApplication::translate("ManualWidget", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class ManualWidget: public Ui_ManualWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUALWIDGET_H
