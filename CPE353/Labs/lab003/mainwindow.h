#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
const int MAX = 30;

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

public slots:
    void printNum1();
    void area();
    void pref();
    void subs();
};

#endif // MAINWINDOW_H
