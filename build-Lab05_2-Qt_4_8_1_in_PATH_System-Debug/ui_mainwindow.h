/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Apr 15 20:06:22 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd_to_List;
    QAction *actionClean;
    QAction *actionCreate_Zip;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *fileList;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *clearButton;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *surnameEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *noEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLabel *procesLabel;
    QTextBrowser *fileOutput;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuArchive;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(374, 423);
        actionAdd_to_List = new QAction(MainWindow);
        actionAdd_to_List->setObjectName(QString::fromUtf8("actionAdd_to_List"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/Ikony/icons/list-add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_to_List->setIcon(icon);
        actionClean = new QAction(MainWindow);
        actionClean->setObjectName(QString::fromUtf8("actionClean"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/Ikony/icons/edit-clear.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClean->setIcon(icon1);
        actionCreate_Zip = new QAction(MainWindow);
        actionCreate_Zip->setObjectName(QString::fromUtf8("actionCreate_Zip"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/Ikony/icons/system-run.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCreate_Zip->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fileList = new QTextBrowser(groupBox);
        fileList->setObjectName(QString::fromUtf8("fileList"));

        horizontalLayout->addWidget(fileList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QPushButton(groupBox);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setIcon(icon);

        verticalLayout->addWidget(addButton);

        clearButton = new QPushButton(groupBox);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setIcon(icon1);

        verticalLayout->addWidget(clearButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(label);

        nameEdit = new QLineEdit(groupBox_2);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        horizontalLayout_2->addWidget(nameEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(label_2);

        surnameEdit = new QLineEdit(groupBox_2);
        surnameEdit->setObjectName(QString::fromUtf8("surnameEdit"));

        horizontalLayout_3->addWidget(surnameEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(80, 0));

        horizontalLayout_4->addWidget(label_3);

        noEdit = new QLineEdit(groupBox_2);
        noEdit->setObjectName(QString::fromUtf8("noEdit"));

        horizontalLayout_4->addWidget(noEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(80, 0));

        horizontalLayout_5->addWidget(label_4);

        procesLabel = new QLabel(groupBox_2);
        procesLabel->setObjectName(QString::fromUtf8("procesLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(procesLabel->sizePolicy().hasHeightForWidth());
        procesLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        procesLabel->setFont(font);

        horizontalLayout_5->addWidget(procesLabel);


        verticalLayout_2->addLayout(horizontalLayout_5);

        fileOutput = new QTextBrowser(groupBox_2);
        fileOutput->setObjectName(QString::fromUtf8("fileOutput"));

        verticalLayout_2->addWidget(fileOutput);


        verticalLayout_3->addWidget(groupBox_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 374, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuArchive = new QMenu(menuBar);
        menuArchive->setObjectName(QString::fromUtf8("menuArchive"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuArchive->menuAction());
        menuFile->addAction(actionAdd_to_List);
        menuFile->addAction(actionClean);
        menuArchive->addAction(actionCreate_Zip);
        mainToolBar->addAction(actionAdd_to_List);
        mainToolBar->addAction(actionClean);
        mainToolBar->addAction(actionCreate_Zip);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionAdd_to_List->setText(QApplication::translate("MainWindow", "Add to List", 0, QApplication::UnicodeUTF8));
        actionAdd_to_List->setShortcut(QApplication::translate("MainWindow", "Ctrl++", 0, QApplication::UnicodeUTF8));
        actionClean->setText(QApplication::translate("MainWindow", "Clean", 0, QApplication::UnicodeUTF8));
        actionClean->setShortcut(QApplication::translate("MainWindow", "Ctrl+0", 0, QApplication::UnicodeUTF8));
        actionCreate_Zip->setText(QApplication::translate("MainWindow", "Create &Zip", 0, QApplication::UnicodeUTF8));
        actionCreate_Zip->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "List of Files", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("MainWindow", "Add to List", 0, QApplication::UnicodeUTF8));
        clearButton->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Zip Archive", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "First Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Family Name", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "No.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Output from", 0, QApplication::UnicodeUTF8));
        procesLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuArchive->setTitle(QApplication::translate("MainWindow", "Archive", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
