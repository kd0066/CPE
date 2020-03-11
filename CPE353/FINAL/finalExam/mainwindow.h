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
#include <QPushButton>
#include "pellet.h"
#include "cat.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int count = 0;
    int count2 = 0;


public slots:
    void addScore();
    void setButton();

private:
    Ui::MainWindow *ui;

    QSqlDatabase db;
    QGraphicsScene* scene;

    QTimer* timer;

    Cat* cat;
    QVector<QPixmap*> catpixs;
    QPixmap* pix;
    QGraphicsRectItem* walls;
    Pellet* temp_pellet;
    QVector<Pellet*> pellets;

    QLabel* score;
    int points;
    QTimer* timer2;
    QPushButton* closeButton;

protected:
    void keyPressEvent(QKeyEvent*);

};

#endif // MAINWINDOW_H
