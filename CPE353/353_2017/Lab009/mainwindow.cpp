#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPainter>
#include <QAction>
#include <QRect>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    action1 = new QAction(QIcon(":/images/Penguins.jpg"), "Red", this);
    action2 = new QAction(QIcon(":images/Emperor_penguins.jpg"), "Green", this);
    action3 = new QAction(QIcon(":/images/istock-511366776.jpg"), "Blue", this);

    ui->mainToolBar->addAction(action1);
    ui->mainToolBar->addAction(action2);
    ui->mainToolBar->addAction(action3);


    QPixmap map(600, 480);
    map.fill(Qt::black);

    QPainter p(&map);
    p.setRenderHint(QPainter::Antialiasing, true);
    p.setPen(QPen(Qt::green, 2, Qt::SolidLine, Qt::RoundCap));
    p.setBrush(QBrush(Qt::green, Qt::SolidPattern));
    p.drawRect(25, 25, 50, 30);

    label = new QLabel;
    label->setPixmap(map);


    setCentralWidget(label);

    connect(action1, SIGNAL(triggered(bool)), this, SLOT(redAction()));
    connect(action2, SIGNAL(triggered(bool)), this, SLOT(greenAction()));
    connect(action3, SIGNAL(triggered(bool)), this, SLOT(blueAction()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::redAction()
{
    QPixmap myMap(600, 480);
    myMap.fill(Qt::gray);
    QPainter p(&myMap);
    p.setRenderHint(QPainter::Antialiasing, true);;
    p.setPen(QPen(Qt::red, 10, Qt::SolidLine, Qt::FlatCap));
    QRect rect1(125, 75, 150, 150);
    p.drawEllipse(rect1);
    label->setPixmap(myMap);
}

void MainWindow::greenAction()
{
    QPixmap myMap(600, 480);
    myMap.fill(Qt::gray);;
    QPainter p(&myMap);
    p.setRenderHint(QPainter::Antialiasing, true);
    p.setPen(QPen(Qt::green, 10, Qt::SolidLine, Qt::FlatCap));
    p.setBrush(QBrush(Qt::green, Qt::SolidPattern));;
    QRect rect1(125, 75, 150, 150);
    p.drawRect(rect1);
    label->setPixmap(myMap);
}

void MainWindow::blueAction()
{
    QPixmap myMap(600, 480);
    myMap.fill(Qt::gray);
    QPainter p(&myMap);
    p.setRenderHint(QPainter::Antialiasing, true);
    p.setPen(QPen(Qt::blue, 10, Qt::SolidLine, Qt::FlatCap));
    p.setBrush(QBrush(Qt::blue, Qt::SolidPattern));
    QRect rect1(125, 75, 150, 150);
    QPoint points[4] = {QPoint(200, 100), QPoint(215, 175),
                QPoint(200, 150), QPoint(185, 175)};
    p.drawPolygon(points, 4);
    label->setPixmap(myMap);
}
