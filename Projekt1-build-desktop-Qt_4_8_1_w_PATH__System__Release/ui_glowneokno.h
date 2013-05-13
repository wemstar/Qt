/********************************************************************************
** Form generated from reading UI file 'glowneokno.ui'
**
** Created: Mon May 13 14:14:08 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOWNEOKNO_H
#define UI_GLOWNEOKNO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GlowneOkno
{
public:
    QAction *actionNew_Game;
    QAction *actionExit;
    QAction *actionDodaj_Jednomasztowca;
    QAction *actionAddTwo_funnel;
    QAction *actionAdd_Three_funne;
    QAction *actionAdd_Four_funnel;
    QAction *actionAbout_QT;
    QAction *actionAbout_Game;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTableWidget *gracz1Table;
    QTableWidget *gracz2Table;
    QMenuBar *menuBar;
    QMenu *menuGra;
    QMenu *menuO_grze;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GlowneOkno)
    {
        if (GlowneOkno->objectName().isEmpty())
            GlowneOkno->setObjectName(QString::fromUtf8("GlowneOkno"));
        GlowneOkno->resize(591, 578);
        actionNew_Game = new QAction(GlowneOkno);
        actionNew_Game->setObjectName(QString::fromUtf8("actionNew_Game"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/akcje/Icony/actions/document-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Game->setIcon(icon);
        actionExit = new QAction(GlowneOkno);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/akcje/Icony/actions/application-exit.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionDodaj_Jednomasztowca = new QAction(GlowneOkno);
        actionDodaj_Jednomasztowca->setObjectName(QString::fromUtf8("actionDodaj_Jednomasztowca"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/statki/jeden"), QSize(), QIcon::Normal, QIcon::Off);
        actionDodaj_Jednomasztowca->setIcon(icon2);
        actionAddTwo_funnel = new QAction(GlowneOkno);
        actionAddTwo_funnel->setObjectName(QString::fromUtf8("actionAddTwo_funnel"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/statki/dwa"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddTwo_funnel->setIcon(icon3);
        actionAdd_Three_funne = new QAction(GlowneOkno);
        actionAdd_Three_funne->setObjectName(QString::fromUtf8("actionAdd_Three_funne"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/statki/trzy"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Three_funne->setIcon(icon4);
        actionAdd_Four_funnel = new QAction(GlowneOkno);
        actionAdd_Four_funnel->setObjectName(QString::fromUtf8("actionAdd_Four_funnel"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/statki/cztery"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Four_funnel->setIcon(icon5);
        actionAbout_QT = new QAction(GlowneOkno);
        actionAbout_QT->setObjectName(QString::fromUtf8("actionAbout_QT"));
        actionAbout_Game = new QAction(GlowneOkno);
        actionAbout_Game->setObjectName(QString::fromUtf8("actionAbout_Game"));
        centralWidget = new QWidget(GlowneOkno);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gracz1Table = new QTableWidget(centralWidget);
        if (gracz1Table->columnCount() < 10)
            gracz1Table->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        gracz1Table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        gracz1Table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        gracz1Table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        gracz1Table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        gracz1Table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        gracz1Table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        gracz1Table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        gracz1Table->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        gracz1Table->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        gracz1Table->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        if (gracz1Table->rowCount() < 10)
            gracz1Table->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        gracz1Table->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        gracz1Table->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        gracz1Table->setVerticalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        gracz1Table->setVerticalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        gracz1Table->setVerticalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        gracz1Table->setVerticalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        gracz1Table->setVerticalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        gracz1Table->setVerticalHeaderItem(7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        gracz1Table->setVerticalHeaderItem(8, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        gracz1Table->setVerticalHeaderItem(9, __qtablewidgetitem19);
        gracz1Table->setObjectName(QString::fromUtf8("gracz1Table"));
        gracz1Table->setMinimumSize(QSize(0, 0));
        gracz1Table->horizontalHeader()->setDefaultSectionSize(32);
        gracz1Table->horizontalHeader()->setMinimumSectionSize(32);
        gracz1Table->verticalHeader()->setDefaultSectionSize(32);
        gracz1Table->verticalHeader()->setMinimumSectionSize(32);

        horizontalLayout->addWidget(gracz1Table);

        gracz2Table = new QTableWidget(centralWidget);
        if (gracz2Table->columnCount() < 10)
            gracz2Table->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        gracz2Table->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        gracz2Table->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        gracz2Table->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        gracz2Table->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        gracz2Table->setHorizontalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        gracz2Table->setHorizontalHeaderItem(5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        gracz2Table->setHorizontalHeaderItem(6, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        gracz2Table->setHorizontalHeaderItem(7, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        gracz2Table->setHorizontalHeaderItem(8, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        gracz2Table->setHorizontalHeaderItem(9, __qtablewidgetitem29);
        if (gracz2Table->rowCount() < 10)
            gracz2Table->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        gracz2Table->setVerticalHeaderItem(0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        gracz2Table->setVerticalHeaderItem(1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        gracz2Table->setVerticalHeaderItem(2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        gracz2Table->setVerticalHeaderItem(3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        gracz2Table->setVerticalHeaderItem(4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        gracz2Table->setVerticalHeaderItem(5, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        gracz2Table->setVerticalHeaderItem(6, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        gracz2Table->setVerticalHeaderItem(7, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        gracz2Table->setVerticalHeaderItem(8, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        gracz2Table->setVerticalHeaderItem(9, __qtablewidgetitem39);
        gracz2Table->setObjectName(QString::fromUtf8("gracz2Table"));
        gracz2Table->setMinimumSize(QSize(0, 0));
        gracz2Table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        gracz2Table->horizontalHeader()->setDefaultSectionSize(32);
        gracz2Table->horizontalHeader()->setMinimumSectionSize(32);
        gracz2Table->verticalHeader()->setDefaultSectionSize(32);
        gracz2Table->verticalHeader()->setMinimumSectionSize(32);

        horizontalLayout->addWidget(gracz2Table);

        GlowneOkno->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GlowneOkno);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 591, 25));
        menuGra = new QMenu(menuBar);
        menuGra->setObjectName(QString::fromUtf8("menuGra"));
        menuO_grze = new QMenu(menuBar);
        menuO_grze->setObjectName(QString::fromUtf8("menuO_grze"));
        GlowneOkno->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GlowneOkno);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GlowneOkno->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GlowneOkno);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GlowneOkno->setStatusBar(statusBar);

        menuBar->addAction(menuGra->menuAction());
        menuBar->addAction(menuO_grze->menuAction());
        menuGra->addAction(actionNew_Game);
        menuGra->addAction(actionExit);
        menuO_grze->addAction(actionAbout_QT);
        menuO_grze->addAction(actionAbout_Game);
        mainToolBar->addAction(actionDodaj_Jednomasztowca);
        mainToolBar->addAction(actionAddTwo_funnel);
        mainToolBar->addAction(actionAdd_Three_funne);
        mainToolBar->addAction(actionAdd_Four_funnel);

        retranslateUi(GlowneOkno);

        QMetaObject::connectSlotsByName(GlowneOkno);
    } // setupUi

    void retranslateUi(QMainWindow *GlowneOkno)
    {
        GlowneOkno->setWindowTitle(QApplication::translate("GlowneOkno", "GlowneOkno", 0, QApplication::UnicodeUTF8));
        actionNew_Game->setText(QApplication::translate("GlowneOkno", "New Game", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNew_Game->setToolTip(QApplication::translate("GlowneOkno", " Start new game", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("GlowneOkno", "Exit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("GlowneOkno", "Exit game", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDodaj_Jednomasztowca->setText(QApplication::translate("GlowneOkno", "Add Single-Funnel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDodaj_Jednomasztowca->setToolTip(QApplication::translate("GlowneOkno", "Dodaje  jednomasztowca do planszy", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddTwo_funnel->setText(QApplication::translate("GlowneOkno", "AddTwo-funnel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddTwo_funnel->setToolTip(QApplication::translate("GlowneOkno", "add two-funnel to map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAdd_Three_funne->setText(QApplication::translate("GlowneOkno", "Add Three-funne", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdd_Three_funne->setToolTip(QApplication::translate("GlowneOkno", "add three-funne to map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAdd_Four_funnel->setText(QApplication::translate("GlowneOkno", "Add Four-funnel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdd_Four_funnel->setToolTip(QApplication::translate("GlowneOkno", "add four-funnel to map", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAbout_QT->setText(QApplication::translate("GlowneOkno", "About QT", 0, QApplication::UnicodeUTF8));
        actionAbout_Game->setText(QApplication::translate("GlowneOkno", "About Game", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = gracz1Table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GlowneOkno", "A", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = gracz1Table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GlowneOkno", "B", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = gracz1Table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GlowneOkno", "C", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = gracz1Table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("GlowneOkno", "D", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = gracz1Table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("GlowneOkno", "E", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = gracz1Table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("GlowneOkno", "F", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = gracz1Table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("GlowneOkno", "G", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = gracz1Table->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("GlowneOkno", "H", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = gracz1Table->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("GlowneOkno", "I", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = gracz1Table->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("GlowneOkno", "J", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = gracz1Table->verticalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("GlowneOkno", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = gracz1Table->verticalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("GlowneOkno", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = gracz1Table->verticalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("GlowneOkno", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = gracz1Table->verticalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("GlowneOkno", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = gracz1Table->verticalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("GlowneOkno", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = gracz1Table->verticalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("GlowneOkno", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = gracz1Table->verticalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("GlowneOkno", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = gracz1Table->verticalHeaderItem(7);
        ___qtablewidgetitem17->setText(QApplication::translate("GlowneOkno", "8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = gracz1Table->verticalHeaderItem(8);
        ___qtablewidgetitem18->setText(QApplication::translate("GlowneOkno", "9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = gracz1Table->verticalHeaderItem(9);
        ___qtablewidgetitem19->setText(QApplication::translate("GlowneOkno", "10", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = gracz2Table->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("GlowneOkno", "A", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = gracz2Table->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("GlowneOkno", "B", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = gracz2Table->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QApplication::translate("GlowneOkno", "C", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = gracz2Table->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QApplication::translate("GlowneOkno", "D", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = gracz2Table->horizontalHeaderItem(4);
        ___qtablewidgetitem24->setText(QApplication::translate("GlowneOkno", "E", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = gracz2Table->horizontalHeaderItem(5);
        ___qtablewidgetitem25->setText(QApplication::translate("GlowneOkno", "F", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = gracz2Table->horizontalHeaderItem(6);
        ___qtablewidgetitem26->setText(QApplication::translate("GlowneOkno", "G", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = gracz2Table->horizontalHeaderItem(7);
        ___qtablewidgetitem27->setText(QApplication::translate("GlowneOkno", "H", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = gracz2Table->horizontalHeaderItem(8);
        ___qtablewidgetitem28->setText(QApplication::translate("GlowneOkno", "I", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem29 = gracz2Table->horizontalHeaderItem(9);
        ___qtablewidgetitem29->setText(QApplication::translate("GlowneOkno", "J", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem30 = gracz2Table->verticalHeaderItem(0);
        ___qtablewidgetitem30->setText(QApplication::translate("GlowneOkno", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem31 = gracz2Table->verticalHeaderItem(1);
        ___qtablewidgetitem31->setText(QApplication::translate("GlowneOkno", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem32 = gracz2Table->verticalHeaderItem(2);
        ___qtablewidgetitem32->setText(QApplication::translate("GlowneOkno", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem33 = gracz2Table->verticalHeaderItem(3);
        ___qtablewidgetitem33->setText(QApplication::translate("GlowneOkno", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem34 = gracz2Table->verticalHeaderItem(4);
        ___qtablewidgetitem34->setText(QApplication::translate("GlowneOkno", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem35 = gracz2Table->verticalHeaderItem(5);
        ___qtablewidgetitem35->setText(QApplication::translate("GlowneOkno", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem36 = gracz2Table->verticalHeaderItem(6);
        ___qtablewidgetitem36->setText(QApplication::translate("GlowneOkno", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem37 = gracz2Table->verticalHeaderItem(7);
        ___qtablewidgetitem37->setText(QApplication::translate("GlowneOkno", "8", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem38 = gracz2Table->verticalHeaderItem(8);
        ___qtablewidgetitem38->setText(QApplication::translate("GlowneOkno", "9", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem39 = gracz2Table->verticalHeaderItem(9);
        ___qtablewidgetitem39->setText(QApplication::translate("GlowneOkno", "10", 0, QApplication::UnicodeUTF8));
        menuGra->setTitle(QApplication::translate("GlowneOkno", "Game", 0, QApplication::UnicodeUTF8));
        menuO_grze->setTitle(QApplication::translate("GlowneOkno", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GlowneOkno: public Ui_GlowneOkno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLOWNEOKNO_H
