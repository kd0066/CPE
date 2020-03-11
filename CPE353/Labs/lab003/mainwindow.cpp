#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIntValidator>
#include <QRegularExpression>
#include <QTextEdit>
#include <QAction>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    QAction* redButt = new QAction;
    QAction* greenButt = new QAction;
    QAction* blueButt = new QAction;
    QMenu* actionMenu = new QMenu;

    actionMenu = menuBar() -> addMenu("&Actions");
    redButt = new QAction(QIcon("/home/student/kd0066/useless/Pictures/red.jpg"), "Default Area Code", this);
    greenButt = new QAction(QIcon("/home/student/kd0066/useless/Pictures/green.jpg"), "Default Prefix", this);
    blueButt = new QAction(QIcon("/home/student/kd0066/useless/Pictures/blue.jpg"), "Default Subscriber", this);
    actionMenu -> addAction(redButt);
    actionMenu -> addAction(greenButt);
    actionMenu -> addAction(blueButt);

    ui -> statusBar -> showMessage("Ready");

    QRegularExpression regex("[A-Z]{1}[a-z]{1}[A-Z]{1}[a-z]{1}[A-Z]{1}[a-z]{1}");
    QValidator* makework = new QRegularExpressionValidator(regex, this);
    ui -> lineEdit -> setValidator(makework);

    ui -> lineEdit_2 -> setValidator(new QIntValidator(0, 100, this));
    ui -> lineEdit_3 -> setValidator(new QIntValidator(0, 100, this));
    ui -> lineEdit_4 -> setValidator(new QIntValidator(0, 1000, this));

    ui -> radioButton_2 -> setChecked(true);

    connect(ui -> clearMe, SIGNAL(clicked()), ui -> lineEdit_2, SLOT(clear()));
    connect(ui -> clearMe, SIGNAL(clicked()), ui -> lineEdit_3, SLOT(clear()));
    connect(ui -> clearMe, SIGNAL(clicked()), ui -> lineEdit_4, SLOT(clear()));

    connect(ui -> dialMe, SIGNAL(clicked()), this, SLOT(printNum1()));
    connect(redButt, SIGNAL(triggered()), this, SLOT(area()));
    connect(greenButt, SIGNAL(triggered()), this, SLOT(pref()));
    connect(blueButt, SIGNAL(triggered()), this, SLOT(subs()));
}

void MainWindow::printNum1() {
    QString phone = ui -> lineEdit_2-> text() + "-" + ui -> lineEdit_3 -> text() + "-" + ui -> lineEdit_4 -> text();
    ui -> statusBar -> showMessage(phone);
}

void MainWindow::area() {
    ui -> lineEdit_2 -> setText("999");
}

void MainWindow::pref() {
    ui -> lineEdit_3 -> setText("999");
}

void MainWindow::subs() {
    ui -> lineEdit_4 -> setText("9999");
}

MainWindow::~MainWindow() {
    delete ui;
}
