#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
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
    bool event(QEvent *event);

protected:
    void keyPressEvent(QKeyEvent *event);

private slots:
    void populateComboBox(void);

private:
    QLabel *status;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
