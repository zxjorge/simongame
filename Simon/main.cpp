#include "SimonMainWindow.h"
#include "SimonModel.h"
#include <QApplication>

/*
 * George Benyeogor
 * CS3505
 * A5: Simon Game
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimonModel model;
    SimonMainWindow w(model);
    w.show();
    return a.exec();
}
