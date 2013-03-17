#include "Kalkulator.h"




Kalkulator::Kalkulator(QWidget * parent):QWidget(parent)
{
	mnozButton=new QPushButton("*2");
	dzielButton=new QPushButton("/2");
	quitButton=new QPushButton("Quit");

	firstSpin=new QSpinBox();
	secondSpin=new QSpinBox();
	trzeciSpin=new QSpinBox();
	czwartySpin=new QSpinBox();

	firstSpin->setMaximum(1);
	secondSpin->setMaximum(1);
	trzeciSpin->setMaximum(1);
	czwartySpin->setMaximum(1);

	firstSpin->setMinimum(0);
	secondSpin->setMinimum(0);
	trzeciSpin->setMinimum(0);
	czwartySpin->setMinimum(0);


	binLabel=new QLabel("Binary");
	deciLabel=new QLabel("Decimal");

	mainLay=new QGridLayout();
	binLay=new QHBoxLayout();
	deciLay=new QHBoxLayout();
	buttonLay=new QVBoxLayout();

	binLay->addWidget(binLabel);
	binLay->addWidget(firstSpin);
	binLay->addWidget(secondSpin);
	binLay->addWidget(trzeciSpin);
	binLay->addWidget(czwartySpin);
	mainLay->addLayout(binLay,0,0);

	deciLine=new QLineEdit();

	deciLay->addWidget(deciLabel);
	deciLay->addWidget(deciLine);
	mainLay->addLayout(deciLay,2,0);

	buttonLay->addWidget(mnozButton);
	buttonLay->addWidget(dzielButton);
	buttonLay->addWidget(quitButton);
	mainLay->addLayout(buttonLay,0,2,2,1);

	QObject::connect(quitButton,SIGNAL(clicked()),this,SLOT(close()));
	QObject::connect(dzielButton,SIGNAL(clicked()),this,SLOT(podziel()));
	QObject::connect(mnozButton,SIGNAL(clicked()),this,SLOT(pomnoz()));

	QObject::connect(firstSpin,SIGNAL(valueChanged(int)),this,SLOT(przelicz()));
	QObject::connect(secondSpin,SIGNAL(valueChanged(int)),this,SLOT(przelicz()));
	QObject::connect(trzeciSpin,SIGNAL(valueChanged(int)),this,SLOT(przelicz()));
	QObject::connect(czwartySpin,SIGNAL(valueChanged(int)),this,SLOT(przelicz()));




	// mainLay->setHorizontalSpacing(100);
	setLayout(mainLay);








}
void Kalkulator::przelicz()
{


	int deci= firstSpin->value()*8+secondSpin->value()*4+trzeciSpin->value()*2+czwartySpin->value()*1;
	deciLine->setText(QString("%1").arg(deci));//asas

}
void Kalkulator::podziel()
{
	if(firstSpin->value()){firstSpin->setValue(0);return;}
	if(secondSpin->value()){secondSpin->setValue(0);return;}
	if(trzeciSpin->value()){trzeciSpin->setValue(0);return;}
	if(czwartySpin->value()){czwartySpin->setValue(0);return;}

}
void Kalkulator::pomnoz()
{
	if(firstSpin->value()+secondSpin->value()+trzeciSpin->value()+czwartySpin->value()){
		if(!czwartySpin->value()){czwartySpin->setValue(1);return;}
		if(!trzeciSpin->value()){trzeciSpin->setValue(1);return;}
		if(!secondSpin->value()){secondSpin->setValue(1);return;}
		if(!firstSpin->value()){firstSpin->setValue(1);return;}
	}

}