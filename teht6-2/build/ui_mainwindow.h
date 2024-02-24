/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Number1;
    QLabel *Number2;
    QLabel *Result;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *N1;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *ADD;
    QPushButton *N6;
    QPushButton *SUB;
    QPushButton *N5;
    QPushButton *N4;
    QPushButton *N9;
    QPushButton *MUL;
    QPushButton *N8;
    QPushButton *N7;
    QPushButton *ENTER;
    QPushButton *DIV;
    QPushButton *CLEAR;
    QPushButton *N0;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Number1 = new QLabel(centralwidget);
        Number1->setObjectName("Number1");
        Number1->setGeometry(QRect(60, 20, 70, 16));
        Number2 = new QLabel(centralwidget);
        Number2->setObjectName("Number2");
        Number2->setGeometry(QRect(170, 20, 60, 16));
        Result = new QLabel(centralwidget);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(280, 20, 60, 16));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(60, 50, 100, 22));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(170, 50, 100, 22));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(280, 50, 100, 22));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(60, 110, 75, 24));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(140, 110, 75, 24));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(220, 110, 75, 24));
        ADD = new QPushButton(centralwidget);
        ADD->setObjectName("ADD");
        ADD->setGeometry(QRect(300, 110, 75, 24));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(220, 140, 75, 24));
        SUB = new QPushButton(centralwidget);
        SUB->setObjectName("SUB");
        SUB->setGeometry(QRect(300, 140, 75, 24));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(140, 140, 75, 24));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(60, 140, 75, 24));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(220, 170, 75, 24));
        MUL = new QPushButton(centralwidget);
        MUL->setObjectName("MUL");
        MUL->setGeometry(QRect(300, 170, 75, 24));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(140, 170, 75, 24));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(60, 170, 75, 24));
        ENTER = new QPushButton(centralwidget);
        ENTER->setObjectName("ENTER");
        ENTER->setGeometry(QRect(220, 200, 75, 24));
        DIV = new QPushButton(centralwidget);
        DIV->setObjectName("DIV");
        DIV->setGeometry(QRect(300, 200, 75, 24));
        CLEAR = new QPushButton(centralwidget);
        CLEAR->setObjectName("CLEAR");
        CLEAR->setGeometry(QRect(140, 200, 75, 24));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(60, 200, 75, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Number1->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        Number2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        Result->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        ADD->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        SUB->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        MUL->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        ENTER->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        DIV->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        CLEAR->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
