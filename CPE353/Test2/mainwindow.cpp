#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QString>
#include <QtDebug>
#include <QMouseEvent>
#include <QPoint>
#include <QDialog>
#include <QFrame>
#include <QIntValidator>

static int count = 1;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui -> filteredEdit -> installEventFilter(this);
    QIntValidator* validate = new QIntValidator(0, 99);
    ui -> lineEdit -> setValidator(validate);
    connect(ui -> loadButton, SIGNAL(clicked()), this, SLOT(fileLoad()));
    connect(ui -> spawnButton, SIGNAL(clicked()), this, SLOT(nonModalShit()));

}

void MainWindow::fileLoad() {
    QStringList list;
    QString filename = ui -> fileNameEdit -> text();
    QFile someFile(filename);
    ui -> statusBar -> showMessage(filename);
    if (!someFile.exists()) {
        qDebug() << "File does not exist";
    }

    else if(!someFile.open( QIODevice::ReadOnly )) {
        qDebug() << "Unable to open file for input";
    }

    else {
        qDebug() << "File opened for input successfully";
    }
    QTextStream in(&someFile);
    QString someValue;
    while(!in.atEnd()) {
        someValue = in.readLine();
        QAction* action = new QAction(someValue);
        ui -> mainToolBar -> addAction(action);
        disconnect(ui -> loadButton, SIGNAL(clicked()), this, SLOT(fileLoad()));
        connect(action, SIGNAL(triggered()), this, SLOT(actionTrigg()));
    }
    ui -> fileNameEdit -> clear();
}

void MainWindow::actionTrigg() {
    qDebug() << "Action Triggered";
}

void MainWindow::mousePressEvent(QMouseEvent* event) {
    QString string;
    string.setNum(count);
    QMouseEvent* click = static_cast<QMouseEvent*>(event);
    if (event && event -> button() == Qt::RightButton) {
        count++;
        ui -> statusBar -> showMessage(string);
        qDebug() << click -> pos();
    }
}

bool MainWindow::eventFilter(QObject* watched, QEvent *event) {
    QKeyEvent* key = static_cast<QKeyEvent*>(event);
    if (watched == ui -> filteredEdit && event -> KeyPress) {
        if (key -> key() == Qt::Key_PageUp) {
            ui -> statusBar -> showMessage("Page Up");
        }
        else if (key -> key() == Qt::Key_PageDown) {
            ui -> statusBar -> showMessage("Page Down");
        }
    }
    return QMainWindow::eventFilter(watched, event);
}

void MainWindow::nonModalShit() {
    int num = ui -> lineEdit -> text().toInt();
    for (int i = 1; i <= num; i++) {
        QDialog* dick = new QDialog;
        QHBoxLayout* mainLayoutPtr = new QHBoxLayout();
        QLabel* labelShit1 = new QLabel("Dialog #");
        labelShit1 -> setFrameStyle(1);
        QLabel* labelShit2 = new QLabel();
        labelShit2 -> setNum(i);
        labelShit2 -> setFrameStyle(1);
        dick -> setLayout(mainLayoutPtr);
        mainLayoutPtr -> addWidget(labelShit1);
        mainLayoutPtr -> addWidget(labelShit2);
        dick -> show();
        connect(ui -> closeAllButton, SIGNAL(clicked()), dick, SLOT(accept()));
        ui -> lineEdit -> clear();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
