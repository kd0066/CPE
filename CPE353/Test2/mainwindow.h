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
    explicit MainWindow(QWidget *parent = nullptr);
    QLabel* status;
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void mousePressEvent(QMouseEvent* event);
    bool eventFilter(QObject* watched, QEvent* event);
    QLabel* answer;

public slots:
    void fileLoad();
    void actionTrigg();
    void nonModalShit();
};

#endif // MAINWINDOW_H
