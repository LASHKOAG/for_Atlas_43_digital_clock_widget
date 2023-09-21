#include <QApplication>

#include "mainwindow.h"
#include "controller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //    MainWindow w;
    //    w.show();

    Controller* controller = new Controller();
    controller->startApp();


    return a.exec();

    if (controller != nullptr) {delete controller;}
}
