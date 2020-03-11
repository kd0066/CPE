#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    action = new QAction("Load Image", this);
    action -> setShortcuts(QKeySequence::Open);
    ui -> statusBar -> showMessage("Ready");
    menu = menuBar() -> addMenu("File");
    menu -> addAction(action);

    statusBar() -> addWidget(statusLabel);
    connect(action, SIGNAL(triggered()), this, SLOT(loadImage()));
}

void MainWindow::loadImage() {
    QString filename = QFileDialog::getOpenFileName(this, tr("Open File"), "/", tr("Images(*.png *.jpg)"));
    QFile someFile(filename);
    if (!someFile.exists()) {
        qDebug() << "Error -- File does not exist";
        return;
    }

    else if(!someFile.open( QIODevice::ReadOnly )) {
        qDebug() << "Error -- Unable to open file for input";
        return;
    }

    else {
        qDebug() << "File opened for input";
    }
    ui -> statusBar -> showMessage(filename);

    QByteArray byte = someFile.readAll();
    QPixmap pic;
    pic.loadFromData(byte);
    ui -> label_2 -> setPixmap(pic);

    someFile.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}
