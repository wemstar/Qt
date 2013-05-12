#include "glowneokno.h"
#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qsrand(QTime::currentTime().msec());
    QTranslator qtTranslator;
    qtTranslator.load("statki"+ QLocale::system().name());
    a.installTranslator(&qtTranslator);
    GlowneOkno w;
    w.show();
//    std::cerr<<QLocale::system().name().toStdString();
    
    return a.exec();
}
