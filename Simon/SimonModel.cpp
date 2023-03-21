#include "SimonModel.h"

SimonModel::SimonModel(QObject *parent) : QObject(parent) {
    lives = 3;
    currentLevel = 1;
    turn = 0;
    progressIncrement = 0;
}

void SimonModel::newGame(){  
    pattern.push_back(rand() % 4);
    progressIncrement = 100/pattern.size();
    emit startGame();
}

void SimonModel::verify(int move){
    //Verifies that the user picked the right color
    if(pattern[turn] == move){
        turn++;
        progress += progressIncrement;
        emit updateProgress(progress);
        if(turn == pattern.size()){
            emit disconnectTime();
            turn = 0;
            progress = 0;
            currentLevel++;
            pattern.push_back(rand() % 4);
            progressIncrement = 100 / pattern.size();
            emit returnPattern(pattern, currentLevel);
            emit updateProgress(progress);
        }
        emit wait();
    }
    else{
        if(lives == 1){
            emit endGame();

        }
        else{
            lives--;
            emit reduceLife();
        }
    }
}

void SimonModel::getPattern(){
    emit returnPattern(pattern, currentLevel);
}

void SimonModel::gameReset(){
    lives = 3;
    currentLevel = 1;
    turn = 0;
    while(pattern.size() > 1)
        pattern.pop_back(); // remove the last element
}

void SimonModel::timerReduceLife(){
    lives--;
    emit reduceLife();
}

