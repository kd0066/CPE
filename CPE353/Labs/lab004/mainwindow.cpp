#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDebug>
#include <QKeyEvent>
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui -> pushButton -> setDefault(true);
    status = new QLabel;
    status -> setNum(0);
    ui -> statusBar -> addWidget(status);
    connect(ui -> pushButton, SIGNAL(clicked()), this, SLOT(findFile()));

}

bool MainWindow::event(QEvent* e) {
    if (e && e -> type() == QEvent::KeyPress) {
        QKeyEvent* ke = static_cast<QKeyEvent*>(e);
        if (ke -> key() == Qt::Key_Escape) {
            qDebug() << "Escape";
        }
    }
    return QMainWindow::event(e);
}

void MainWindow::keyPressEvent(QKeyEvent *ke) {
    if (ke && ke -> key() == Qt::Key_Escape) {
        int count = status -> text().toInt();
        count++;
       status -> setNum(count);
    }
    QMainWindow::keyPressEvent(ke);
}

void MainWindow::findFile() {
    QStringList list;
    QString filename = ui -> lineEdit -> text();
    QFile someFile(filename);
    if (!someFile.exists()) {
        qDebug() << "Error -- File does not exist";
    }

    else if(!someFile.open( QIODevice::ReadOnly )) {
        qDebug() << "Error -- Unable to open file for input";
    }

    else {
        qDebug() << "File opened for input successfully";
    }
    QTextStream in(&someFile);
    QString someValue;
    while(!in.atEnd()) {
        someValue = in.readLine();
        list.append(someValue);
        qDebug() << someValue;
        ui -> comboBox -> addItem(someValue);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
