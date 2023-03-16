/********************************************************************************
** Form generated from reading UI file 'simonmainwindow.ui'
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimonMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *instructions;
    QProgressBar *progressBar;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *blueButton;
    QPushButton *redButton;
    QPushButton *newGameButton;
    QPushButton *greenButton;
    QPushButton *yellowButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SimonMainWindow)
    {
        if (SimonMainWindow->objectName().isEmpty())
            SimonMainWindow->setObjectName("SimonMainWindow");
        SimonMainWindow->resize(800, 600);
        centralwidget = new QWidget(SimonMainWindow);
        centralwidget->setObjectName("centralwidget");
        instructions = new QLabel(centralwidget);
        instructions->setObjectName("instructions");
        instructions->setGeometry(QRect(120, 80, 37, 12));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(290, 90, 118, 23));
        progressBar->setValue(24);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(99, 120, 311, 121));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        blueButton = new QPushButton(widget);
        blueButton->setObjectName("blueButton");

        gridLayout->addWidget(blueButton, 0, 2, 1, 1);

        redButton = new QPushButton(widget);
        redButton->setObjectName("redButton");

        gridLayout->addWidget(redButton, 1, 0, 2, 1);

        newGameButton = new QPushButton(widget);
        newGameButton->setObjectName("newGameButton");
        newGameButton->setAutoFillBackground(false);
        newGameButton->setAutoRepeatInterval(101);
        newGameButton->setFlat(false);

        gridLayout->addWidget(newGameButton, 1, 1, 1, 1);

        greenButton = new QPushButton(widget);
        greenButton->setObjectName("greenButton");

        gridLayout->addWidget(greenButton, 0, 0, 1, 1);

        yellowButton = new QPushButton(widget);
        yellowButton->setObjectName("yellowButton");

        gridLayout->addWidget(yellowButton, 2, 2, 1, 1);

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
        instructions->setText(QString());
        blueButton->setText(QCoreApplication::translate("SimonMainWindow", "Blue", nullptr));
        redButton->setText(QCoreApplication::translate("SimonMainWindow", "Red", nullptr));
        newGameButton->setText(QCoreApplication::translate("SimonMainWindow", "New Game", nullptr));
        greenButton->setText(QCoreApplication::translate("SimonMainWindow", "Green", nullptr));
        yellowButton->setText(QCoreApplication::translate("SimonMainWindow", "Yellow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimonMainWindow: public Ui_SimonMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMONMAINWINDOW_H
