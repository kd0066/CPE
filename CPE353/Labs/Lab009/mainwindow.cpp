#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    label = new QLabel(this);
    setCentralWidget(label);
    QPixmap myMap(600, 480);
    myMap.fill(Qt::gray);
    label -> setPixmap(myMap);

    connect(ui -> actiondavidsButton, SIGNAL(triggered()), this, SLOT(davidsButton()));
    connect(ui -> actionhosButton, SIGNAL(triggered()), this, SLOT(hosbutton()));
    connect(ui -> actionaleksbutton, SIGNAL(triggered()), this, SLOT(aleksbutton()));
    ui -> mainToolBar -> setIconSize(QSize(50,50));
}

void MainWindow::davidsButton() {
    QPixmap myMap(600, 480);
    myMap.fill(Qt::green);
    QPainter p(&myMap);
    p.setRenderHint(QPainter::Antialiasing, true);
    p.setPen(QPen(Qt::red, 10, Qt::SolidLine, Qt::FlatCap));
    QRect rect(125, 75, 150, 150);
    p.drawEllipse(rect);
    label -> setPixmap(myMap);

}

void MainWindow::hosbutton() {
    QPixmap myMap(600, 480);
    myMap.fill(Qt::yellow);
    QPainter p(&myMap);
    p.setRenderHint(QPainter::Antialiasing, true);
    p.setPen(QPen(Qt::blue, 10, Qt::SolidLine, Qt::FlatCap));
    QPoint points[4] = {QPoint(200, 100), QPoint(215, 175), QPoint(200, 150), QPoint(185, 175)};
    p.drawPolygon(points, 4);
    label -> setPixmap(myMap);

}

void MainWindow::aleksbutton() {
    QPixmap myMap(600, 480);
    myMap.fill(Qt::black);
    QPainter p(&myMap);
    p.setRenderHint(QPainter::Antialiasing, true);
    p.setPen(QPen(Qt::magenta, 10, Qt::SolidLine, Qt::FlatCap));
    QRect rect(125, 75, 150, 150);
    p.drawRect(rect);
    label -> setPixmap(myMap);

}


MainWindow::~MainWindow()
{
    delete ui;
}
