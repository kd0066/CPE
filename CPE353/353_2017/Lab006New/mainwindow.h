#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "label.h"

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
    Label* labels[3][3];
};

#endif // MAINWINDOW_H
