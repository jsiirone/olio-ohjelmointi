#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state=1;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_N1_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N2_clicked()
{
    numberClickedHandler();
}

void MainWindow::on_N3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N0_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_ADD_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_SUB_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_MUL_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_DIV_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_CLEAR_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_ENTER_clicked()
{
    clearAndEnterClickHandler();
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;
    if (state==1){
    number1 = number1 + name.last(1);
        ui->num1->setText(number1);
    }
    if (state==2){
        number2 = number2 + name.last(1);
        ui->num2->setText(number2);
    }
    if (state==3){ // tyhjentää kentät uudelleennäppäilyä varten ilman clearia
        state=1;
        resetLineEdits();
        number1="";
        number2="";
        number1 = number1 + name.last(1);
        ui->num1->setText(number1);
    }
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;
    if (name=="ENTER") {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();
        qDebug()<<"number1 ="<< n1 << " and number2 = "<< n2 <<Qt::endl;

        switch (operand) {
        case 0:
            result = n1 + n2;
            break;
        case 1:
            result = n1 - n2;
            break;
        case 2:
            result = n1 * n2;
            break;
        case 3:
            result= n1 / n2;
            break;
        }

        ui->result->setText(QString::number(result));
        state=3;
        qDebug() << "enter";
    }
    if (name=="CLEAR") {
        state=1;
        number1="";
        number2="";
        resetLineEdits();
         qDebug() << "clear";
    }

}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;
    if (name=="ADD") {
        operand=0;
        qDebug() << "add";
    }
    if (name=="SUB") {
        operand=1;
        qDebug() << "sub";
    }
    if (name=="MUL") {
        operand=2;
        qDebug() << "mul";
    }
    if (name=="DIV") {
        operand=3;
        qDebug() << "div";
    }
    state=2;
}

void MainWindow::resetLineEdits()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

