#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTextBrowser>

//nc -l 127.0.0.1 5678

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    streamSocket = new QTcpSocket;
    connect(streamSocket, SIGNAL(readyRead()), this, SLOT(printMessage()));
    streamSocket->connectToHost(QHostAddress::LocalHost, 5678, QIODevice::ReadOnly);
    streamSocket->waitForConnected();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::printMessage()
{
    QByteArray datagram = streamSocket->readLine();
    datagram.chop(2);

    qDebug() << datagram;

    QString msg(datagram);
    ui->textBrowser->append(msg);
}
