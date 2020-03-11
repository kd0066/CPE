#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "label.h"

#include <QString>
#include <QByteArray>
#include <QMovie>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /******* Populate grid layout with custom Label objects *******/
    for(int r = 0; r < 3; r++)
    {
        Label* tLabel = new Label(this);
        tLabel->setText(QString::number(r));
        tLabel->setFrameStyle(QFrame::Panel);
        ui->gridLayout->addWidget(tLabel, r, 0);
        Label* pLabel = new Label(this);
        pLabel->setFrameStyle(QFrame::Panel);
        QPixmap* pm = new QPixmap(50,50);
        pm->fill(Qt::blue);
        pLabel->setPixmap(*pm);
        ui->gridLayout->addWidget(pLabel, r, 1);
    }
    /*********** Do not modify or delete the above code **********/

    QGraphicsScene* scene = new QGraphicsScene;
    scene -> setSceneRect(-200, -150, 400, 300);
    scene -> setBackgroundBrush(Qt::black);
    ui -> graphicsView -> setScene(scene);

    QPen* pen = new QPen;
    pen -> setBrush(Qt::white);
    pen -> setWidth(1);
    QGraphicsEllipseItem* circle = new QGraphicsEllipseItem;
    circle = scene -> addEllipse(-100, -100, 200, 200, *pen);

    QGraphicsEllipseItem* yellow = new QGraphicsEllipseItem;
    yellow -> setRect(-20, -20, sunD, sunD);
    yellow -> setBrush(Qt::yellow);
    scene -> addItem(yellow);

    red = new QGraphicsEllipseItem;
    red -> setRect(redOrbit, 0, redD, redD);
    red -> setBrush(Qt::red);
    scene -> addItem(red);

    green = new QGraphicsEllipseItem;
    green -> setRect(greenOrbit, 0, greenD, greenD);
    green -> setBrush(Qt::green);
    scene -> addItem(green);

    blue = new QGraphicsEllipseItem;
    blue -> setRect(blueOrbit, 0, blueD, blueD);
    blue -> setBrush(Qt::blue);
    scene -> addItem(blue);

    timer = new QTimer;
    timer -> setInterval(16);

    socket = new QTcpSocket;
    socket ->connectToHost(QHostAddress::LocalHost, 5678, QIODevice::ReadOnly);
    socket -> waitForConnected();

    connect(socket, SIGNAL(readyRead()), this, SLOT(tcpPixmap()));
    connect(ui -> button, SIGNAL(clicked()), this, SLOT(setButton()));
    connect(ui->slider, static_cast<void (QSlider::*)(int)>(&QSlider::valueChanged), this, &MainWindow::setInterval);
    connect(timer, SIGNAL(timeout()), this, SLOT(setPlanetRotation()));

}

void MainWindow::tcpPixmap() {
    QByteArray data = socket -> readAll();
    QPixmap *pm = new QPixmap;
    QString s;
    int num = data.size();
    s.setNum(num);
    pm->loadFromData(data);
    ui -> imageLabel -> setScaledContents(true);

    QPainter painter(pm);
    QPoint tp(-500, -500);
    painter.setFont(QFont("Times", 96, QFont::Bold));
    painter.drawText(tp, s);
    ui -> imageLabel -> setPixmap(pm->scaled(240, 180));
}

void MainWindow::setButton() {
    if (ui -> button -> text() == "Start") {
        timer -> start();
        ui -> button -> setText("Stop");
    }
    else if (ui -> button -> text() == "Stop") {
        timer -> stop();
        ui -> button -> setText("Start");
    }
}

void MainWindow::setInterval() {
    int num = ui -> slider -> value();
    timer -> setInterval(16.66667/num);
}

void MainWindow::setPlanetRotation() {
    red -> setRotation(redPlanet+=6);
    blue -> setRotation(bluePlanet+=.0083333);
    green -> setRotation(greenPlanet+=.1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

