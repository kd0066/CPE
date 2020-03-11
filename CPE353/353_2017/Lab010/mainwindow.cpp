#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include "alien.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(-XMAX/2, -YMAX/2, XMAX, YMAX, this);
    scene->setBackgroundBrush(QBrush(Qt::white, Qt::SolidPattern));
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    ui->graphicsView->setScene(scene);

    QTimer *timer = new QTimer;
    connect(timer, SIGNAL(timeout()), scene, SLOT(advance()));

    timer->setInterval(1000/33);
    timer->start();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event && event->key() == Qt::Key_Space)
    {
        rect1 = new GraphicsRectItem(-5, -5, 10, 20);
        rect1->setPos(0, YMAX/2 - 30);
        scene->addItem(rect1);
    }
    else if(event->key() == Qt::Key_Escape)
    {
        Alien *alien = new Alien;
        alien->setPos(-XMAX/2, -YMAX/2);
        scene->addItem(alien);
    }
    else if(event->key() == Qt::Key_Return)
    {
        target = new QGraphicsRectItem(-50, 0, 100, 50);
        target->setPos(0, YMAX/2);
        target->setPen(QPen(Qt::green));;
        target->setBrush(QBrush(Qt::green, Qt::SolidPattern));
        scene->addItem(target);
    }
    QMainWindow::keyPressEvent(event);
}

MainWindow::~MainWindow()
{
    delete ui;
}
