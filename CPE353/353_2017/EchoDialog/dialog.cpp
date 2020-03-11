#include "dialog.h"
#include "ui_dialog.h"

#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->mainEdit, SIGNAL(textChanged(QString)), ui->label_Echo, SLOT(setText(QString)));
    connect(ui->mainEdit, SIGNAL(textChanged(QString)), ui->lineEdit_echo, SLOT(setText(QString)));

    connect(ui->quitButton, SIGNAL(clicked(bool)), this, SLOT(accept()));
    connect(ui->clearButton, SIGNAL(clicked(bool)), ui->mainEdit, SLOT(clear()));
    connect(ui->clearButton, SIGNAL(clicked(bool)), ui->label_Echo, SLOT(clear()));
    connect(ui->clearButton, SIGNAL(clicked(bool)), ui->lineEdit_echo, SLOT(clear()));
}

Dialog::~Dialog()
{
    delete ui;
}
