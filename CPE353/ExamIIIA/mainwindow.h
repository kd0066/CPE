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

// Orbit Radius
const int redOrbit = 85;
const int greenOrbit = 100;
const int blueOrbit = 125;

// Planet Diameter
const int sunD = 40;
const int redD = 10;
const int greenD = 20;
const int blueD = 30;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double redPlanet = 0;
    double bluePlanet = 0;
    double greenPlanet = 0;

private:
    Ui::MainWindow *ui;
    QTcpSocket* socket;
    QTimer* timer;
    QGraphicsEllipseItem* red;
    QGraphicsEllipseItem* green;
    QGraphicsEllipseItem* blue;


public slots:
    void tcpPixmap();
    void setButton();
    void setInterval();
    void setPlanetRotation();

};

#endif // MAINWINDOW_H
