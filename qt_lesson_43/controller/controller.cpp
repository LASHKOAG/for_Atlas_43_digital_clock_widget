#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent)
{
    mainwindow = new MainWindow();
    id_timer_one_sec = startTimer(1000);
    connect(this, &Controller::signalOneSec, mainwindow, &MainWindow::updateLblSec);
}

Controller::~Controller()
{
    if (mainwindow != nullptr) {delete mainwindow;}
}

void Controller::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == id_timer_one_sec)
    {
        qDebug() << "-----------------------------";
        qDebug() << "Second class: timer = 1000   | id_timer_one_sec = " << id_timer_one_sec;
        qDebug() << "-----------------------------";

        emit signalOneSec();
    }
}

void Controller::startApp()
{
    qDebug() << ">This is startApp()";

    mainwindow->show();
}

