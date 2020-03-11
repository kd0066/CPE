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

private slots:
    void redAction(void);
    void greenAction(void);
    void blueAction(void);

private:
    Ui::MainWindow *ui;
    QAction *action1;
    QAction *action2;
    QAction *action3;
    QLabel *label;

};

#endif // MAINWINDOW_H
