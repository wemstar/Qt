/********************************************************************************
** Form generated from reading UI file 'configurationdialog.ui'
**
** Created: Sun Apr 21 22:18:00 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURATIONDIALOG_H
#define UI_CONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include "puzzlesizewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigurationDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Plik;
    QLineEdit *fileEdit;
    QPushButton *browseButton;
    QLabel *puzzle_2;
    PuzzleSizeWidget *puzzle;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigurationDialog)
    {
        if (ConfigurationDialog->objectName().isEmpty())
            ConfigurationDialog->setObjectName(QString::fromUtf8("ConfigurationDialog"));
        ConfigurationDialog->resize(400, 300);
        gridLayout = new QGridLayout(ConfigurationDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Plik = new QLabel(ConfigurationDialog);
        Plik->setObjectName(QString::fromUtf8("Plik"));

        gridLayout->addWidget(Plik, 0, 0, 1, 1);

        fileEdit = new QLineEdit(ConfigurationDialog);
        fileEdit->setObjectName(QString::fromUtf8("fileEdit"));

        gridLayout->addWidget(fileEdit, 0, 1, 1, 1);

        browseButton = new QPushButton(ConfigurationDialog);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        gridLayout->addWidget(browseButton, 0, 2, 1, 1);

        puzzle_2 = new QLabel(ConfigurationDialog);
        puzzle_2->setObjectName(QString::fromUtf8("puzzle_2"));

        gridLayout->addWidget(puzzle_2, 1, 0, 1, 1);

        puzzle = new PuzzleSizeWidget(ConfigurationDialog);
        puzzle->setObjectName(QString::fromUtf8("puzzle"));
        puzzle->setFrameShape(QFrame::Box);
        puzzle->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(puzzle, 1, 1, 1, 2);

        buttonBox = new QDialogButtonBox(ConfigurationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(ConfigurationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigurationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigurationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigurationDialog)
    {
        ConfigurationDialog->setWindowTitle(QApplication::translate("ConfigurationDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        Plik->setText(QApplication::translate("ConfigurationDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
        browseButton->setText(QApplication::translate("ConfigurationDialog", "Browse", 0, QApplication::UnicodeUTF8));
        puzzle_2->setText(QApplication::translate("ConfigurationDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigurationDialog: public Ui_ConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURATIONDIALOG_H
