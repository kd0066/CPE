#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pellet.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    points = 0;
    scene = new QGraphicsScene(-1024/2, -768/2, 1024, 768);
    scene -> setBackgroundBrush(Qt::black);
    ui -> graphicsView -> setScene(scene);

    score = new QLabel("0");
    statusBar() -> addWidget(score);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("sprites.db");
    db.setPort(5678);
    db.setUserName("donnieboi");
    db.setPassword("donovan42");

    if(!db.open()) {
        qDebug() << "Shit dont work" << endl;
    }

    QSqlQuery q;
    if (q.exec("SELECT * FROM pellets")) {
        while (q.next()) {
            temp_pellet = new Pellet(-q.value(2).toInt(), -q.value(3).toInt(), q.value(2).toInt(),
                                     q.value(3).toInt(), q.value(4).toInt(), &points);
            temp_pellet->setPos(q.value(0).toInt(), q.value(1).toInt());
            temp_pellet->setBrush(QBrush(Qt::yellow));
            scene -> addItem(temp_pellet);
            pellets.append(temp_pellet);
        }
    }
    if (q.exec("SELECT * FROM walls")) {
        while (q.next()) {
            walls = new QGraphicsRectItem(q.value(0).toInt(), q.value(1).toInt(),
            q.value(2).toInt(), q.value(3).toInt());
            walls -> setBrush(QBrush(Qt::blue));
            this -> scene -> addItem(walls);
        }
    }
    pac = new pacman(Qt::red, -15, -15, 30, 30);
    scene -> addItem(pac);

    timer = new QTimer;
    timer -> setInterval(12);
    timer -> start();

    connect(timer, SIGNAL(timeout()), scene, SLOT(advance()));
    connect(timer, SIGNAL(timeout()), this, SLOT(addScore()));
}

void MainWindow::keyPressEvent(QKeyEvent *e) {
    if (e != nullptr) {
        if (e -> key() == Qt::Key_I) {
            pac -> direction("up");
        }
        else if (e -> key() == Qt::Key_J) {
            pac -> direction("left");
        }
        else if (e -> key() == Qt::Key_K) {
            pac -> direction("down");
        }
        else if (e -> key() == Qt::Key_L) {
            pac -> direction("right");
        }
        else {
            pac -> direction("stop");
        }
    }
}

void MainWindow::addScore() {
    score -> setNum(points);
}

MainWindow::~MainWindow()
{
    delete ui;
}
