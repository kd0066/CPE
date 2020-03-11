#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    listModel = new QStringListModel;

    ui->listView->setModel(listModel);
    ui->tableView->setModel(listModel);
    ui->treeView->setModel(listModel);

    listModel->setStringList(list);

    connect(ui->addButton, SIGNAL(clicked(bool)), this, SLOT(addToList()));
    connect(ui->addButton, SIGNAL(clicked(bool)), ui->lineEdit, SLOT(clear()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addToList()
{
    list.append(ui->lineEdit->text());
    listModel->setStringList(list);
}
