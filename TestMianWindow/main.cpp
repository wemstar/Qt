#include "testmain.h"
#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator myappTranslator;

    myappTranslator.load( "I18n_pl");
    a.installTranslator( &myappTranslator );

    TestMain w;
    w.show();
    
    return a.exec();
}
