#include "mainwindow.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QTranslator myappTranslator;
    myappTranslator.load("zip_archiwe_" + QLocale::system().name());
    a.installTranslator(&myappTranslator);
    MainWindow w;
    w.show();

    return a.exec();
}
