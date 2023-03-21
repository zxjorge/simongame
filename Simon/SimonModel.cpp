#include "SimonModel.h"

/*
 * George Benyeogor
 * CS3505
 * A5: Simon Game
 * This class defines methods that are used to implement a Trie.
 */

/// @brief This is the constructor for the SimonModel
/// @param parent 
SimonModel::SimonModel(QObject *parent) : QObject(parent) {
    lives = 3;
    currentLevel = 1;
    turn = 0;
    progressIncrement = 0;
}

/// @brief A slot that is used to set up the game
void SimonModel::newGame(){  
    pattern.push_back(rand() % 4);
    progressIncrement = 100/pattern.size();
    emit startGame();
}

/// @brief A slot that is used to verify each move the user makes
/// @param move A number representing the move the user made
void SimonModel::verify(int move){
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

/// @brief A slot that gives the mainwindow that pattern
void SimonModel::getPattern(){
    emit returnPattern(pattern, currentLevel);
}

/// @brief A slot that is used to reset the game
void SimonModel::gameReset(){
    lives = 3;
    currentLevel = 1;
    turn = 0;
    while(pattern.size() > 1)
        pattern.pop_back(); // remove the last element
}

/// @brief A slot that reduces the users life
void SimonModel::timerReduceLife(){
    lives--;
    emit reduceLife();
}

