#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "label.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLabel* label = new QLabel("Ready");
    label -> setFrameShape(QFrame::WinPanel);
    ui -> statusBar -> addWidget(label);

    /******* Populate grid layout with custom Label objects *******/
    for(int r = 0; r < 2; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            Label* pmLabel = new Label(this);
            pmLabel->setFrameStyle(QFrame::WinPanel);
            QPixmap* pm = new QPixmap(60,60);
            if (r%2 == 0) pm->fill(Qt::blue); else pm->fill(Qt::white);
            pmLabel->setPixmap(*pm);
            ui->gridLayout->addWidget(pmLabel, r, c);
            connect(pmLabel, SIGNAL(sendStatus(QString &)), this, SLOT(updateStatus(QString&)));
        }
    }
    /*********** Do not modify or delete the above code **********/

    QPixmap* pix = new QPixmap(300, 150);
    pix -> fill(Qt::red);
    ui -> imageLabel -> setPixmap(*pix);

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

    QGraphicsEllipseItem* clock = new QGraphicsEllipseItem;
    clock = scene -> addEllipse(-100, -100, 200, 200, *pen);

    pen->setWidth(5);
    for(int i = 0; i < 12; i++) {
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

    ui -> slider -> setMinimum(1);
    ui -> slider -> setMaximum(60);

    connect(timer, SIGNAL(timeout()), this, SLOT(handleTimeout()));
    connect(socket, SIGNAL(readyRead()), this, SLOT(handleRXImage()));
    connect(ui -> button, SIGNAL(clicked()), this, SLOT(changeInterval()));
    connect(ui->slider, static_cast<void (QSlider::*)(int)>(&QSlider::valueChanged), this, &MainWindow::increaseSpeed);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateStatus(QString& s)
{

}

void MainWindow::handleRXImage()
{
    QPixmap* pm = new QPixmap(300, 150);
    pm->fill(Qt::blue);
    QByteArray byte = socket->readAll();
    QString string(byte);
    if (string == byte) {

        QPainter p(pm);
        QPoint tp(50, 75);
        p.setPen(Qt::white);
        p.setFont(QFont("Arial", 18));
        p.drawText(tp, string);
        ui -> imageLabel -> setPixmap(*pm);
    }
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
