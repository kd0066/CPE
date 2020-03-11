#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QKeyEvent>
#include <QPen>
#include <QPixmap>
#include "alien.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    scene = new QGraphicsScene(-XMAX/2, -YMAX/2, XMAX, YMAX, this);
    scene -> setBackgroundBrush(QBrush(Qt::black, Qt::SolidPattern));
    scene -> setItemIndexMethod(QGraphicsScene::NoIndex);
    ui -> graphicsView -> setScene(scene);

    QTimer* timer = new QTimer;
    connect(timer, SIGNAL(timeout()), scene, SLOT(advance()));
    timer -> setInterval(1000/33);
    timer -> start();
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    if (event && event -> key() == Qt::Key_Space) {
        rect = new graphicsrectitem(-5, -5, 10, 10);
        rect -> setPos(0, YMAX/2 - 30);
        scene -> addItem(rect);
    }
    else if (event -> key() == Qt::Key_Escape) {
        alien* a = new alien;
        a -> setPos(-XMAX/2, -YMAX/2);
        scene -> addItem(a);
    }
    else if (event -> key() == Qt::Key_Return) {
        target = new QGraphicsRectItem(-50, 0, 100, 50);
        target -> setPos(0, -YMAX/2);
        target -> setPen(QPen(Qt::green));
        target -> setBrush(QBrush(Qt::green, Qt::SolidPattern));
        scene  -> addItem(target);
    }
    QMainWindow::keyPressEvent(event);
}

MainWindow::~MainWindow()
{
    delete ui;
}
