#ifndef SIMONMAINWINDOW_H
#define SIMONMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SimonMainWindow; }
QT_END_NAMESPACE

class SimonMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    SimonMainWindow(QWidget *parent = nullptr);
    ~SimonMainWindow();

private slots:
    void on_greenButton_clicked();
    void on_redButton_clicked();
    void on_yellowButton_clicked();
    void on_blueButton_clicked();
    void on_newGameButton_clicked();

private:
    Ui::SimonMainWindow *ui;
    void enableAllButtons();
    bool gameStarted;
    int lives;
    int currentLevel;


};
#endif // SIMONMAINWINDOW_H
