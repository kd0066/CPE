#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "danddlabel.h"
#include <QLineEdit>
#include <QVBoxLayout>
#include <QDialog>
#include <QPushButton>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QGraphicsEllipseItem>
#include <QGraphicsView>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void leftButtonClicked(void);
    void rightButtonClicked(void);
    void timeOut(void);

private:
    QGraphicsScene *scene;
    QTimer *timer;
    QGraphicsRectItem *hand;
    unsigned int seconds;
    unsigned int minutes;
    unsigned int hours;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
