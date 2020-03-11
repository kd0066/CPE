#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QKeyEvent>
#include <QTimer>
#include <QLabel>
#include <QBrush>
#include <QDebug>
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QVector>
#include "pellet.h"
#include "pacman.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    void keyPressEvent(QKeyEvent* e);

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QGraphicsScene* scene;
    QSqlDatabase db;
    QGraphicsRectItem* walls;
    Pellet* temp_pellet;
    int points;
    QVector<Pellet*> pellets;
    QTimer* timer;
    QLabel* score;
    pacman* pac;

private:
    Ui::MainWindow *ui;

public slots:
    void addScore();
};

#endif // MAINWINDOW_H
