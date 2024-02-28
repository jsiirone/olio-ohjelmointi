#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer=new QTimer();
    ui->labelGameStatus->setTextFormat(Qt::RichText);
    setGameInfoText("Select playtime and press start game", 6);
    ui->p1ProgressBar->setValue(0);
    ui->p2ProgressBar->setValue(0);
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(slotTimer()));
    gameState=0;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer=nullptr;
}

void MainWindow::timeOut()
{
    pQTimer->stop();
    if (player1Time==0) setGameInfoText("Player 2 won!!", 12);
    if (player2Time==0) setGameInfoText("Player 1 won!!", 12);
    gameState=0;
}


void MainWindow::on_btnP1SwitchPlayer_clicked()
{
    if (currentPlayer==1 && gameState == 2) currentPlayer=2;
}


void MainWindow::on_btnP2SwitchPlayer_clicked()
{
    if (currentPlayer==2 && gameState == 2) currentPlayer=1;
}


void MainWindow::on_btn120sec_clicked()
{
    if (gameState==0 || gameState==1){
    gameTime=120;
    player1Time=120;
    player2Time=120;
    updateProgressBar();
    setGameInfoText("Ready to play (120 second game)", 6);
    gameState=1;
    }
}


void MainWindow::on_btn5min_clicked()
{
    if (gameState==0 || gameState==1){
    gameTime=300;
    player1Time=300;
    player2Time=300;
    updateProgressBar();
    setGameInfoText("Ready to play (5 minute game)", 6);
    gameState=1;
    }
}


void MainWindow::on_btnStartGame_clicked()
{
    if (gameState==1){
    gameState=2;
   // connect(pQTimer, SIGNAL(timeout()), this, SLOT(slotTimer()));
    pQTimer->start(1000);
    currentPlayer=1;
    setGameInfoText("Game ongoing", 6);
    }
}


void MainWindow::on_btnStopGame_clicked()
{
    setGameInfoText("Game stopped. Select playtime and press start game", 5);
    pQTimer->stop();
    gameState=0;
}

void MainWindow::slotTimer()
{
    if (player1Time==0 || player2Time==0) timeOut();
    if (currentPlayer==1 && player1Time>0){
        player1Time=player1Time-1;
        updateProgressBar();
        qDebug() << player1Time;
    }
    if (currentPlayer==2 && player2Time>0){
        player2Time=player2Time-1;
        updateProgressBar();
        qDebug() << player2Time;
    }
}

void MainWindow::updateProgressBar()
{
    ui->p1ProgressBar->setValue((player1Time*100)/gameTime);
    ui->p2ProgressBar->setValue((player2Time*100)/gameTime);
}

void MainWindow::setGameInfoText(QString gameStatusString, short gameStatusFontSize)
{
    ui->labelGameStatus->setText("<font size=" + QString::number(gameStatusFontSize) + ">" + gameStatusString);

}

