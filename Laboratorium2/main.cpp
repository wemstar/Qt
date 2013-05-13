#include "binarywidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BinaryWidget w;
    w.show();
    
    return a.exec();
}
