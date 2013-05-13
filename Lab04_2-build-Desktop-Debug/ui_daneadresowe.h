/********************************************************************************
** Form generated from reading UI file 'daneadresowe.ui'
**
** Created: Thu Apr 11 18:22:03 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANEADRESOWE_H
#define UI_DANEADRESOWE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DaneAdresowe
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *mailEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *phoneEdit;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *filenameEdit;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DaneAdresowe)
    {
        if (DaneAdresowe->objectName().isEmpty())
            DaneAdresowe->setObjectName(QString::fromUtf8("DaneAdresowe"));
        DaneAdresowe->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/ikony/icons/address-book-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        DaneAdresowe->setWindowIcon(icon);
        actionNew = new QAction(DaneAdresowe);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/ikony/icons/document-new.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(DaneAdresowe);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/ikony/icons/document-open.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(DaneAdresowe);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/ikony/icons/document-save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_as = new QAction(DaneAdresowe);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionExit = new QAction(DaneAdresowe);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(DaneAdresowe);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/ikony/icons/contact-new.svg")));

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(frame);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        horizontalLayout->addWidget(nameEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/ikony/icons/mail.svg")));

        horizontalLayout_2->addWidget(label_2);

        mailEdit = new QLineEdit(frame);
        mailEdit->setObjectName(QString::fromUtf8("mailEdit"));

        horizontalLayout_2->addWidget(mailEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/ikony/icons/phone.svg")));

        horizontalLayout_3->addWidget(label_3);

        phoneEdit = new QLineEdit(frame);
        phoneEdit->setObjectName(QString::fromUtf8("phoneEdit"));

        horizontalLayout_3->addWidget(phoneEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addWidget(frame);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/ikony/icons/address-book-new.svg")));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        filenameEdit = new QLineEdit(centralWidget);
        filenameEdit->setObjectName(QString::fromUtf8("filenameEdit"));
        filenameEdit->setReadOnly(true);

        verticalLayout_2->addWidget(filenameEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_4->addLayout(verticalLayout_2);

        DaneAdresowe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DaneAdresowe);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 29));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        DaneAdresowe->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DaneAdresowe);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DaneAdresowe->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DaneAdresowe);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DaneAdresowe->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);

        retranslateUi(DaneAdresowe);

        QMetaObject::connectSlotsByName(DaneAdresowe);
    } // setupUi

    void retranslateUi(QMainWindow *DaneAdresowe)
    {
        DaneAdresowe->setWindowTitle(QApplication::translate("DaneAdresowe", "DaneAdresowe", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("DaneAdresowe", "New", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("DaneAdresowe", "Open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("DaneAdresowe", "Save", 0, QApplication::UnicodeUTF8));
        actionSave_as->setText(QApplication::translate("DaneAdresowe", "Save as", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("DaneAdresowe", "Exit", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QApplication::translate("DaneAdresowe", "Filename", 0, QApplication::UnicodeUTF8));
        filenameEdit->setText(QApplication::translate("DaneAdresowe", "None", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("DaneAdresowe", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DaneAdresowe: public Ui_DaneAdresowe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANEADRESOWE_H
