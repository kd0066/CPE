#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage("Penis");
    scene = new QGraphicsScene(-1024/2, -768/2, 1024, 768);
    scene -> setBackgroundBrush(Qt::black);
    ui -> graphicsView -> setScene(scene);

    timer = new QTimer;
    timer -> setInterval(12);
//    timer -> start();

    rocket = new redRocket("home/student/kd0066/353/spaceRace/rocket.png", this);
    scene -> addItem(rocket);
}

MainWindow::~MainWindow()
{
    delete ui;
}
