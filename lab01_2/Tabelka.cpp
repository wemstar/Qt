#include "Tabelka.h"


Tabelka::Tabelka(QWidget* parent):QWidget(parent)
{
	textBrowser=new QTextBrowser();

	valueSpin=new QSpinBox();

	valueEdit=new QLineEdit();

	numberCheck=new QCheckBox("Number");
	textCheck=new QCheckBox("Descpiption");

	addButton=new QPushButton("Add");
	QObject::connect(addButton,SIGNAL(clicked()),this,SLOT(addText()));


	clearButton=new QPushButton("Clear All");
	QObject::connect(clearButton,SIGNAL(clicked()),textBrowser,SLOT(clear()));
	quitButton=new QPushButton("Quit");
	QObject::connect(quitButton,SIGNAL(clicked()),this,SLOT(close()));

	buttonLayout=new QVBoxLayout();
	buttonLayout->addWidget(numberCheck);
	buttonLayout->addWidget(valueSpin);
	buttonLayout->addWidget(textCheck);
	buttonLayout->addWidget(valueEdit);
	buttonLayout->addWidget(addButton);
	buttonLayout->addStretch();
	buttonLayout->addWidget(clearButton);

	upperLayout=new QHBoxLayout();
	upperLayout->addWidget(textBrowser);
	upperLayout->addLayout(buttonLayout);

	mainLayout=new QVBoxLayout();
	mainLayout->addLayout(upperLayout);
	mainLayout->addWidget(quitButton);
	setLayout(mainLayout);




}
void Tabelka::addText()
{
	QString str;
	if(numberCheck->isChecked())str+=QString("%1").arg(valueSpin->value());
	if(textCheck->isChecked())str+=QString(valueEdit->text());
	// str+=QString("\n");

	textBrowser->append(str);


}