#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QPixmap>
#include <QBuffer>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket;
    socket->connectToHost(QHostAddress::LocalHost, 5678, QIODevice::ReadOnly);
    socket->waitForConnected();

    scene = new QGraphicsScene(ui->graphicsView);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setSceneRect(-200, -150, 400, 300);

    ui->graphicsView->setScene(scene);
    scene->setBackgroundBrush(Qt::black);

    QPen *pen = new QPen;
    pen->setColor(Qt::blue);
    pen->setWidth(5);

    QGraphicsEllipseItem *clock = new QGraphicsEllipseItem;
    clock = scene->addEllipse(-100, -100, 200, 200, *pen);

    pen->setWidth(5);
    for(int i = 0; i < 12; i++)
    {
        QGraphicsLineItem *lines = scene->addLine(0, -100, 0, -85, *pen);
        lines->setRotation(30 * i);
    }

    pen->setColor(Qt::red);
    pen->setWidth(6);
    sHand = scene->addRect(0, -90, 0, 80, *pen);

    pen->setColor(Qt::green);
    mHand = scene->addRect(0, -100, 0, 90, *pen);

    pen->setColor(Qt::white);
    hHand = scene->addRect(0, -60, 0, 60, *pen);

    timer = new QTimer(this);
    timer->setInterval(1000);

    seconds = 0;
    minutes = 0;
    hours = 0;

    connect(timer, SIGNAL(timeout()), this, SLOT(handleTimeout()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(handleRXImage()));
    connect(ui -> button, SIGNAL(clicked()), this, SLOT(changeInterval()));
    connect(ui->goButton, SIGNAL(clicked(bool)), this, SLOT(goButtonClicked()));
    connect(ui->slider, static_cast<void (QSlider::*)(int)>(&QSlider::valueChanged), this, &MainWindow::increaseSpeed);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleRXImage()
{
    QPixmap pm;
    QFile file;
    QByteArray byte = file.readAll();
    QString string(byte);
    if (string == "< bear.jpg") {
        pm = QPixmap("/home/student/kd0066/353/build-ExamIIIA-Desktop_Qt_5_12_4_GCC_64bit-Debug/bear.jpg");
        ui -> imageLabel -> setPixmap(pm);
    }
    else if (string == "< otter.jpg") {
        pm = QPixmap("/home/student/kd0066/353/build-ExamIIIA-Desktop_Qt_5_12_4_GCC_64bit-Debug/otter.jpg");
        ui -> imageLabel -> setPixmap(pm);
    }
    else if (string == "< tiger.jpg") {
        pm = QPixmap("/home/student/kd0066/353/build-ExamIIIA-Desktop_Qt_5_12_4_GCC_64bit-Debug/tiger.jpg");
        ui -> imageLabel -> setPixmap(pm);
    }
    else {
        qDebug() << "SHIT DONT WORK";
    }
    int number = byte.size();
    QString other;
    other.setNum(number);
    QPainter* painter = new QPainter;
}

void MainWindow::goButtonClicked()
{
    QDialog *d1 = new QDialog(this);
    QDialog *d2 = new QDialog(this);

    DAndDLabel *label1 = new DAndDLabel(ui->rightEdit->text());
    DAndDLabel *label2 = new DAndDLabel(ui->leftEdit->text());

    QVBoxLayout *layout1 = new QVBoxLayout(d1);
    QVBoxLayout *layout2 = new QVBoxLayout(d2);

    ui->rightEdit->clear();
    ui->leftEdit->clear();

    layout1->addWidget(label1);
    layout2->addWidget(label2);

    label1->show();
    d1->show();

    label2->show();
    d2->show();
}

void MainWindow::changeInterval()
{

    if (ui -> button -> text() == "Start") {
        timer -> start();
        ui -> button -> setText("Stop");
    }
    else if (ui -> button -> text() == "Stop") {
        timer -> stop();
        ui -> button -> setText("Start");
    }
}

void MainWindow::increaseSpeed() {
    int num = ui -> slider -> value();
    timer -> setInterval(1000/num);
}

void MainWindow::handleTimeout()
{

        seconds++;
        qDebug() << hours << ":" << minutes << ":" << seconds << endl;

        sHand->setRotation(srotation+=6);
        mHand -> setRotation(mrotation+=.1);
        hHand->setRotation(hrotation+=0.0083333);


        if(seconds == 60)
        {
            seconds = 0;
            minutes++;
        }

        if(minutes >= 60)
        {
            minutes = 0;
            hours++;
        }
}
