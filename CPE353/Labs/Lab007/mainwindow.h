#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "draglabel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    draglabel* label[3][3];

public slots:
    void reset();
};

#endif // MAINWINDOW_H
