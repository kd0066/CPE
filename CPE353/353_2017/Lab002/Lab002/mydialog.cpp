#include "mydialog.h"
#include "ui_mydialog.h"

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    ui->textBrowser->setText("Hello this is a text browser that you can't click on!");
    connect(ui->popupCloseButton, SIGNAL(clicked(bool)), this, SLOT(accept()));
}

MyDialog::~MyDialog()
{
    delete ui;
}
