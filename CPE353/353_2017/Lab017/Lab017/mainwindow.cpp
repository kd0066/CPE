#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "defs.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTime>
#include <QTimer>
#include <QTableView>
#include <QDialog>
#include <QMouseEvent>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("lab017.db");

    if(!db.open())
    {
        qDebug() << db.lastError();
        exit(1);
    }

    QSqlQuery q;

    if(!q.exec("CREATE TABLE IF NOT EXISTS data (time REAL, distance REAL, diameter INT, ratio REAL)"))
    {
        qDebug() << "ERROR: data table";
        exit(1);
    }

    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));

    scene = new QGraphicsScene(0, 0, XMAX, YMAX, this);
    scene->setBackgroundBrush(QBrush(Qt::black));
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    ui->graphicsView->setScene(scene);
    ui->graphicsView->setInteractive(true);

    delay = new QTimer(this);
    delay->setInterval(qrand() % 5000);
    //connect(delay, SIGNAL(timeout())

    connect(ui->statisticsButton, SIGNAL(clicked(bool)), this, SLOT(showStatistics()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::startCycle()
{
    delay->start();
    ui->startButton->setDisabled(true);
}

void MainWindow::resetCycle()
{
    ui->startButton->setDisabled(false);
}

void MainWindow::showStatistics()
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT * FROM data");
    model->setHeaderData(0, Qt::Horizontal, "Elapsed Time (msec)");
    model->setHeaderData(1, Qt::Horizontal, "Distance (pixels)");
    model->setHeaderData(2, Qt::Horizontal, "Diameter (pixels)");
    model->setHeaderData(3, Qt::Horizontal, "log(distance/diameter)");

    QDialog *dialog = new QDialog(this);
    QHBoxLayout *layout = new QHBoxLayout(dialog);
    QTableView *view = new QTableView(dialog);
    view->setModel(model);
    view->setWordWrap(true);
    view->resizeColumnsToContents();
    view->horizontalHeader()->setStretchLastSection(true);

    layout->addWidget(view);
    dialog->show();
    dialog->resize(640, 480);
}

void MainWindow::createTarget()
{
    delay->stop();
    int diameter = 10 + (qrand() % 40);
    //target = new target(qrand() % (XMAX-diameter))

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event && event->type() == QEvent::MouseButtonPress)
    {
        QMouseEvent * me = static_cast<QMouseEvent*>(event);
        //if(me && )
    }
}

void MainWindow::purgeDatabase()
{
    QMessageBox msgBox;
}
