#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Setup the scene
    setupGraphics(Qt::black, 640,480,-320,-240);

    // Pull coordinates
    pullCoordinates();

    // Timer to rotate pellets
    this->_rotatePellets = new QTimer(this);
    connect(this->_rotatePellets, SIGNAL(timeout()), this, SLOT(rotatePellets()));
    this->_rotatePellets->start(100);

    // Add pacman
    this->_pacman = new pacman(Qt::red, -15, -15, 30, 30);
    this->_scene->addItem(this->_pacman);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event != NULL && this->_pacman != NULL)
    {
        if(event->key() == Qt::Key_I)
        {
            this->_pacman->setY(this->_pacman->y() - 5.0);
            QList<QGraphicsItem*> collisions = this->_pacman->collidingItems();
            if(collisions.size() > 0)
            {
                for(int i=0; i<this->_pellets.size(); i++)
                {
                    if(this->_pacman->collidesWithItem(this->_pellets.at(i)))
                    {
//                        qDebug() << "Hit!";
                        this->_scene->removeItem(this->_pellets.at(i));
                    }
                }
                this->_pacman->setY(this->_pacman->y() + 5.0);
            }
        }
        else if(event->key() == Qt::Key_J)
        {
            this->_pacman->setX(this->_pacman->x() - 5.0);
            QList<QGraphicsItem*> collisions = this->_pacman->collidingItems();
            if(collisions.size() > 0)
            {
                for(int i=0; i<this->_pellets.size(); i++)
                {
                    if(this->_pacman->collidesWithItem(this->_pellets.at(i)))
                    {
//                        qDebug() << "Hit!";
                        this->_scene->removeItem(this->_pellets.at(i));
                    }
                }
                this->_pacman->setX(this->_pacman->x() + 5.0);
            }
        }
        else if(event->key() == Qt::Key_K)
        {
            this->_pacman->setY(this->_pacman->y() + 5.0);
            QList<QGraphicsItem*> collisions = this->_pacman->collidingItems();
            if(collisions.size() > 0)
            {
                for(int i=0; i<this->_pellets.size(); i++)
                {
                    if(this->_pacman->collidesWithItem(this->_pellets.at(i)))
                    {
//                        qDebug() << "Hit!";
                        this->_scene->removeItem(this->_pellets.at(i));
                    }
                }
                this->_pacman->setY(this->_pacman->y() - 5.0);
            }
        }
        else if(event->key() == Qt::Key_L)
        {
            this->_pacman->setX(this->_pacman->x() + 5.0);
            QList<QGraphicsItem*> collisions = this->_pacman->collidingItems();
            if(collisions.size() > 0)
            {
                for(int i=0; i<this->_pellets.size(); i++)
                {
                    if(this->_pacman->collidesWithItem(this->_pellets.at(i)))
                    {
//                        qDebug() << "Hit!";
                        this->_scene->removeItem(this->_pellets.at(i));
                    }
                }
                this->_pacman->setX(this->_pacman->x() - 5.0);
            }
        }
    }
    QMainWindow::keyPressEvent(event);
}

void MainWindow::setupGraphics(QColor color, qreal w, qreal h, qreal x, qreal y)
{
    _scene = new QGraphicsScene();
    _scene->setSceneRect(x, y, w, h);
    _scene->setBackgroundBrush(QBrush(color));
    ui->graphicsView->setScene(_scene);
}

void MainWindow::pullCoordinates()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("pavelow");
    db.setPort(3300);
    db.setDatabaseName("sprites.db");
    db.setUserName("cpe35302");
    db.setPassword("qwerty5678");
    if ( !db.open() )
    {
        qDebug() << db.lastError();
        qDebug() << "Error: Unable to connect due to error";
    }
    else
    {
        QSqlQuery q;
        // Pull all walls..
        if (q.exec("SELECT * FROM walls"))
        {
            while ( q.next() )
            {
                // x, y, w, h
                //qDebug() << q.value(0) << ", " << q.value(1) << ", " << q.value(2) << ", " << q.value(3);
                QGraphicsRectItem *wall = new QGraphicsRectItem(q.value(0).toInt(), q.value(1).toInt(), q.value(2).toInt(), q.value(3).toInt());
                wall->setBrush(QBrush(Qt::blue));
                this->_scene->addItem(wall);
                this->_walls.append(wall);
            }
        }
        // Pull all pellets..
        if(q.exec("SELECT * FROM pellets"))
        {
            while(q.next())
            {
                pellet *newPellet = new pellet(Qt::yellow, -q.value(2).toInt()/2, -q.value(3).toInt()/2, q.value(2).toInt(),q.value(3).toInt());
                newPellet->setPos(q.value(0).toInt()+(q.value(2).toInt()/2),q.value(1).toInt()+(q.value(3).toInt()/2));
                this->_scene->addItem(newPellet);
                this->_pellets.append(newPellet);
            }
        }
        // Cleanup
        db.close();
    }
}

void MainWindow::rotatePellets()
{
    for(int i=0; i<this->_pellets.size(); i++)
    {
        this->_pellets.at(i)->setRotation(this->_pellets.at(i)->rotation() + 60);
        //qDebug() << "R: " << this->_pellets.at(i)->rotation();
    }
}
