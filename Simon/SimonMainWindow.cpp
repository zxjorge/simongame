#include "SimonMainWindow.h"
#include "ui_simonmainwindow.h"
#include "SimonModel.h"


SimonMainWindow::SimonMainWindow(SimonModel& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimonMainWindow)
{
    ui->setupUi(this);
    setUpColorButtons();

    disableColorButtons();

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

    connect(&model,
            &SimonModel::startGame,
            this,
            &SimonMainWindow::startGame);

    connect(this, &SimonMainWindow::getPattern, &model,
            &SimonModel::getPattern);

    connect(&model,
            &SimonModel::returnPattern,
            this,
            &SimonMainWindow::watch);
}

SimonMainWindow::~SimonMainWindow()
{
    delete ui;
}

void SimonMainWindow::greenButtonClicked()
{
}

void SimonMainWindow::redButtonClicked()
{
}

void SimonMainWindow::yellowButtonClicked()
{
}

void SimonMainWindow::blueButtonClicked()
{
}


void SimonMainWindow::startGame()
{
    setUpColorButtons();
    ui->newGameButton->setEnabled(false);

    //shuffle buttons
    ui->instructions->setText("Shuffling");
    shuffleButtons();
}

void SimonMainWindow::shuffleButtons(){
    for(int i = 0; i < 3; i++){
        int stagger = 1200;
        int time = 1000;
        for(QPushButton* button: buttons)
        {
            string color = colorMap[button];
            QTimer::singleShot(stagger,[this, button, color, time]() {
                changeButtonColor(button, color, time);
            });
            stagger -= 100;
            time -= 150;
        }
    }

    QTimer::singleShot(2500, this,  &SimonMainWindow::getPattern);

}

void SimonMainWindow::watch(vector<int> pattern, int level){
    disableColorButtons();
    ui->instructions->setText("Watch");
    QString levelToString = QString::number(level);
    ui->numOfLevel->setText(levelToString);
    int stagger = 1500;
    int time = 1000;
    for(int x : pattern){
        QPushButton* button = buttons[x];
        string color = colorMap[button];

        QTimer::singleShot(stagger, this, [this, button, color, time]() {
            changeButtonColor(button, color, time);
        });
    }
    QTimer::singleShot(2500, this,  &SimonMainWindow::repeat);
}

void SimonMainWindow::changeButtonColor(QPushButton* button, string color, int time)
{
    button->setStyleSheet("background-color: "+ QString::fromStdString(color));

    // Use a single-shot timer to change the color back to the original color after 2 seconds
    QTimer::singleShot(time, [=]() { button->setStyleSheet("background-color: { background-color: blue; }");
    });
}


void SimonMainWindow::repeat()
{
    ui->instructions->setText("Repeat");
    setUpColorButtons();

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

void SimonMainWindow::gameOver(){
}


