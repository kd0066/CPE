#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QHostAddress>
#include <QPixmap>
#include <QLabel>
#include <QDialog>
#include <QTimer>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "danddlabel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double srotation = 0;
    double mrotation = 0;
    double hrotation = 0;


private slots:
    void handleRXImage(void);
    void goButtonClicked(void);
    void handleTimeout(void);
    void changeInterval(void);
    void increaseSpeed();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QGraphicsScene *scene;
    QTimer *timer;
    QGraphicsRectItem *sHand;
    QGraphicsRectItem *mHand;
    QGraphicsRectItem *hHand;
    unsigned int seconds;
    unsigned int minutes;
    unsigned int hours;
};

#endif // MAINWINDOW_H
