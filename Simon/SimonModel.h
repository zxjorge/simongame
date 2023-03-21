#ifndef SIMONMODEL_H
#define SIMONMODEL_H
#include <vector>
using std::vector;

#include <QObject>

class SimonModel : public QObject
{
    Q_OBJECT
public:
    explicit SimonModel(QObject *parent = nullptr);
    void getPattern();

public slots:
    void newGame();
    void verify(int move);
    void gameReset();
    void timerReduceLife();

signals:
    void returnPattern(vector<int> pattern, int level);
    void updateProgress(int progress);
    void startGame();
    void endGame();
    void wait();
    void reduceLife();
    void disconnectTime();



private:
    int lives;
    long unsigned turn;
    int currentLevel;
    int progressIncrement;
    vector<int> pattern;
    int progress;
};

#endif // SIMONMODEL_H
