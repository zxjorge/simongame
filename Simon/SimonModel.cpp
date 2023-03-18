#include "SimonModel.h"

SimonModel::SimonModel(QObject *parent) : QObject(parent) {
    lives = 0;
    gameStarted = false;
    currentLevel = 1;
}

void SimonModel::newGame(){
    pattern.push_back(1 + (rand() % 4));
    emit startGame();

}


