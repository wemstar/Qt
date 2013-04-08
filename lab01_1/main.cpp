

#include "Kalkulator.h"


int main(int argc, char  *argv[])
 {
 	QApplication app(argc,argv);
 	Kalkulator* kal=new Kalkulator();
 	kal->show();



 	return app.exec();
 } 