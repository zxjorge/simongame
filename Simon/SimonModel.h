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

public slots:
    void newGame();

signals:
    void startGame();


private:
    bool gameStarted;
    int lives;
    int currentLevel;
    vector<int> pattern;

};

#endif // SIMONMODEL_H
