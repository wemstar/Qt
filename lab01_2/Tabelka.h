#include <QtCore>
#include <QtGui>


class Tabelka : public QWidget
{
	Q_OBJECT
public:
	Tabelka(QWidget* parent=0);


public slots:
	void addText();
	
private:
	QTextBrowser* textBrowser;
	QSpinBox * valueSpin;
	QLineEdit* valueEdit;
	QCheckBox* numberCheck;
	QCheckBox* textCheck;
	QPushButton* addButton;
	QPushButton* clearButton;
	QPushButton* quitButton;
	QVBoxLayout * mainLayout;
	QVBoxLayout * buttonLayout;
	QHBoxLayout * upperLayout;


	/* data */
};