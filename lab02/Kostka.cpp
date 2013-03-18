#include "Kostka.h"
#include <cstdlib>

Kostka::Kostka(QWidget* parent):QWidget(parent){

	 editNazwa= new QLineEdit("Kostka ");
	 numberLiczba= new QLCDNumber();
	 buttonLosuj= new QPushButton("Losuj");
	 labelNazwa= new QLabel("Nazwa: ");

	 layoutNazwa= new QHBoxLayout();
	 layoutLosuj= new QHBoxLayout();
	 layoutMain= new QVBoxLayout();	

	 layoutNazwa->addWidget(labelNazwa);
	 layoutNazwa->addWidget(editNazwa);

	 layoutLosuj->addWidget(buttonLosuj);
	 layoutLosuj->addWidget(numberLiczba);

	 layoutMain->addLayout(layoutNazwa);
	 layoutMain->addLayout(layoutLosuj);

	 setLayout(layoutMain);

	 connect(buttonLosuj,SIGNAL(clicked()),this,SLOT(losuj()));

	 losowanie=1;






}
void Kostka::losuj()
{


	int liczba=rand()%6+1;
	numberLiczba->display(liczba);
	QString strin;
	strin+=QString("Losowanie nr %1 [").arg(losowanie)+editNazwa->text()+QString("]");
	emit wylosowane(strin,liczba);
	++losowanie;


}


