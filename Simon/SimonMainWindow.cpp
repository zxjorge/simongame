#include "SimonMainWindow.h"
#include "ui_simonmainwindow.h"
#include "SimonModel.h"

/*
 * George Benyeogor
 * CS3505
 * A5: Simon Game
 * This class defines methods that are used to implement a Trie.
 */

/// @brief This is the constructor for the SimonMainWindow. It initializes 
/// required members and ui elements required to maintain the window.
/// @param model The m
/// @param parent 
SimonMainWindow::SimonMainWindow(SimonModel& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimonMainWindow)
{
    timeRatio = 1.5;
    timer.setInterval(1000);

    ui->setupUi(this);
    disableColorButtons();
    //Loads the image of the heart for thr 3 user lives
    QImage image("C:/Users/gyeag/OneDrive/Documents/CS3505/a5-qt-simon-game-zxjorge/Simon/image/heart.png");
    ui->life1->setPixmap(QPixmap::fromImage(image));
    ui->life2->setPixmap(QPixmap::fromImage(image));
    ui->life3->setPixmap(QPixmap::fromImage(image));

    //Store buttons in vector so they can be accesed by index
    buttons.push_back(findChild<QPushButton*>("redButton"));
    buttons.push_back(findChild<QPushButton*>("blueButton"));
    buttons.push_back(findChild<QPushButton*>("greenButton"));
    buttons.push_back(findChild<QPushButton*>("yellowButton"));

    //Store buttons in map so they are mapped to their colors
    colorMap[findChild<QPushButton*>("blueButton")] = "blue";
    colorMap[findChild<QPushButton*>("redButton")] = "red";
    colorMap[findChild<QPushButton*>("greenButton")] = "green";
    colorMap[findChild<QPushButton*>("yellowButton")] = "yellow";

    //Handles what happens when the user clicks new game
    connect(ui->newGameButton,
            &QPushButton::clicked,
            &model,
            &SimonModel::newGame);

    //Handles what happens when the user clicks the red button
    connect(ui->redButton,
            &QPushButton::clicked,
            this,
            &SimonMainWindow::redButtonClicked);

    //Handles what happens when the user clicks the blue button
    connect(ui->blueButton,
            &QPushButton::clicked,
            this,
            &SimonMainWindow::blueButtonClicked);

    //Handles what happens when the user clicks the green button
    connect(ui->greenButton,
            &QPushButton::clicked,
            this,
            &SimonMainWindow::greenButtonClicked);

    //Handles what happens when the user clicks the yellow button
    connect(ui->yellowButton,
            &QPushButton::clicked,
            this,
            &SimonMainWindow::yellowButtonClicked);

    //Other connect calls that handle various window and user events
    connect(&model,
            &SimonModel::startGame,
            this,
            &SimonMainWindow::startGame);

    connect(this,
            &SimonMainWindow::getPattern,
            &model,
            &SimonModel::getPattern);

    connect(&model,
            &SimonModel::returnPattern,
            this,
            &SimonMainWindow::watch);

    connect(this,
            &SimonMainWindow::verify,
            &model,
            &SimonModel::verify);

    connect(&model,
            &SimonModel::updateProgress,
            this,
            &SimonMainWindow::setProgress);

    connect(&model,
            &SimonModel::wait,
            this,
            &SimonMainWindow::wait);
    connect(&model,
            &SimonModel::endGame,
            this,
            &SimonMainWindow::gameOver);
    connect(&model,
            &SimonModel::reduceLife,
            this,
            &SimonMainWindow::reduceLife);

    connect(this,
            &SimonMainWindow::resetGame,
            &model,
            &SimonModel::gameReset);

    connect(&timer,
            &QTimer::timeout,
            this,
            &SimonMainWindow::updateLcdNumber);

    connect(this,
            &SimonMainWindow::timerStopped,
            this,
            &SimonMainWindow::reduceLife);

    connect(this,
            &SimonMainWindow::timerStopped,
            this,
            &SimonMainWindow::resetTimer);

    connect(&model,
            &SimonModel::disconnectTime,
            this,
            &SimonMainWindow::disconnectTimer);
}

/// @brief Destructor for the main window
SimonMainWindow::~SimonMainWindow()
{
    delete ui;
}

/// @brief Event handler for when the user clicks the green button
void SimonMainWindow::greenButtonClicked()
{
    emit verify(2);
}

/// @brief Event handler for when the user clicks the red button
void SimonMainWindow::redButtonClicked()
{
    emit verify(0);
}

/// @brief Event handler for when the user clicks the yellow button
void SimonMainWindow::yellowButtonClicked()
{
    emit verify(3);
}

/// @brief Event handler for when the user clicks the blue button
void SimonMainWindow::blueButtonClicked()
{
    emit verify(1);
}

/// @brief A slot that is used to set the users progress
/// @param progress The users progress
void SimonMainWindow::setProgress(int progress)
{
    ui->progressBar->setValue(progress);
}

/// @brief A slot that starts the game
void SimonMainWindow::startGame()
{
    ui->gameOverLabel->setText("");
    lives.push_back(ui->life1);
    lives.push_back(ui->life2);
    lives.push_back(ui->life3);
    for(QLabel* life : lives)
        life->setVisible(true);

    emit resetGame();

    setUpColorButtons();
    ui->newGameButton->setEnabled(false);
    ui->instructions->setText("Shuffling");
    shuffleButtons();
}

/// @brief A slot that is used to update that lcdnumber that is used for timing
void SimonMainWindow::updateLcdNumber(){
    int value = ui->timer->intValue();
    value--;
    ui->timer->display(value);

    if (value == 0){
        timer.stop();
        emit timerStopped();
    }
}

/// @brief A method that shuffles the buttons
void SimonMainWindow::shuffleButtons(){
    int stagger = 0;
    int time = 500;
    for(QPushButton* button: buttons)
    {
        string color = colorMap[button];
        QTimer::singleShot(stagger,[this, button, color, time]() {
            changeButtonColor(button, color, time);
        });

        stagger +=250;
        time += 500;
        wait();
    }

    QTimer::singleShot(time, this,  &SimonMainWindow::getPattern);
}

/// @brief A slot that is used to display the pattern for the user to watch
/// @param pattern 
/// @param level 
void SimonMainWindow::watch(vector<int> pattern, int level){
    disableColorButtons();
    ui->instructions->setText("Watch");
    QString levelToString = QString::number(level);
    ui->numOfLevel->setText(levelToString);
    int stagger = 0;
    int time = 1000;
    for(int x : pattern){
        QPushButton* button = buttons[x];
        string color = colorMap[button];

        QTimer::singleShot(stagger, this, [this, button, color, time]() {
            changeButtonColor(button, color, time);
        });
        stagger += 500;
        time += 1000;
        wait();
    }
    QThread::msleep(500);
    roundTime = 3+(timeRatio)*level;
    ui->timer->display(roundTime);
    timeRatio -= 0.01;
    QTimer::singleShot(time, this,  &SimonMainWindow::repeat);
}

/// @brief A helper slot that is used to change the buttons color 
/// @param button The button whose color will be changed
/// @param color The color to change the button too
/// @param timeout How long the button will be that color before it reverts
void SimonMainWindow::changeButtonColor(QPushButton* button, string color, int timeout)
{
    button->setStyleSheet("background-color: "+ QString::fromStdString(color));
    QTimer::singleShot(timeout, button, [=]() {
        button->setStyleSheet("background-color: { background-color: blue; }");
    });
}

/// @brief A helper method that is used to space out the execution of code
void SimonMainWindow::wait()
{
    QTime delay= QTime::currentTime().addSecs(1);
    while (delay > QTime::currentTime())
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

/// @brief A slot that reprsents the users turn to repeat the pattern
void SimonMainWindow::repeat()
{
    connectTimer();
    timer.start();
    ui->instructions->setText("Repeat");
    setUpColorButtons();
}

/// @brief A helper method that connects the timer to a signal 
void SimonMainWindow::connectTimer(){
    connect(&timer,
            &QTimer::timeout,
            this,
            &SimonMainWindow::updateLcdNumber);
}

/// @brief A slot that disconnects the timer from a signal
void SimonMainWindow::disconnectTimer(){
    disconnect(&timer,
               &QTimer::timeout,
               this,
               &SimonMainWindow::updateLcdNumber);
}

/// @brief A helper method that sets up the color buttons
void  SimonMainWindow::setUpColorButtons(){
    ui->blueButton->setEnabled(true);
    ui->redButton->setEnabled(true);
    ui->greenButton->setEnabled(true);
    ui->yellowButton->setEnabled(true);

    ui->blueButton->setStyleSheet("QPushButton:pressed { background-color: blue; } QPushButton:released { background-color: blue; } QPushButton:hover { color: blue }");
    ui->yellowButton->setStyleSheet("QPushButton:pressed { background-color: yellow; } QPushButton:released { background-color: blue; } QPushButton:hover { color: yellow }");
    ui->greenButton->setStyleSheet("QPushButton:pressed { background-color: green; } QPushButton:released { background-color: blue; } QPushButton:hover { color: green }");
    ui->redButton->setStyleSheet("QPushButton:pressed { background-color: red; } QPushButton:released { background-color: blue; } QPushButton:hover { color: red }");
}

/// @brief A helper method that disables the color buttons
void  SimonMainWindow::disableColorButtons(){
    ui->blueButton->setEnabled(false);
    ui->redButton->setEnabled(false);
    ui->greenButton->setEnabled(false);
    ui->yellowButton->setEnabled(false);
}

/// @brief A slot that is used to handle the visual elements of decreasing the users life
void SimonMainWindow::reduceLife(){
    QLabel* life = lives[0];
    life->hide();
    lives.erase(lives.begin());
}

/// @brief A slot that is used to reset the timer
void SimonMainWindow::resetTimer(){
    if(lives.size() > 0){
        ui->timer->display(roundTime);
        timer.start();
    }
    else
        gameOver();
}

/// @brief A slot that handles what happens when the game is over
void SimonMainWindow::gameOver(){
    disableColorButtons();
    ui->gameOverLabel->setText("Game Over");
    ui->newGameButton->setEnabled(true);
}


