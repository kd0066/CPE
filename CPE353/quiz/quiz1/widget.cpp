#include "widget.h"
#include "ui_widget.h"
#include <QtDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui -> clearMe, SIGNAL(clicked()), ui -> uLineEdit, SLOT(clear()));
//    connect(ui -> bitButton, SIGNAL(clicked()), ui -> newLabel, SLOT(setText("1")));
    connect(ui -> go, SIGNAL(clicked()), this, SLOT(printGo()));
    connect(ui -> stop, SIGNAL(clicked()), this, SLOT(printStop()));
    connect(ui -> pause, SIGNAL(clicked()), this, SLOT(printPause()));
}
void Widget::printGo() {
    qDebug() << "Go";
}
void Widget::printStop() {
    qDebug() << "Go";
}
void Widget::printPause() {
    qDebug() << "Go";
}

Widget::~Widget()
{
    delete ui;
}
