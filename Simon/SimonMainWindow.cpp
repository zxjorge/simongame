#include "SimonMainWindow.h"
#include "ui_simonmainwindow.h"
#include "SimonModel.h"


SimonMainWindow::SimonMainWindow(SimonModel& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimonMainWindow)
{
    ui->setupUi(this);
    ui->blueButton->setStyleSheet("QPushButton:pressed { background-color: blue; } QPushButton:released { background-color: blue; } QPushButton:hover { color: blue }");
    ui->yellowButton->setStyleSheet("QPushButton:pressed { background-color: yellow; } QPushButton:released { background-color: blue; } QPushButton:hover { color: yellow }");
    ui->greenButton->setStyleSheet("QPushButton:pressed { background-color: green; } QPushButton:released { background-color: blue; } QPushButton:hover { color: green }");
    ui->redButton->setStyleSheet("QPushButton:pressed { background-color: red; } QPushButton:released { background-color: blue; } QPushButton:hover { color: red }");

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
    enableColorButtons();
    ui->newGameButton->setEnabled(false);

    //shuffle buttons
    connect(&timer, &QTimer::timeout, this, &SimonMainWindow::shuffleButtons);
    timer.start();

    //game loop
    ui->instructions->setText("Shuffling");

    //use signals and slots to schedule events
    //   while(lives > 0)
    //   {
    //       //While displaying the current pattern, color buttons should be disabled
    //       disableColorButtons();
    //       //set instruction label to display "Watch"
    //       ui->instructions->setText("Watch");
    //       for(int index : pattern){ }
    //    }



    gameOver();
}

void SimonMainWindow::shuffleButtons(){
    for(int i = 0; i < 3; i++){
        int time = 1000;
        int stagger = 2000;
        for(QPushButton* button: buttons)
        {
            QTimer::singleShot(stagger, [=]() {
                // Set the background color of the button to the desired color
                string color = colorMap[button];
                button->setStyleSheet("background-color: "+ QString::fromStdString(color));

                // Use a single-shot timer to change the color back to the original color after 2 seconds
                QTimer::singleShot(time, [=]() { button->setStyleSheet("background-color: { background-color: blue; }");
                });
            });

            time -= 150;
            stagger -= 250;
        }
    }
    timer.stop();
}




void  SimonMainWindow::enableColorButtons(){
    ui->blueButton->setEnabled(true);
    ui->redButton->setEnabled(true);
    ui->greenButton->setEnabled(true);
    ui->yellowButton->setEnabled(true);
}

void  SimonMainWindow::disableColorButtons(){
    ui->blueButton->setEnabled(false);
    ui->redButton->setEnabled(false);
    ui->greenButton->setEnabled(false);
    ui->yellowButton->setEnabled(false);
}

void SimonMainWindow::gameOver(){
}


