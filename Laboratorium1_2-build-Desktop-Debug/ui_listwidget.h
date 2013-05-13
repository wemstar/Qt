/********************************************************************************
** Form generated from reading UI file 'listwidget.ui'
**
** Created: Sat Mar 23 17:22:37 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTWIDGET_H
#define UI_LISTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textDisplay;
    QVBoxLayout *verticalLayout;
    QCheckBox *valueCheck;
    QSpinBox *valueSpin;
    QCheckBox *textCheck;
    QLineEdit *textLine;
    QPushButton *addButton;
    QSpacerItem *verticalSpacer;
    QPushButton *clearButton;
    QPushButton *quitButton;

    void setupUi(QWidget *ListWidget)
    {
        if (ListWidget->objectName().isEmpty())
            ListWidget->setObjectName(QString::fromUtf8("ListWidget"));
        ListWidget->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(ListWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textDisplay = new QTextBrowser(ListWidget);
        textDisplay->setObjectName(QString::fromUtf8("textDisplay"));

        horizontalLayout->addWidget(textDisplay);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        valueCheck = new QCheckBox(ListWidget);
        valueCheck->setObjectName(QString::fromUtf8("valueCheck"));
        valueCheck->setChecked(true);

        verticalLayout->addWidget(valueCheck);

        valueSpin = new QSpinBox(ListWidget);
        valueSpin->setObjectName(QString::fromUtf8("valueSpin"));

        verticalLayout->addWidget(valueSpin);

        textCheck = new QCheckBox(ListWidget);
        textCheck->setObjectName(QString::fromUtf8("textCheck"));
        textCheck->setChecked(true);

        verticalLayout->addWidget(textCheck);

        textLine = new QLineEdit(ListWidget);
        textLine->setObjectName(QString::fromUtf8("textLine"));

        verticalLayout->addWidget(textLine);

        addButton = new QPushButton(ListWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        clearButton = new QPushButton(ListWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        verticalLayout->addWidget(clearButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        quitButton = new QPushButton(ListWidget);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        verticalLayout_2->addWidget(quitButton);


        retranslateUi(ListWidget);
        QObject::connect(valueCheck, SIGNAL(toggled(bool)), valueSpin, SLOT(setEnabled(bool)));
        QObject::connect(textCheck, SIGNAL(toggled(bool)), textLine, SLOT(setEnabled(bool)));
        QObject::connect(clearButton, SIGNAL(clicked()), textDisplay, SLOT(clear()));
        QObject::connect(quitButton, SIGNAL(clicked()), ListWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ListWidget);
    } // setupUi

    void retranslateUi(QWidget *ListWidget)
    {
        ListWidget->setWindowTitle(QApplication::translate("ListWidget", "ListWidget", 0, QApplication::UnicodeUTF8));
        valueCheck->setText(QApplication::translate("ListWidget", "CheckBox", 0, QApplication::UnicodeUTF8));
        textCheck->setText(QApplication::translate("ListWidget", "CheckBox", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("ListWidget", "Add", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("ListWidget", "Clear All", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("ListWidget", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ListWidget: public Ui_ListWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTWIDGET_H
