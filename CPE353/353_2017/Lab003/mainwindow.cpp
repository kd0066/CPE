#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    action1 = new QAction(QIcon(":/images/Penguins.jpg"), "Default Area Code", this);
    action2 = new QAction(QIcon(":images/Emperor_penguins.jpg"), "Default Prefix", this);
    action3 = new QAction(QIcon(":/images/istock-511366776.jpg"), "Default Subscriber", this);

    ui->menuActions->addAction(action1);
    ui->menuActions->addAction(action2);
    ui->menuActions->addAction(action3);

    ui->mainToolBar->addAction(action1);
    ui->mainToolBar->addAction(action2);
    ui->mainToolBar->addAction(action3);

    QRegularExpression phoneAreaRegExp("[0-9]{3}");
    QRegularExpression phonePrefixRegExp("[0-9]{3}");
    QRegularExpression phoneSubcriberRegExp("[0-9]{4}");

    QRegularExpressionValidator *phoneAreaValidator = new QRegularExpressionValidator(phoneAreaRegExp, ui->areaCodeEdit);
    ui->areaCodeEdit->setValidator(phoneAreaValidator);

    QRegularExpressionValidator *phonePrefixValidator = new QRegularExpressionValidator(phonePrefixRegExp, ui->prefixEdit);
    ui->prefixEdit->setValidator(phonePrefixValidator);

    QRegularExpressionValidator *phoneSubscrValidator = new QRegularExpressionValidator(phoneSubcriberRegExp, ui->subscEdit);
    ui->subscEdit->setValidator(phoneSubscrValidator);

    connect(ui->clearButton, &QPushButton::clicked, ui->areaCodeEdit, &QLineEdit::clear);
    connect(ui->clearButton, &QPushButton::clicked, ui->prefixEdit, &QLineEdit::clear);
    connect(ui->clearButton, &QPushButton::clicked, ui->subscEdit, &QLineEdit::clear);

    connect(action1, &QAction::triggered, this, [=](){this->fillAreaCode();});
    connect(action2, &QAction::triggered, this, [=](){this->fillPrefix();});
    connect(action3, &QAction::triggered, this, [=](){this->fillSubscriber();});

    status = new QLabel("Ready");

    ui->statusBar->addWidget(status);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fillAreaCode()
{
    ui->areaCodeEdit->setText("999");
}

void MainWindow::fillPrefix()
{
    ui->prefixEdit->setText("999");
}

void MainWindow::fillSubscriber()
{
    ui->subscEdit->setText("999");
}
