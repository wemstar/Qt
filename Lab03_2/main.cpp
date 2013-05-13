#include "dzieleniewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DzielenieWidget w;
    w.show();
    
    return a.exec();
}
