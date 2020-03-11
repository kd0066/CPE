#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QLabel>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool event(QEvent *event);

protected:
    void keyPressEvent(QKeyEvent *event);

private slots:
    void handleLoadButtonPressed(void);
    void printActionMessage(void);
    void spawnDialogs(void);

private:
    Ui::MainWindow *ui;
    QLabel status;
    int numclicks;
    int numOpenDialogs;

};

#endif // MAINWINDOW_H
