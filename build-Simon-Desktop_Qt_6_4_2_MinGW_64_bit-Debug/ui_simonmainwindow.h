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
    } // retranslateUi

};

namespace Ui {
    class SimonMainWindow: public Ui_SimonMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMONMAINWINDOW_H
