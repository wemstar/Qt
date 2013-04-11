#include "daneadresowe.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DaneAdresowe w;
    w.show();
    
    return a.exec();
}
