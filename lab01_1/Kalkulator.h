#include <QtCore>
#include <QtGui>



class Kalkulator : public QWidget
{
	Q_OBJECT
public:
	Kalkulator(QWidget * parent=0);
public slots:
	void przelicz();
	void podziel();
	void pomnoz();

private:
	QPushButton * mnozButton;
	QPushButton * dzielButton;
	QPushButton * quitButton;
	QSpinBox * firstSpin;
	QSpinBox * secondSpin;
	QSpinBox * trzeciSpin;
	QSpinBox* czwartySpin;

	QLabel* binLabel;
	QLabel* deciLabel;

	QGridLayout* mainLay; 
	QHBoxLayout* binLay; 
	QHBoxLayout* deciLay; 
	QVBoxLayout* buttonLay; 

	QLineEdit* deciLine;

	/* data */
};