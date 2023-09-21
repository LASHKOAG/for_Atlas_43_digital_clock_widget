#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateLblSec()
{
    count_sec++;
    if (count_sec == 60)
    {
        count_sec = 0;
    }
    ui->lbl_sec->setText(QString::number(count_sec));

}
