#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QDebug>
#include <mainwindow.h>
#include <QTimerEvent>


class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();
    void timerEvent(QTimerEvent* event);
    void startApp();
    MainWindow* mainwindow {nullptr};

private:
    int id_timer_one_sec{-1};

signals:
    void signalOneSec();

public slots:
};

#endif // CONTROLLER_H
