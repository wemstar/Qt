/********************************************************************************
** Form generated from reading UI file 'testmain.ui'
**
** Created: Sun Apr 7 18:34:04 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTMAIN_H
#define UI_TESTMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestMain
{
public:
    QAction *actionChoseFile;
    QAction *actionCreateTar;
    QAction *actionExit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFiles;
    QMenu *menuTar_Gz;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TestMain)
    {
        if (TestMain->objectName().isEmpty())
            TestMain->setObjectName(QString::fromUtf8("TestMain"));
        TestMain->resize(400, 300);
        actionChoseFile = new QAction(TestMain);
        actionChoseFile->setObjectName(QString::fromUtf8("actionChoseFile"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionChoseFile->setIcon(icon);
        actionCreateTar = new QAction(TestMain);
        actionCreateTar->setObjectName(QString::fromUtf8("actionCreateTar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/system-run.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreateTar->setIcon(icon1);
        actionExit = new QAction(TestMain);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/application-exit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        centralWidget = new QWidget(TestMain);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TestMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TestMain);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 29));
        menuFiles = new QMenu(menuBar);
        menuFiles->setObjectName(QString::fromUtf8("menuFiles"));
        menuTar_Gz = new QMenu(menuBar);
        menuTar_Gz->setObjectName(QString::fromUtf8("menuTar_Gz"));
        TestMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TestMain);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TestMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TestMain);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TestMain->setStatusBar(statusBar);

        menuBar->addAction(menuFiles->menuAction());
        menuBar->addAction(menuTar_Gz->menuAction());
        menuFiles->addAction(actionChoseFile);
        menuTar_Gz->addAction(actionCreateTar);
        mainToolBar->addAction(actionChoseFile);
        mainToolBar->addAction(actionCreateTar);
        mainToolBar->addAction(actionExit);

        retranslateUi(TestMain);

        QMetaObject::connectSlotsByName(TestMain);
    } // setupUi

    void retranslateUi(QMainWindow *TestMain)
    {
        TestMain->setWindowTitle(QApplication::translate("TestMain", "TestMain", 0, QApplication::UnicodeUTF8));
        actionChoseFile->setText(QApplication::translate("TestMain", "ChoseFile", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionChoseFile->setToolTip(QApplication::translate("TestMain", "Chose File to add tar gz archiwe", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCreateTar->setText(QApplication::translate("TestMain", "CreateTar", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("TestMain", "Exit", 0, QApplication::UnicodeUTF8));
        menuFiles->setTitle(QApplication::translate("TestMain", "Files", 0, QApplication::UnicodeUTF8));
        menuTar_Gz->setTitle(QApplication::translate("TestMain", "Tar Gz", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TestMain: public Ui_TestMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTMAIN_H
