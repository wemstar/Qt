#include <QtCore>
#include <QtGui>



class Kostka: public QWidget
{
	Q_OBJECT
public:
	Kostka(QWidget* parent=0);

public slots:

	void losuj();
signals:
	void wylosowane(QString str,int n);
private:
	QLineEdit* editNazwa;
	QLCDNumber* numberLiczba;
	QPushButton* buttonLosuj;
	QLabel* labelNazwa;	
	QHBoxLayout* layoutNazwa;
	QHBoxLayout* layoutLosuj;
	QVBoxLayout* layoutMain;
	int losowanie;


	

	/* data */
};