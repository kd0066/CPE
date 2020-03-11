#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    streamSocket = new QUdpSocket(this);

    streamSocket->bind(4863);

    connect(streamSocket, &QUdpSocket::readyRead, this, [=](){this->printMessage();});
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::printMessage()
{
    QByteArray inDatagram;

    while(streamSocket->hasPendingDatagrams())
    {
        inDatagram.resize(streamSocket->pendingDatagramSize());
        streamSocket->readDatagram(inDatagram.data(), inDatagram.size());
    }

    QString msg;
    QTextStream in(&inDatagram, QIODevice::ReadOnly);

    in >> msg;

    ui->textBrowser->append(msg);
}
