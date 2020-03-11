#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QRect>
#include <QPoint>
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

private:
    Ui::MainWindow *ui;
    QLabel* label;
    QAction* david;
    QAction* ho;
    QAction* aleks;
    QToolBar* toolBar;

public slots:
    void davidsButton();
    void hosbutton();
    void aleksbutton();

};

#endif // MAINWINDOW_H
