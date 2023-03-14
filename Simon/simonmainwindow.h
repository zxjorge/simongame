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

private:
    Ui::SimonMainWindow *ui;
};
#endif // SIMONMAINWINDOW_H
