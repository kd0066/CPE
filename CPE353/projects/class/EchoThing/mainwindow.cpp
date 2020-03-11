#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui -> lineEdit_2 -> setMaxLength(3);
    ui -> lineEdit_3 -> setMaxLength(3);
    ui -> lineEdit_4 -> setMaxLength(4);
    connect(ui -> clearMe, SIGNAL(clicked()), ui -> lineEdit_2, SLOT(clear()));
    connect(ui -> clearMe, SIGNAL(clicked()), ui -> lineEdit_3, SLOT(clear()));
    connect(ui -> clearMe, SIGNAL(clicked()), ui -> lineEdit_4, SLOT(clear()));
}

MainWindow::~MainWindow() {
    delete ui;
}
