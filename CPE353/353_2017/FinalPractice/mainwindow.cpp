#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(-XMAX/2, -YMAX/2, XMAX, YMAX, this);
    scene->setBackgroundBrush(QBrush(Qt::white, Qt::SolidPattern));
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    ui->graphicsView->setScene(scene);

    rectItem = new QGraphicsRectItem(-50, 0, 100, 50);
    rectItem->setPen(QPen(Qt::blue));
    rectItem->setBrush(QBrush(Qt::blue));
    scene->addItem(rectItem);
    this->installEventFilter(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("HighScores.db");;

    if(!db.open())
    {
        qDebug() << "Error, unable to open " << db.databaseName();
        return;
    }

    QSqlQuery q;

    q.prepare("CREATE TABLE highscore (name TEXT, score INTEGER)");

    if(!q.exec())
    {
        qDebug() << "Error: Could not create table";
        return;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if(keyEvent && keyEvent->key() == Qt::Key_Up)
        {
            rectItem->moveBy(0, -10);
        }
        else if(keyEvent && keyEvent->key() == Qt::Key_Down)
        {
            rectItem->moveBy(0, 10);
        }
        else if(keyEvent && keyEvent->key() == Qt::Key_Right)
        {
            rectItem->moveBy(10, 0);
        }
        else if(keyEvent && keyEvent->key() == Qt::Key_Left)
        {
            rectItem->moveBy(-10, 0);
        }
        return true;
    }
    return QMainWindow::eventFilter(watched, event);
}
