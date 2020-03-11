#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QGraphicsRectItem>
#include <QSqlDatabase>
#include <QEvent>
#include <QSqlQuery>
#include "defs.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//protected:
//    void keyPressEvent(QKeyEvent *event);
private:
    bool eventFilter(QObject *watched, QEvent *event);

private:
    QGraphicsScene *scene;
    QGraphicsRectItem *rectItem;
    QSqlDatabase db;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
