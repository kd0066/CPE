#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QtDebug>
#include <QPainter>
#include <QGraphicsEllipseItem>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    load = new QAction("Load", this);
    save = new QAction("Save", this);
    quit = new QAction("Quit", this);

    ui -> tabWidget -> setCurrentIndex(0);
    ui -> radioButton -> setChecked(true);
    ui -> radioButton_4 -> setChecked(true);

    load -> setShortcuts(QKeySequence::Open);
    save -> setShortcuts(QKeySequence::Save);
    quit -> setShortcuts(QKeySequence::Quit);

    ui -> statusBar -> showMessage("Ready");

    menu = menuBar() -> addMenu("&File");
    menu -> addAction(load);
    menu -> addAction(save);
    menu -> addSeparator();
    menu -> addAction(quit);

    ui -> statusBar -> showMessage("Ready");
    connect(load, SIGNAL(triggered()), this, SLOT(loadImage()));
    connect(save, SIGNAL(triggered()), this, SLOT(saveImage()));
    connect(quit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui -> radioButton, SIGNAL(clicked()), this, SLOT(background()));
    connect(ui -> radioButton_2, SIGNAL(clicked()), this, SLOT(background()));
    connect(ui -> radioButton_3, SIGNAL(clicked()), this, SLOT(background()));
    connect(ui -> radioButton_4, SIGNAL(clicked()), this, SLOT(color()));
    connect(ui -> radioButton_5, SIGNAL(clicked()), this, SLOT(color()));
    connect(ui -> radioButton_6, SIGNAL(clicked()), this, SLOT(color()));
    connect(ui -> pushButton, SIGNAL(clicked()), this, SLOT(setPix()));
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

    someFile.close();
}

void MainWindow::saveImage() {
    QString filename = QFileDialog::getSaveFileName(this, tr("Open File"), "/", tr("Images(*.png *.jpg)"));
    QFile someFile(filename);
    if (someFile.exists()) {
        qDebug() << "Error -- File already exists";
        return;
    }

    else if(!someFile.open( QIODevice::WriteOnly )) {
        qDebug() << "Error -- Unable to open file for input";
        return;
    }

    else {
        qDebug() << "File opened for input";
    }

}

void MainWindow::background() {
    if (ui -> radioButton -> isChecked()) {
        backgroundColor = Qt::black;
    }
    else if (ui -> radioButton_2 -> isChecked()) {
        backgroundColor = Qt::gray;
    }
    else if (ui -> radioButton_3 -> isChecked()) {
        backgroundColor = Qt::white;
    }
}

void MainWindow::color() {
    if (ui -> radioButton_4 -> isChecked()) {
        textColor = Qt::red;
    }
    else if (ui -> radioButton_5 -> isChecked()) {
        textColor = Qt::green;
    }
    else if (ui -> radioButton_6 -> isChecked()) {
        textColor = Qt::blue;
    }
}

void MainWindow::setPix() {
    QPixmap *pm = new QPixmap(400, 300);
    pm -> fill(Qt::transparent);
    QPainter painter(pm);
    painter.setPen(textColor);
    QPoint tp(40, 40);
    painter.setFont(QFont("Times", 20, QFont::Bold));
    painter.drawText(tp, ui -> lineEdit -> text());
    ui -> tabWidget -> setCurrentIndex(1);
    ui -> label_2 -> setPixmap(*pm);
}

MainWindow::~MainWindow() {
    delete ui;
}
