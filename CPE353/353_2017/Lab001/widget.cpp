#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->toolButton, SIGNAL(clicked(bool)), this, SLOT(toolButtonPressed()));
    connect(ui->toolButton_2, SIGNAL(clicked(bool)), this, SLOT(toolButtonPressed()));
    connect(ui->toolButton_3, SIGNAL(clicked(bool)), this, SLOT(toolButtonPressed()));
    connect(ui->toolButton_4, SIGNAL(clicked(bool)), this, SLOT(toolButtonPressed()));

    connect(ui->goButton, &QPushButton::clicked, this, [=](){this->goButtonPressed();});
    connect(ui->stopButton, &QPushButton::clicked, this, [=](){this->stopButtonPressed();});
    connect(ui->pauseButton, &QPushButton::clicked, this, [=](){this->pauseButtonPress();});            
}

Widget::~Widget()
{
    delete ui;
}

void Widget::toolButtonPressed()
{
    qDebug() << "Tool Button";
}

void Widget::goButtonPressed()
{
    qDebug() << "Go";
}

void Widget::pauseButtonPress()
{
    qDebug() << "Pause";
}

void Widget::stopButtonPressed()
{
    qDebug() << "Stop";
}
