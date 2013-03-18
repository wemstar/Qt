#include <QtCore>
#include <QtGui>


class Dane:public QWidget
{
	Q_OBJECT
public:
	Dane(QWidget* parent=0);
	
public slots:
	void nowy(QString str,int liczba);
private:
	QTextBrowser* textBrowser;
	QLineEdit* editSrednia;
	QHBoxLayout* layMain;
	int losowanie;
	double suma;


	/* data */
};