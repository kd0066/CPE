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

    // Timer to rotate object
    this->rotater = new QTimer(this);
    connect(this->rotater, SIGNAL(timeout()), this, SLOT(rotatePellets()));
    connect(this->rotater,SIGNAL(timeout()), _scene, SLOT(advance()));
    this->rotater->start(20);

    // Add someObject
    this->_someObject = new myObject(Qt::red, -15, -15, 30, 30);
    this->_scene->addItem(this->_someObject);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event != NULL && this->_someObject != NULL)
    {
        if(event->key() == Qt::Key_I)
        {
            this->_someObject->setY(this->_someObject->y() - 5.0);
            QList<QGraphicsItem*> collisions = this->_someObject->collidingItems();
            if(collisions.size() > 0)
            {
                for(int i=0; i<this->_pellets.size(); i++)
                {
                    if(this->_someObject->collidesWithItem(this->_pellets.at(i)))
                           this->_scene->removeItem(this->_pellets.at(i));
                }

                this->_someObject->setY(this->_someObject->y() + 5.0);
            }
        }
        else if(event->key() == Qt::Key_J)
        {
            this->_someObject->setX(this->_someObject->x() - 5.0);
            QList<QGraphicsItem*> collisions = this->_someObject->collidingItems();
            if(collisions.size() > 0)
            {
                for(int i=0; i<this->_pellets.size(); i++)
                {
                    if(this->_someObject->collidesWithItem(this->_pellets.at(i)))
                        this->_scene->removeItem(this->_pellets.at(i));
                }
                this->_someObject->setX(this->_someObject->x() + 5.0);
            }
        }
        else if(event->key() == Qt::Key_K)
        {
            this->_someObject->setY(this->_someObject->y() + 5.0);
            QList<QGraphicsItem*> collisions = this->_someObject->collidingItems();
            if(collisions.size() > 0)
            {
                for(int i=0; i<this->_pellets.size(); i++)
                {
                    if(this->_someObject->collidesWithItem(this->_pellets.at(i)))
                        this->_scene->removeItem(this->_pellets.at(i));
                }
                this->_someObject->setY(this->_someObject->y() - 5.0);
            }
        }
        else if(event->key() == Qt::Key_L)
        {
            this->_someObject->setX(this->_someObject->x() + 5.0);
            QList<QGraphicsItem*> collisions = this->_someObject->collidingItems();
            if(collisions.size() > 0)
            {
                for(int i=0; i<this->_pellets.size(); i++)
                {
                    if(this->_someObject->collidesWithItem(this->_pellets.at(i)))
                        this->_scene->removeItem(this->_pellets.at(i));
                }
                this->_someObject->setX(this->_someObject->x() - 5.0);
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
    qDebug() << "Connecting to sql...";
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName( "mike" );
    // db on local machine
    db.setPort(33164);
    // port number
    db.setDatabaseName( "cpe35302" );
    db.setUserName( "vader" );
    db.setPassword( "asdf9999" );

    if ( !db.open() ){
        qDebug() << db.lastError();
        qDebug() << "Error: Unable to connect due to above error";
    }
    else
    {
        QSqlQuery q;

        if (q.exec("SELECT * FROM walls"))
        {
            while ( q.next() )
            {
                // x, y, w, h
                qDebug() << q.value(0) << ", " << q.value(1) << ", " << q.value(2) << ", " << q.value(3);
                wall = new QGraphicsRectItem(q.value(0).toInt(), q.value(1).toInt(), q.value(2).toInt(), q.value(3).toInt());
                wall->setBrush(QBrush(Qt::blue));
                this->_scene->addItem(wall);
                this->_walls.append(wall);
            }
        }

        if(q.exec("SELECT * FROM pellets"))
        {
            while(q.next())
            {
                newPellet = new pellet(Qt::yellow, -q.value(2).toInt()/2, -q.value(3).toInt()/2, q.value(2).toInt(),q.value(3).toInt(),q.value(4).toInt(), q.value(5).toInt());
                newPellet->setPos(q.value(0).toInt()+(q.value(2).toInt()/2),q.value(1).toInt()+(q.value(3).toInt()/2));
                this->_scene->addItem(newPellet);
                this->_pellets.append(newPellet);
            }
        }

        db.close();
    }
}

void MainWindow::rotatePellets()
{


        this->_someObject->setRotation(this->_someObject->rotation() + 10);
        //qDebug() << "R: " << this->_pellets.at(i)->rotation();

}


void MainWindow::move(char x)
{
    switch(x){
        case 'J': qDebug() << "J";
    }
}


