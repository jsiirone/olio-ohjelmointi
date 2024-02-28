#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTimer>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void timeOut();

private slots:
    void on_btnP1SwitchPlayer_clicked();
    void on_btnP2SwitchPlayer_clicked();
    void on_btn120sec_clicked();
    void on_btn5min_clicked();
    void on_btnStartGame_clicked();
    void on_btnStopGame_clicked();
    void slotTimer();

private:

    Ui::MainWindow *ui;

    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer *pQTimer;
    short gameState;  // gamestate säätelee mitkä napit toimivat milloinkin - 0 aika ja stop; 1 aika, start ja stop; 2 switch player ja stop
    void updateProgressBar();
    void setGameInfoText(QString,short);

};
#endif // MAINWINDOW_H
