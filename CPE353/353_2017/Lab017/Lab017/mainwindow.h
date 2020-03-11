#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QGraphicsScene>
#include "target.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void mousePressEvent(QMouseEvent *event);

private slots:
    void startCycle(void);
    void resetCycle(void);
    void createTarget(void);
    void showStatistics(void);
    void purgeDatabase(void);

private:
    QSqlDatabase db;
    QGraphicsScene *scene;
    QTimer *delay;
    target *target;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
