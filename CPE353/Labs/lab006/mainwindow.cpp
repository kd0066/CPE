#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QNetworkProxy>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    tortoise = new QTcpSocket;
    connect(tortoise, SIGNAL(readyRead()), this, SLOT(postMsg()));
    tortoise -> connectToHost(QHostAddress::LocalHost, 5678, QIODevice::ReadOnly);
    tortoise -> waitForConnected();
}

void MainWindow::postMsg() {
    QByteArray hare = tortoise -> readLine();
    hare.chop(1);

    qDebug() << hare;

    QString msg(hare);
    ui -> textBrowser -> append(msg);
}

MainWindow::~MainWindow()
{
    delete ui;
}
