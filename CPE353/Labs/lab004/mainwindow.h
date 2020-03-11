#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    QLabel* status;
    ~MainWindow();

protected:
    bool event(QEvent* e);
    void keyPressEvent(QKeyEvent* ke);

private:
    Ui::MainWindow *ui;

public slots:
    void findFile();
};

#endif // MAINWINDOW_H
