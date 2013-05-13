#include <QApplication>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QWidget>
#include "kostka.h"
#include "dane.h"


//
//  Funkcji main NIE WOLNO zmieniac!
//
int main( int argc, char **argv ){
    QApplication app( argc, argv );
    QWidget window;

    Kostka* kostkaA = new Kostka;
    Kostka* kostkaB = new Kostka;
    dane* podsumowanie = new dane;

    QObject::connect(kostkaA, SIGNAL(wylosowane(QString, int)),
                     podsumowanie, SLOT(nowy(QString,int)) );
    QObject::connect(kostkaB, SIGNAL(wylosowane(QString, int)),
                     podsumowanie, SLOT(nowy(QString,int)) );


    QHBoxLayout* layoutKostki = new QHBoxLayout;
    layoutKostki->addWidget(kostkaA);
    layoutKostki->addWidget(kostkaB);

    QVBoxLayout* layoutOkno = new QVBoxLayout;
    layoutOkno->addLayout(layoutKostki);
    layoutOkno->addWidget(new QLabel("Wyniki losowan :"));
    layoutOkno->addWidget(podsumowanie);

    window.setLayout(layoutOkno);
    window.show();

    return app.exec();
}
