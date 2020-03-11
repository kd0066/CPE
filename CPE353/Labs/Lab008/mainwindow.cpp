#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString text = ui -> lineEdit -> text();
    ui -> listView -> setModel(&model);
    ui -> treeView -> setModel(&model);
    ui -> tableView -> setModel(&model);

    connect(ui -> pushButton, SIGNAL(clicked()), this, SLOT(listme()));
}

void MainWindow::listme() {
    list.append(ui -> lineEdit -> text());
    model.setStringList(list);
    ui -> lineEdit -> clear();

}

MainWindow::~MainWindow()
{
    delete ui;
}
