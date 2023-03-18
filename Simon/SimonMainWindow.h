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

signals:
    void userTurn();
    void getPattern();


private slots:
    void greenButtonClicked();
    void redButtonClicked();
    void yellowButtonClicked();
    void blueButtonClicked();
    void startGame();
    void repeat();

private:
    Ui::SimonMainWindow *ui;
    void setUpColorButtons();
    void disableColorButtons();
    void shuffleButtons();
    void watch(vector<int> pattern, int level);
    void changeButtonColor(QPushButton* button, string color, int time);
    QTimer timer;

    vector<QPushButton*> buttons;
    map<QPushButton*, string> colorMap;
    void gameOver();


};
#endif // SIMONMAINWINDOW_H
