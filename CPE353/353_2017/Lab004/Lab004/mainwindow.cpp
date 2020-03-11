#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    status = new QLabel("0");
    ui->statusBar->addWidget(status);

    //connect(ui->loadButton, &QPushButton::clicked, this, [=](){this->populateComboBox();});
    connect(ui->loadButton, SIGNAL(clicked(bool)), this, SLOT(populateComboBox()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::event(QEvent *event)
{
    if(event && event->type() == QEvent::KeyPress)
    {
        QKeyEvent *ke = static_cast<QKeyEvent*>(event);

        if(ke->key() == Qt::Key_Escape)
        {
            qDebug() << "Escape";
        }
    }

    return QMainWindow::event(event);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    bool ok = false;
    int currentStatus = status->text().toInt(&ok);

    if(ok == false)
    {
        qDebug() << "Status could not be converted to an integer";
    }
    else
    {
        if(event && event->type() == QEvent::KeyPress)
        {
            currentStatus++;
            status->setText(QString::number(currentStatus));
        }
    }
}

void MainWindow::populateComboBox()
{
    QStringList textList;
    QFile f(ui->filenameLineEdit->text());

    if(!f.exists())
    {
        qDebug() << "File does not exist";
        return;
    }
    else
    {
        f.open(QIODevice::ReadOnly | QIODevice::Text);

        while(!f.atEnd())
        {
            QString line = f.readLine();
            textList.append(line);
        }

        for(int i = 0; i < textList.length();i++)
        {
            qDebug() << textList[i];
            ui->comboBox->insertItem(i, textList[i]);
        }
    }
}

