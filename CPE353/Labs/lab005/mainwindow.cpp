#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    turtle = new QUdpSocket;
    connect(turtle, SIGNAL(readyRead()), this, SLOT(postMsg()));
    turtle -> bind(QHostAddress::LocalHost, 5678);
}

void MainWindow::postMsg() {
    QByteArray hare;

    while(turtle -> hasPendingDatagrams()) {
        hare.resize(turtle -> pendingDatagramSize());
        turtle -> readDatagram(hare.data(), hare.size());

        QString msg;
        QTextStream in(&hare);

        msg = in.readAll();
        msg = msg.trimmed();
        ui -> textBrowser -> append(msg);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
