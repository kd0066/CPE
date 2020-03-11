#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QAction>
#include <QLabel>
#include <QFile>
#include <QtDebug>
#include <QMouseEvent>
#include <QIntValidator>
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QRegularExpressionValidator>
#include <QMessageBox>

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
    QString s;
    QMenu* menu;
    QAction* a1;
    QAction* a2;

public slots:
    void fileI();
    void fileO();
    void button();
    void regex();


};

#endif // MAINWINDOW_H
