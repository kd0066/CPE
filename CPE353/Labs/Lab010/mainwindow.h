#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include "graphicsrectitem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void keyPressEvent(QKeyEvent* event);

private:
    Ui::MainWindow *ui;
    QGraphicsScene* scene;
    graphicsrectitem* rect;
    QGraphicsRectItem* target;
};

#endif // MAINWINDOW_H
