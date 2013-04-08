#include "Tabelka.h"


int main(int argc, char  *argv[])
{
	QApplication app(argc,argv);
	Tabelka tab;
	tab.show();

	return app.exec();
}