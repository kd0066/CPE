#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");

    db.setHostName("mike");
    db.setPort(33200);
    db.setDatabaseName("images.db");
    db.setUserName("cpe35301");
    db.setPassword("final01");

    if(!db.open())
    {
        qDebug() << "Error: Unable to open MySQL Db";
        exit(1);
    }
    else
    {
        //create the scene
        scene = new QGraphicsScene(0, 0, XMAX, YMAX, this);

        //make black background
        scene->setBackgroundBrush(QBrush(Qt::black));

        //set lines as borders
        QGraphicsLineItem * line1 = new QGraphicsLineItem(0, 0, XMAX, 0);
        QGraphicsLineItem * line2 = new QGraphicsLineItem(0, 0, 0, YMAX);
        QGraphicsLineItem * line3 = new QGraphicsLineItem(XMAX, YMAX, XMAX, 0);
        QGraphicsLineItem * line4 = new QGraphicsLineItem(XMAX, YMAX, 0, YMAX);

        line1->setPen(QPen(QColor(Qt::white),3));
        line2->setPen(QPen(QColor(Qt::white),3));
        line3->setPen(QPen(QColor(Qt::white),3));
        line4->setPen(QPen(QColor(Qt::white),3));

        scene->addItem(line1);
        scene->addItem(line2);
        scene->addItem(line3);
        scene->addItem(line4);

        //set fixed screen size
        ui->graphicsView->setFixedSize(XMAX+50, YMAX+50);

        //create and setup player instance
        Player * player = new Player();
        player->setPos(XMAX/2, YMAX/2);
        scene->addItem(player);

        //To make Key events work i need to foucs the item
        player->setFlag(QGraphicsItem::ItemIsFocusable); //makes it able to be focused
        player->setFocus(); //set to the focused item

        //gets the locations of all enemys to set
        QSqlQuery query;

        if(!query.exec( "SELECT * FROM locations" ))
        {
            qDebug() << "Error getting locations from table: " << query.lastError();
        }
        else
        {
            int i = 0;
            while(query.next())
            {
                x[i] = query.value(0).toDouble(&ok);
                y[i] = query.value(1).toDouble(&ok);
                dx[i] = query.value(2).toDouble(&ok);
                dy[i] = query.value(3).toDouble(&ok);
                i++;
            }
        }

        //make the enemy
        for(int i = 0; i < 6; i ++)
        {
            Enemy * e = new Enemy(0, 0, 5, 5);
            scene->addItem(e);

        }

        //add the scene to the graphicsView
        ui->graphicsView->setScene(scene);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
