#include "SimonMainWindow.h"
#include "ui_simonmainwindow.h"
#include "SimonModel.h"


SimonMainWindow::SimonMainWindow(SimonModel& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimonMainWindow)
{
    timeRatio = 1.5;
    timer.setInterval(1000);

    ui->setupUi(this);
    disableColorButtons();
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

    connect(ui->newGameButton,
            &QPushButton::clicked,
            &model,
            &SimonModel::newGame);

    connect(ui->redButton,
            &QPushButton::clicked,
            this,
            &SimonMainWindow::redButtonClicked);
    connect(ui->blueButton,
            &QPushButton::clicked,
            this,
            &SimonMainWindow::blueButtonClicked);
    connect(ui->greenButton,
            &QPushButton::clicked,
            this,
            &SimonMainWindow::greenButtonClicked);
    connect(ui->yellowButton,
            &QPushButton::clicked,
            this,
            &SimonMainWindow::yellowButtonClicked);

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

SimonMainWindow::~SimonMainWindow()
{
    delete ui;
}

void SimonMainWindow::greenButtonClicked()
{
    emit verify(2);
}

void SimonMainWindow::redButtonClicked()
{
    emit verify(0);
}

void SimonMainWindow::yellowButtonClicked()
{
    emit verify(3);
}

void SimonMainWindow::blueButtonClicked()
{
    emit verify(1);
}

void SimonMainWindow::setProgress(int progress)
{
    ui->progressBar->setValue(progress);
}


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
    //shuffle buttons
    ui->instructions->setText("Shuffling");
    shuffleButtons();
}

void SimonMainWindow::updateLcdNumber(){
    // Get the current value of the LCD number
    int value = ui->timer->intValue();
    value--;
    ui->timer->display(value);

    if (value == 0){
        timer.stop();
        emit timerStopped();
    }
}

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
    QThread::sleep(1);
    roundTime = 3+(timeRatio)*level;
    ui->timer->display(roundTime);
    timeRatio -= 0.01;
    QTimer::singleShot(time, this,  &SimonMainWindow::repeat);
}

void SimonMainWindow::changeButtonColor(QPushButton* button, string color, int timeout)
{
    button->setStyleSheet("background-color: "+ QString::fromStdString(color));
    QTimer::singleShot(timeout, button, [=]() {
        button->setStyleSheet("background-color: { background-color: blue; }");
    });
}

void SimonMainWindow::wait()
{
    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


void SimonMainWindow::repeat()
{
    connectTimer();
    timer.start();
    ui->instructions->setText("Repeat");
    setUpColorButtons();
}

void SimonMainWindow::connectTimer(){
    connect(&timer,
            &QTimer::timeout,
            this,
            &SimonMainWindow::updateLcdNumber);
}

void SimonMainWindow::disconnectTimer(){
    disconnect(&timer,
               &QTimer::timeout,
               this,
               &SimonMainWindow::updateLcdNumber);
}


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

void  SimonMainWindow::disableColorButtons(){
    ui->blueButton->setEnabled(false);
    ui->redButton->setEnabled(false);
    ui->greenButton->setEnabled(false);
    ui->yellowButton->setEnabled(false);
}

void SimonMainWindow::reduceLife(){
    QLabel* life = lives[0];
    life->hide();
    lives.erase(lives.begin());
}

void SimonMainWindow::resetTimer(){
    if(lives.size() > 0){
        ui->timer->display(roundTime);
        timer.start();
    }
    else
        gameOver();
}

void SimonMainWindow::gameOver(){
    disableColorButtons();
    ui->gameOverLabel->setText("Game Over");
    ui->newGameButton->setEnabled(true);
}


