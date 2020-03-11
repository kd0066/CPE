#include "dialog.h"
#include "ui_dialog.h"
#include <QPushButton>
#include <QLabel>
#include <QTimer>
#include <QTimerEvent>
#include <QCoreApplication>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->timeLabel->setText("0");
    updateTimer = QObject::startTimer(1000);
    paused = true;

    connect(ui->quitButton, &QPushButton::clicked, this, &Dialog::accept);
    connect(ui->pauseButton, SIGNAL(clicked(bool)), this, SLOT(pauseTimer()));
    connect(ui->startButton, SIGNAL(clicked(bool)), this, SLOT(initiateTimer()));
    connect(ui->clearButton, SIGNAL(clicked(bool)), this, SLOT(clearTimer()));

    QTimerEvent *event = new QTimerEvent(updateTimer);

    QCoreApplication::postEvent(this, event);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::timerEvent(QTimerEvent *someEvent)
{
    if(!someEvent)  return;

    if(someEvent->timerId() == updateTimer)
    {
        if(!paused)
        {
            bool ok;
            int n = ui->timeLabel->text().toInt(&ok) + 1;
            if(ok)
            {
                ui->timeLabel->setText(QString::number(n));
                qDebug() << "Updating display";
            }
            else
            {
                ui->timeLabel->setText("");
                qDebug() << "Dialog::eventTimer(): Unknown error";
            }
        }
        else
            qDebug() << "Timer paused";
    }
    else
    {
        QObject::timerEvent(someEvent);
    }
}

void Dialog::initiateTimer()
{
    qDebug() << "Initiating Timer";
    paused = false;
}

void Dialog::pauseTimer()
{
    qDebug() << "Pausing Timer";
    paused = true;
}

void Dialog::clearTimer()
{
    qDebug() << "Clearing Timer";
    ui->timeLabel->setText("0");
    paused = true;
}
