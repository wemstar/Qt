#include "Dane.h"
Dane::Dane(QWidget* parent):QWidget(parent)
{

	 textBrowser= new QTextBrowser();
	 editSrednia= new QLineEdit();
	 editSrednia->setReadOnly(true);
	 layMain=new QHBoxLayout();
	 layMain->addWidget(textBrowser);
	 layMain->addWidget(editSrednia);
	 setLayout(layMain);
	 losowanie=0;
	 suma=0;

 



}

void Dane::nowy(QString str,int liczba)
{
	textBrowser->append(QString("%1 wynik = %2").arg(str).arg(liczba));
	++losowanie;
	suma+=liczba;
	double wynik=suma/losowanie;
	editSrednia->setText(QString("%1").arg(wynik));


}
