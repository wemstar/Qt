#include <QApplication>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QWidget>
#include "Wartosc.h"
#include "Iloczyn.h"


//
//  Funkcji main NIE WOLNO zmieniac!
//
int main( int argc, char **argv ){
    QApplication app( argc, argv );
    QWidget window;

    Wartosc* wx = new Wartosc("X");
    Wartosc* wy = new Wartosc("Y");
    Iloczyn* il = new Iloczyn;

    QObject::connect(wx, SIGNAL(zmiana(double)), il, SLOT(noweX(double)) );
    QObject::connect(wy, SIGNAL(zmiana(double)), il, SLOT(noweY(double)) );

    QHBoxLayout* layoutWartosci = new QHBoxLayout;
    layoutWartosci->addWidget(wx);
    layoutWartosci->addWidget(wy);

    QVBoxLayout* layoutOkno = new QVBoxLayout;
    layoutOkno->addLayout(layoutWartosci);
    layoutOkno->addWidget(new QLabel("Iloczyn X*Y :"));
    layoutOkno->addWidget(il);

    window.setLayout(layoutOkno);
    window.show();

    return app.exec();
}
