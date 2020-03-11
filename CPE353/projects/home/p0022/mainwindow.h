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
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QAction* load;
    QAction* save;
    QAction* quit;
    QMenu* menu;
    QColor backgroundColor;
    QColor textColor;

public slots:
    void loadImage();
    void saveImage();
    void background();
    void color();
    void setPix();
};

#endif // MAINWINDOW_H
