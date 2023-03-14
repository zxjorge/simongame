#include "simonmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimonMainWindow w;
    w.show();
    return a.exec();
}
