#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

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

private:
    void fillAreaCode(void);
    void fillPrefix(void);
    void fillSubscriber(void);

private:
    QAction *action1;
    QAction *action2;
    QAction *action3;
    QLabel  *status;

};

#endif // MAINWINDOW_H
