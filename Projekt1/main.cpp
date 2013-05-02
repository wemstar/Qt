#include "glowneokno.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qsrand(QTime::currentTime().msec());
    GlowneOkno w;
    w.show();
    
    return a.exec();
}
