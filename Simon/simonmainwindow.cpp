#include "simonmainwindow.h"
#include "ui_simonmainwindow.h"


SimonMainWindow::SimonMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimonMainWindow)
{
    ui->setupUi(this);
    ui->blueButton->setStyleSheet("QPushButton:pressed { background-color: blue; } QPushButton:released { background-color: blue; } QPushButton:hover { color: blue }");
    ui->yellowButton->setStyleSheet("QPushButton:pressed { background-color: yellow; } QPushButton:released { background-color: blue; } QPushButton:hover { color: yellow }");
    ui->greenButton->setStyleSheet("QPushButton:pressed { background-color: green; } QPushButton:released { background-color: blue; } QPushButton:hover { color: green }");
    ui->redButton->setStyleSheet("QPushButton:pressed { background-color: red; } QPushButton:released { background-color: blue; } QPushButton:hover { color: red }");

    ui->blueButton->setEnabled(false);
    ui->redButton->setEnabled(false);
    ui->greenButton->setEnabled(false);
    ui->yellowButton->setEnabled(false);
    lives = 0;

    gameStarted = false;
}

SimonMainWindow::~SimonMainWindow()
{
    delete ui;
}

void SimonMainWindow::on_greenButton_clicked()
{
}

void SimonMainWindow::on_redButton_clicked()
{
}

void SimonMainWindow::on_yellowButton_clicked()
{
}

void SimonMainWindow::on_blueButton_clicked()
{
}


void SimonMainWindow::on_newGameButton_clicked()
{
   enableAllButtons();
   gameStarted = true;
   ui->newGameButton->setEnabled(false);
   lives = 3;
   //shuffle buttons and create first level
   //game loop
   while(lives > 0){
   //while displaying the current pattern
   // set instruction label to display "Watch"
       ui->instructions->setText("Watch");
   //display

}





}

void  SimonMainWindow::enableAllButtons(){
    ui->blueButton->setEnabled(true);
    ui->redButton->setEnabled(true);
    ui->greenButton->setEnabled(true);
    ui->yellowButton->setEnabled(true);
}


