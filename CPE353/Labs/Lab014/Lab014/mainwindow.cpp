#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui -> statusBar -> showMessage("Ready");

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("custom.db");

    if (!db.open()) {
        qDebug() << "Error: " << db.lastError();
        return;
    }
    else {
        QSqlQuery q;
        if (!q.exec("CREATE TABLE grades (id INT, name TEXT, score INT)")) {
            qDebug() << "Error: " << db.lastError();
            return;
        }
    }
    connect(ui -> insertButt, SIGNAL(clicked(bool)), this, SLOT(ins()));
    connect(ui -> cancelButt, SIGNAL(clicked(bool)), ui -> p1Line, SLOT(clear()));
    connect(ui -> cancelButt, SIGNAL(clicked(bool)), ui -> p1Line2, SLOT(clear()));
    connect(ui -> cancelButt, SIGNAL(clicked(bool)), ui -> p1Line3, SLOT(clear()));
    connect(ui -> cancelButt, SIGNAL(clicked(bool)), this, SLOT(can()));
    connect(ui -> Queer, SIGNAL(clicked(bool)), this, SLOT(que()));
    connect(ui -> showButt, SIGNAL(clicked(bool)), this, SLOT(ShowAll()));
    connect(ui -> dropMe, SIGNAL(clicked(bool)), this, SLOT(dr()));

    model = new QSqlQueryModel;
    model -> setQuery("SELECT * FROM grades");
    ui -> tableView -> setModel(model);
}

void MainWindow::ins() {
    QSqlQuery q;
    q.prepare(("INSERT INTO grades VALUES( :id, :name, :score )"));
    bool ok1, ok2;
    q.bindValue(":id", ui -> p1Line -> text().toInt(&ok1, 10));
    q.bindValue(":name", ui -> p1Line2 -> text());
    q.bindValue(":score", ui -> p1Line3 -> text().toInt(&ok2, 10));

    ui -> p1Line -> clear();
    ui -> p1Line2 -> clear();
    ui -> p1Line3 -> clear();

    if (!q.exec() || !ok1 || !ok2) {
        ui -> statusBar -> showMessage("Error executing INSERT");
        return;
    }
    else {
        ui -> statusBar -> showMessage("INSERT successful");
        model -> setQuery("SELECT * FROM grades");
        ui -> tableView -> setModel(model);
    }
}

void MainWindow::can() {
    ui -> statusBar -> showMessage("INSERT cancelled");
}

void MainWindow::que() {
    QSqlQuery q;
    QString s = QString("SELECT %1 FROM grades").arg(ui -> columnEdit -> text());
    if (ui -> precEdit -> text() != "") {
        s.append(QString("WHERE %1").arg(ui -> precEdit -> text()));
    }
    q.prepare(s);

    ui -> columnEdit -> clear();
    ui -> precEdit -> clear();

    if (!q.exec()) {
        ui -> statusBar -> showMessage("Error executing SELECT");
        return;
    }
    else {
        ui -> statusBar -> showMessage("SELECT successful");
        model -> setQuery(q);
        ui -> tableView -> setModel(model);
    }
}

void MainWindow::ShowAll() {
    model -> setQuery("SELECT * FROM grades");
    ui -> tableView -> setModel(model);
}

void MainWindow::dr() {
    int button = QMessageBox::critical(this, "Confirm Drop", "Are you sure you want to drop everything", QMessageBox::Yes | QMessageBox::No);

    if (button == QMessageBox::No) {
        ui -> statusBar -> showMessage("Drop cancelled");
    }
    else if (button == QMessageBox::Yes) {
        model -> setQuery("DROP TABLE grades");
        ui -> tableView -> setModel(model);
        ui -> statusBar -> showMessage("Table dropped");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
