#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringListModel>

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
    QStringListModel *listModel;
    QStringList list;

private slots:
    void addToList(void);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
