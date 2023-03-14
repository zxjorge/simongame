#include "simonmainwindow.h"
#include "ui_simonmainwindow.h"

SimonMainWindow::SimonMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SimonMainWindow)
{
    ui->setupUi(this);
}

SimonMainWindow::~SimonMainWindow()
{
    delete ui;
}

