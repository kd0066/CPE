#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QTimer>
#include <QKeyEvent>
#include "myobject.h"
#include "pellet.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    // Graphics
    QGraphicsScene *_scene;
    QVector<pellet*> _pellets;
    QVector<QGraphicsRectItem*> _walls;
    QTimer *rotater;
    QTimer *velocity;
    pellet *newPellet;
    QGraphicsRectItem *wall;
    myObject* _someObject;

    void collisionDetection();
    void keyPressEvent(QKeyEvent *event);
    void setupGraphics(QColor color, qreal w, qreal h, qreal x, qreal y);
    void pullCoordinates();

private slots:
    void rotatePellets();
    void move(char);
};

#endif // MAINWINDOW_H
