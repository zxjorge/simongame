#ifndef SIMONMAINWINDOW_H
#define SIMONMAINWINDOW_H
#include <vector>
#include <map>
#include <string>
#include <QTimer>
#include <QTime>
#include <QImage>
#include <QThread>
#include <QPalette>
#include <QPushButton>
#include <QPixmap>
#include <QLabel>
#include "SimonModel.h"
#include <QDebug>

using std::vector;
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

signals:
    void userTurn();
    void getPattern();
    void verify(int move);
    void resetGame();
    void timerStopped();


private slots:
    void greenButtonClicked();
    void redButtonClicked();
    void yellowButtonClicked();
    void blueButtonClicked();
    void startGame();
    void repeat();
    void shuffleButtons();
    void watch(vector<int> pattern, int level);
    void setProgress(int progress);
    void gameOver();
    void wait();
    void reduceLife();
    void updateLcdNumber();
    void resetTimer();
    void disconnectTimer();



private:
    Ui::SimonMainWindow *ui;
    void setUpColorButtons();
    void disableColorButtons();
    void changeButtonColor(QPushButton* button, string color, int timeout);
    void connectTimer();

    QTimer timer;
    double timeRatio;
    double roundTime;
    vector<QLabel*> lives;
    vector<QPushButton*> buttons;
    map<QPushButton*, string> colorMap;


};
#endif // SIMONMAINWINDOW_H
