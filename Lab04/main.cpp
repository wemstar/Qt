#include "mainwindow.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTranslator qtTranslator;
     qtTranslator.load("kalkulator" + QLocale::system().name());
    app.installTranslator(&qtTranslator);
    std::cerr<<QString(QLibraryInfo::location(QLibraryInfo::TranslationsPath)).toStdString();
    MainWindow w;
    w.show();

    return app.exec();
}
