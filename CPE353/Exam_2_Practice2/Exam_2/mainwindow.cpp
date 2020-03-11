#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QFile>
#include <QRegExpValidator>
#include <QMouseEvent>
#include <QDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //PART1
    QRegExp rx("[A-Z, a-z]{1}[0-9]{1}\\.txt");
    QValidator* validate = new QRegExpValidator(rx, this);
    ui -> fileNameEdit -> setValidator(validate);
    connect(ui -> saveButton, SIGNAL(clicked()), this, SLOT(fileIO()));

    //PART2
    connect(ui->spinboxQt5, static_cast<void (QSpinBox::*) (int)>(&QSpinBox::valueChanged), ui->dialQt5, &QDial::setValue);
    connect(ui->dialQt5, &QDial::valueChanged, ui->spinboxQt5, &QSpinBox::setValue);

    //PART4
    menu = menuBar() -> addMenu("Options");
    modalAction = new QAction("Non-Modal");
    menu -> addAction(modalAction);
    ui -> mainToolBar -> addAction(modalAction);
    connect(modalAction, SIGNAL(triggered()), this, SLOT(modalDialog()));

    //PART5
    ui -> filteredEdit -> installEventFilter(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fileIO()
{
    QStringList list;
    QString filename = ui -> fileNameEdit -> text();
    QFile someFile(filename);
    ui -> fileNameEdit -> clear();

    if(!someFile.open( QIODevice::WriteOnly | QIODevice::Text )) {
        qDebug() << "Error -- Unable to open file for input";
    }

    QTextStream stream(&someFile);
    stream << ui -> fileEdit -> toPlainText();
    someFile.close();
    ui -> fileEdit -> clear();
}

bool MainWindow::eventFilter(QObject *watched, QEvent *e)
{
    if (watched == ui -> filteredEdit && e -> KeyPress) {
        QKeyEvent* key = static_cast<QKeyEvent*>(e);
        if (key -> key() == Qt::Key_Insert) {
            ui -> statusBar -> showMessage("Insert");
        }
        else if (key -> key() == Qt::Key_Delete) {
            ui -> statusBar -> showMessage("Delete");
        }
    }
    return QMainWindow::eventFilter(watched, e);
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    static int left = 0;
    static int middle = 0;
    static int right = 0;
    if (event && event -> button() == Qt::LeftButton) {
        left++;
        qDebug() << left << " " << middle << " " << right << " " << endl;
    }
    else if (event && event -> button() == Qt::MiddleButton) {
        middle++;
        qDebug() << left << " " << middle << " " << right << " " << endl;
    }
    else if (event && event -> button() == Qt::RightButton) {
        right++;
        qDebug() << left << " " << middle << " " << right << " " << endl;
    }


}

void MainWindow::modalDialog() {
    QDialog* d = new QDialog;
    QVBoxLayout* layout = new QVBoxLayout;
    QLabel* l = new QLabel("Non-Modal");
    QPushButton* close = new QPushButton("Close");
    d -> setLayout(layout);
    layout -> addWidget(l);
    layout -> addWidget(close);

    d -> show();
    connect(close, SIGNAL(clicked()), d, SLOT(accept()));


}


