#include "SimonMainWindow.h"
#include "SimonModel.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimonModel model;
    SimonMainWindow w(model);
    w.show();
    return a.exec();
}
