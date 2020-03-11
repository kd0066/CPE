#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool eventFilter(QObject* watched, QEvent* event);


private:
    Ui::MainWindow *ui;
    QMenu* menu;
    QAction* action;
    QAction* action2;
    QString s;

public slots:
        void fileO();
        void fileI();
        void buttons();

};

#endif // MAINWINDOW_H
