#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    points = 0;

    ui -> tabWidget -> setStyleSheet("background-color:black");
    ui -> pushButton -> setStyleSheet("color:cyan;font:bold 13px; padding:5px; border-width:2px;border-style:outset;border-radius:12px");
    ui -> label -> setStyleSheet("color:magenta");
    ui -> label_2 -> setStyleSheet("color:magenta");
    ui -> label_3 -> setStyleSheet("color:magenta");
    ui -> label_4 -> setStyleSheet("color:magenta");

    scene = new QGraphicsScene(-1024/2, -768/2, 1024, 768);
    scene -> setBackgroundBrush(Qt::black);
    ui -> graphicsView -> setScene(scene);
    score = new QLabel("0");
    statusBar() -> addWidget(score);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("sprites.db");

    if(!db.open()) {
        qDebug() << "Didn't open" << endl;
    }

    QSqlQuery q;
    if (q.exec("SELECT * FROM walls")) {
        while(q.next()) {
            walls= new QGraphicsRectItem(q.value(0).toInt(), q.value(1).toInt(),
            q.value(2).toInt(), q.value(3).toInt());
            walls -> setBrush(QBrush(Qt::cyan));
            this -> scene -> addItem(walls);
        }
    }

    if (q.exec("SELECT * FROM pellets")) {
        while(q.next()) {
            temp_pellet = new Pellet(-q.value(2).toInt(), -q.value(3).toInt(), q.value(2).toInt(),
                                     q.value(3).toInt(), q.value(4).toInt(), &points);
            temp_pellet->setPos(q.value(0).toInt(), q.value(1).toInt());
            temp_pellet->setBrush(QBrush(Qt::darkMagenta));
            scene -> addItem(temp_pellet);
            pellets.append(temp_pellet);
        }
    }

    if (q.exec("SELECT * FROM cat")) {
        while(q.next()) {
            pix = new QPixmap;
            pix -> loadFromData(q.value(0).toByteArray());
            catpixs.append(pix);
        }
    }
    cat = new Cat(catpixs);
    scene -> addItem(cat);



    timer = new QTimer;
    timer -> setInterval(12);
    connect(timer, SIGNAL(timeout()), scene, SLOT(advance()));
    connect(timer, SIGNAL(timeout()), this, SLOT(addScore()));
    connect(ui -> pushButton, SIGNAL(clicked()), this, SLOT(setButton()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent* e) {
    if (e != nullptr) {
        if (e -> key() == Qt::Key_I) {
            cat -> direction("up");
        }
        else if (e -> key() == Qt::Key_J) {
            cat -> direction("left");
        }
        else if (e -> key() == Qt::Key_K) {
            cat -> direction("down");
        }
        else if (e -> key() == Qt::Key_L) {
            cat -> direction("right");
        }
        else {
            cat -> direction("stop");
        }
    }
    QMainWindow::keyPressEvent(e);
}

void MainWindow::addScore() {

    QDialog* dialog2 = new QDialog;
    if (cat->collide == true) {
        timer -> stop();
        QString string = QString::number(points/(count/10));
        QVBoxLayout* layout = new QVBoxLayout;
        QHBoxLayout* layout2 = new QHBoxLayout;
        QLabel* label = new QLabel("You Lost!!");
        QLabel* label2 = new QLabel("Your final score is");
        QLabel* label3 = new QLabel(string);
        dialog2 -> setLayout(layout);
        layout -> addWidget(label);
        layout -> addLayout(layout2);
        layout2 -> addWidget(label2);
        layout2 -> addWidget(label3);
        dialog2 -> exec();
    }

    QDialog* dialog = new QDialog;
    count = (count + 1);
    score -> setNum(count/83.333);
    if (points == 2000) {
        timer -> stop();
        QString string = QString::number(points/(count/83.333));
        QVBoxLayout* layout = new QVBoxLayout;
        QHBoxLayout* layout2 = new QHBoxLayout;
        QLabel* label = new QLabel("You Win!!");
        QLabel* label2 = new QLabel("Your final score is");
        QLabel* label3 = new QLabel(string);
        dialog -> setLayout(layout);
        layout -> addWidget(label);
        layout -> addLayout(layout2);
        layout2 -> addWidget(label2);
        layout2 -> addWidget(label3);
        dialog -> exec();
    }
}

void MainWindow::setButton() {
    QDialog* dialog = new QDialog;
    if (ui -> pushButton -> text() == "Play") {
        timer -> start();
        connect(ui -> pushButton, SIGNAL(clicked()), dialog, SLOT(accept()));
        ui -> tabWidget -> setCurrentIndex(1);

    }
}
