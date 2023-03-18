/********************************************************************************
** Form generated from reading UI file 'SimonMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMONMAINWINDOW_H
#define UI_SIMONMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimonMainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *blueButton;
    QPushButton *yellowButton;
    QPushButton *greenButton;
    QPushButton *newGameButton;
    QPushButton *redButton;
    QSplitter *splitter;
    QLabel *instructions;
    QProgressBar *progressBar;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QLabel *levelLabel;
    QLabel *numOfLevel;
    QLCDNumber *timer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SimonMainWindow)
    {
        if (SimonMainWindow->objectName().isEmpty())
            SimonMainWindow->setObjectName("SimonMainWindow");
        SimonMainWindow->resize(800, 600);
        centralwidget = new QWidget(SimonMainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(99, 120, 311, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        blueButton = new QPushButton(layoutWidget);
        blueButton->setObjectName("blueButton");

        gridLayout->addWidget(blueButton, 0, 2, 1, 1);

        yellowButton = new QPushButton(layoutWidget);
        yellowButton->setObjectName("yellowButton");

        gridLayout->addWidget(yellowButton, 3, 2, 1, 1);

        greenButton = new QPushButton(layoutWidget);
        greenButton->setObjectName("greenButton");

        gridLayout->addWidget(greenButton, 0, 0, 1, 1);

        newGameButton = new QPushButton(layoutWidget);
        newGameButton->setObjectName("newGameButton");
        newGameButton->setAutoFillBackground(false);
        newGameButton->setAutoRepeatInterval(101);
        newGameButton->setFlat(false);

        gridLayout->addWidget(newGameButton, 2, 1, 1, 1);

        redButton = new QPushButton(layoutWidget);
        redButton->setObjectName("redButton");

        gridLayout->addWidget(redButton, 3, 0, 1, 1);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(100, 90, 311, 20));
        splitter->setOrientation(Qt::Horizontal);
        instructions = new QLabel(splitter);
        instructions->setObjectName("instructions");
        splitter->addWidget(instructions);
        progressBar = new QProgressBar(splitter);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(0);
        splitter->addWidget(progressBar);
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setGeometry(QRect(490, 100, 64, 35));
        splitter_3->setOrientation(Qt::Vertical);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        levelLabel = new QLabel(splitter_2);
        levelLabel->setObjectName("levelLabel");
        splitter_2->addWidget(levelLabel);
        numOfLevel = new QLabel(splitter_2);
        numOfLevel->setObjectName("numOfLevel");
        splitter_2->addWidget(numOfLevel);
        splitter_3->addWidget(splitter_2);
        timer = new QLCDNumber(splitter_3);
        timer->setObjectName("timer");
        splitter_3->addWidget(timer);
        SimonMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SimonMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        SimonMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SimonMainWindow);
        statusbar->setObjectName("statusbar");
        SimonMainWindow->setStatusBar(statusbar);

        retranslateUi(SimonMainWindow);

        QMetaObject::connectSlotsByName(SimonMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SimonMainWindow)
    {
        SimonMainWindow->setWindowTitle(QCoreApplication::translate("SimonMainWindow", "SimonMainWindow", nullptr));
        blueButton->setText(QCoreApplication::translate("SimonMainWindow", "Blue", nullptr));
        yellowButton->setText(QCoreApplication::translate("SimonMainWindow", "Yellow", nullptr));
        greenButton->setText(QCoreApplication::translate("SimonMainWindow", "Green", nullptr));
        newGameButton->setText(QCoreApplication::translate("SimonMainWindow", "New Game", nullptr));
        redButton->setText(QCoreApplication::translate("SimonMainWindow", "Red", nullptr));
        instructions->setText(QString());
        levelLabel->setText(QCoreApplication::translate("SimonMainWindow", "Level", nullptr));
        numOfLevel->setText(QCoreApplication::translate("SimonMainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimonMainWindow: public Ui_SimonMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMONMAINWINDOW_H
