#ifndef TESTMAIN_H
#define TESTMAIN_H

#include <QMainWindow>

namespace Ui {
class TestMain;
}

class TestMain : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit TestMain(QWidget *parent = 0);
    ~TestMain();
    
private:
    Ui::TestMain *ui;
};

#endif // TESTMAIN_H
