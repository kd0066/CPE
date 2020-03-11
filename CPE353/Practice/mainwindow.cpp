#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QtDebug>
#include <QTextEdit>
#include <QRadioButton>
#include <QDialog>

static int count = 1;
static int count2 = 2;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui -> textEdit -> installEventFilter(this);


    menu = menuBar() -> addMenu("File");
    action = new QAction("Load");
    action2 = new QAction("Save");
    ui -> radioButton -> setChecked(true);
    menu -> addAction(action);
    menu -> addAction(action2);
    connect(action2, SIGNAL(triggered()), this, SLOT(fileO()));
    connect(action, SIGNAL(triggered()), this, SLOT(fileI()));
    connect(ui -> pushButton, SIGNAL(clicked()), this, SLOT(buttons()));

}

bool MainWindow::eventFilter(QObject *watched, QEvent *event) {
    QKeyEvent* key = static_cast<QKeyEvent*>(event);
    if (!watched || !event) return QMainWindow::eventFilter(watched, event);
    if (watched == ui -> textEdit && event -> type() == QEvent::KeyPress) {

        switch (key->key()) {
            case Qt::Key_Return:            qDebug() << "Hello World";
                                            count++;
                                            s.setNum(count);
                                            ui -> textEdit->append(s + "  ");
                                            return true;
        }
    }
    return QMainWindow::eventFilter(watched, event);
}

void MainWindow::fileO()
{
    QStringList list;
    QString filename = ui -> lineEdit -> text();
    QFile someFile(filename);
    ui -> lineEdit -> clear();

    if(!someFile.open( QIODevice::WriteOnly )) {
        qDebug() << "Error -- Unable to open file for input";
    }

    QTextStream stream(&someFile);
    stream << ui -> textEdit -> toPlainText();
    someFile.close();
    ui -> textEdit -> clear();
}

void MainWindow::fileI() {
    QStringList list;
    QString filename = ui -> lineEdit -> text();
    QFile someFile(filename);
    if (!someFile.exists()) {
        qDebug() << "Error -- File does not exist";
    }

    else if(!someFile.open( QIODevice::ReadOnly )) {
        qDebug() << "Error -- Unable to open file for input";
    }

    else {
        qDebug() << "File opened for input successfully";
    }
    QTextStream in(&someFile);
    QString someValue;
    while(!in.atEnd()) {
        s.setNum(count2);
        ++count2;
        someValue = in.readLine();
        list.append(someValue);
        qDebug() << someValue;
        ui -> textEdit ->moveCursor (QTextCursor::End);
        ui -> textEdit -> insertPlainText(someValue);
        ui -> textEdit -> insertPlainText("\n" + s + "  ");
    }
}

void MainWindow::buttons() {
    if (ui -> radioButton -> isChecked()) {
        QDialog* d = new QDialog();
        QHBoxLayout* l = new QHBoxLayout;
        d -> setLayout(l);
        d -> exec();
    }
    if (ui -> radioButton_2 -> isChecked()) {
        QDialog* d2 = new QDialog();
        QHBoxLayout* l2 = new QHBoxLayout;
        d2 -> setLayout(l2);
        d2 -> show();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
