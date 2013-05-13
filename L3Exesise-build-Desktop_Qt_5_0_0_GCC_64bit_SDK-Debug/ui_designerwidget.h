/********************************************************************************
** Form generated from reading UI file 'designerwidget.ui'
**
** Created: Sun Apr 7 18:01:03 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGNERWIDGET_H
#define UI_DESIGNERWIDGET_H

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

class Ui_DesignerWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *DesignerWidget)
    {
        if (DesignerWidget->objectName().isEmpty())
            DesignerWidget->setObjectName(QStringLiteral("DesignerWidget"));
        DesignerWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(DesignerWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DesignerWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(DesignerWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(DesignerWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(DesignerWidget);

        QMetaObject::connectSlotsByName(DesignerWidget);
    } // setupUi

    void retranslateUi(QWidget *DesignerWidget)
    {
        DesignerWidget->setWindowTitle(QApplication::translate("DesignerWidget", "Form", 0));
        label->setText(QApplication::translate("DesignerWidget", "Enter Text", 0));
        pushButton->setText(QApplication::translate("DesignerWidget", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class DesignerWidget: public Ui_DesignerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGNERWIDGET_H
