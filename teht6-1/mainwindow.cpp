#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCount_clicked()
{
    clickCount++;
    ui->lineEdit->setText(QString::number(clickCount));
}


void MainWindow::on_btnReset_clicked()
{
    clickCount=0;
    ui->lineEdit->setText(QString::number(clickCount));
}

