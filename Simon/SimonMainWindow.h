#ifndef SIMONMAINWINDOW_H
#define SIMONMAINWINDOW_H
#include <vector>
#include <map>
#include <string>
#include <QTimer>
#include <QPalette>
#include <QPushButton>
#include "SimonModel.h"
using std::vector;
#include <QDebug>
using std::map;
using std::string;

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SimonMainWindow; }
QT_END_NAMESPACE

class SimonMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    SimonMainWindow(SimonModel& model, QWidget *parent = nullptr);
    ~SimonMainWindow();

private slots:
    void greenButtonClicked();
    void redButtonClicked();
    void yellowButtonClicked();
    void blueButtonClicked();
    void startGame();

private:
    Ui::SimonMainWindow *ui;
    void enableColorButtons();
    void disableColorButtons();
    void shuffleButtons();
    QTimer timer;

    vector<QPushButton*> buttons;
    map<QPushButton*, string> colorMap;
    void gameOver();


};
#endif // SIMONMAINWINDOW_H
