#include "widget.h"
#include "ui_widget.h"
#include <QDebug>


Widget::Widget(QWidget *parent) : QWidget(parent), ui(new Ui::Widget) {
    ui->setupUi(this);
    ui -> frameLabel -> setNum(0);
    ui -> clearme -> setDefault(true);
    connect(ui -> clearme, SIGNAL(clicked()), ui -> lineEdit, SLOT(clear()));
    connect(ui -> sendMe, SIGNAL(clicked()), this, SLOT(printGo()));
    connect(ui -> pauseMe, SIGNAL(clicked()), this, SLOT(printPause()));
    connect(ui -> stopMe, SIGNAL(clicked()), this, SLOT(printStop()));
    connect(ui -> toolButton, SIGNAL(clicked()), this, SLOT(printTool()));
    connect(ui -> toolButton_2, SIGNAL(clicked()), this, SLOT(printTool()));
    connect(ui -> toolButton_3, SIGNAL(clicked()), this, SLOT(printTool()));
    connect(ui -> toolButton_4, SIGNAL(clicked()), this, SLOT(printTool()));
    connect(ui -> radioButton, SIGNAL(clicked()), this, SLOT(radioThing()));
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &Widget::printMe);
}

void Widget::printGo() {
    printMe("Go");
}
void Widget::printPause() {
    printMe("Pause");
}

void Widget::printStop() {
    printMe("Stop");
}

void Widget::printTool() {
    printMe("Tool Button");
}

void Widget::radioThing() {
    if (ui -> radioButton -> isChecked()) {
        qDebug() << "Bit = 1";
        ui -> frameLabel -> setNum(1);
    }
    else {
        qDebug() << "Bit = 0";
        ui -> frameLabel -> setNum(0);
    }
}

void Widget::printMe(QString text) {
    qDebug() << text;
}

Widget::~Widget() {
    delete ui;
}
