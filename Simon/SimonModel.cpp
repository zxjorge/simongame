#include "SimonModel.h"

SimonModel::SimonModel(QObject *parent) : QObject(parent) {
    lives = 0;
    gameStarted = false;
    currentLevel = 1;
}

void SimonModel::newGame(){
    pattern.push_back(rand() % 4);
    emit startGame();
}

void SimonModel::getPattern(){
    emit returnPattern(pattern, currentLevel);
}


