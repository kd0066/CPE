#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QMenu>
#include <QLabel>

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
    bool eventFilter(QObject* watched, QEvent* e);
    void mousePressEvent(QMouseEvent *event);

private:
    Ui::MainWindow *ui;
    QMenu* menu;
    QAction* modalAction;

private slots:
    void fileIO();
    void modalDialog();

};

#endif // MAINWINDOW_H
