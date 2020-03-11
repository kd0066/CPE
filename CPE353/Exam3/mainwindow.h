#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QtDebug>
#include <QHostAddress>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QPainter>
#include <QFont>
#include <QTimer>
#include <QDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Ui::MainWindow *ui;   // This variable must remain PUBLIC
    double srotation = 0;
    double mrotation = 0;
    double hrotation = 0;

    QTcpSocket* socket;
    QGraphicsScene *scene;
    QTimer *timer;
    QGraphicsRectItem *sHand;
    QGraphicsRectItem *mHand;
    QGraphicsRectItem *hHand;
    unsigned int seconds;
    unsigned int minutes;
    unsigned int hours;


private slots:
    void updateStatus(QString& s);
    void handleRXImage();
    void handleTimeout();
    void changeInterval();
    void increaseSpeed();

};

#endif // MAINWINDOW_H
