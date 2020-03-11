#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(ui->graphicsView);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setSceneRect(-200, -150, 400, 300);

    ui->graphicsView->setScene(scene);
    scene->setBackgroundBrush(Qt::black);

    QPen *pen = new QPen;
    pen->setColor(Qt::blue);
    pen->setWidth(3);
    QGraphicsEllipseItem *clock = scene->addEllipse(-100, -100, 200, 200, *pen);

    for(int i = 0; i < 12; i++)
    {
        QGraphicsLineItem *lines = scene->addLine(0, -100, 0, -85, *pen);
        lines->setRotation(30 * i);
    }

    pen->setColor(Qt::red);
    hand = scene->addRect(0, -100, 0, 100, *pen);

    seconds = 0;
    minutes = 0;
    hours = 0;
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timeOut()));
    timer->start(1000);

    connect(ui->rightButton, SIGNAL(clicked(bool)), this, SLOT(rightButtonClicked()));
    connect(ui->leftButton, SIGNAL(clicked(bool)), this, SLOT(leftButtonClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::leftButtonClicked()
{
    QDialog *d = new QDialog(this);
    DAndDLabel *label = new DAndDLabel(ui->leftEdit->text());
    QVBoxLayout *layout = new QVBoxLayout(d);
    ui->leftEdit->clear();
    layout->addWidget(label);
    label->show();
    d->show();
}

void MainWindow::rightButtonClicked()
{
    QDialog *d = new QDialog(this);
    DAndDLabel *label = new DAndDLabel(ui->rightEdit->text());
    QVBoxLayout *layout = new QVBoxLayout(d);
    ui->rightEdit->clear();
    layout->addWidget(label);
    label->show();
    d->show();
}

void MainWindow::timeOut()
{
    seconds++;
    if(seconds == 60)
    {
        minutes++;
        seconds = 0;
    }
    if(minutes == 60)
    {
        minutes = 0;
        hours++;
    }

    QString string = QString("%1:%2:%3").arg(hours).arg(minutes).arg(seconds);
    qDebug() << string;
    static int rotation = 0;
    if(rotation != 0 && (rotation % 360) == 0)
        rotation = 0;
    else
        hand->setRotation(rotation++);
}
