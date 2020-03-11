#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMouseEvent>
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    status.setText("Ready");

    numclicks = 0;
    numOpenDialogs = 0;

//    QRegularExpression lineEditRegExp("[0-9]{2}");
//    QRegularExpressionValidator *lineEditValidator = new QRegularExpressionValidator(lineEditRegExp, ui->lineEdit);
//    ui->lineEdit->setValidator(lineEditValidator);

    ui->statusBar->addWidget(&status);

    connect(ui->loadButton, SIGNAL(clicked(bool)), this, SLOT(handleLoadButtonPressed()));
    connect(ui->spawnButton, SIGNAL(clicked(bool)), this, SLOT(spawnDialogs()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleLoadButtonPressed()
{
    QStringList textList;
    QFile f(ui->fileNameEdit->text());

    status.setText(f.fileName());

    ui->fileNameEdit->clear();

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
            QAction *action = new QAction(textList[i]);
            connect(action, SIGNAL(triggered(bool)), this, SLOT(printActionMessage()));
            ui->mainToolBar->addAction(action);
        }
    }
    disconnect(ui->loadButton, SIGNAL(clicked(bool)), this, SLOT(handleLoadButtonPressed()));
}

void MainWindow::printActionMessage()
{
    qDebug() << "Action triggered";
}

bool MainWindow::event(QEvent *event)
{
    if(event && event->type() == QEvent::MouseButtonPress)
    {
        QMouseEvent *me = static_cast<QMouseEvent*>(event);

        if(me->button() == Qt::RightButton)
        {
            numclicks++;
            status.setText(QString::number(numclicks));
            qDebug() << me->pos();
        }
    }

    return QMainWindow::event(event);
}

void MainWindow::spawnDialogs()
{
    bool ok;
    int max = ui->lineEdit->text().toInt(&ok); //redundant
    if(!ok)
    {
        qDebug() << "undefined state";
        return;
    }

    numOpenDialogs = max; //redundant
    for(int i = 1; i <= max;i++)
    {
        QDialog *dialog = new QDialog(this);
        QLabel *label = new QLabel(dialog);
        QString string = "Dialog #";
        string.append(QString::number(i));
        label->setText(string);
        connect(ui->closeAllButton, SIGNAL(clicked(bool)), dialog, SLOT(accept()));
        dialog->show();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_PageUp)
    {
       status.setText("Page up");
    }
    else if(event->key() == Qt::Key_PageDown)
    {
        qDebug() << ui->filteredEdit->cursor().pos();
        status.setText("Page down");
    }
}
