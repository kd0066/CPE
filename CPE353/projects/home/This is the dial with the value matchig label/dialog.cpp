#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui -> label -> setNum(0);
    connect(ui -> dial, SIGNAL(valueChanged(int)), this, SLOT(setvalue()));
    connect(ui -> pushButton, SIGNAL(clicked(bool)), this, SLOT(clearMe()));

}

void Dialog::setvalue() {
    ui -> dial -> setRange(0, 9);
    int num = ui -> dial -> value();

    ui -> label -> setNum(num);

}

void Dialog::clearMe() {
    ui -> label -> setNum(0);
    ui -> dial -> setValue(0);

}
Dialog::~Dialog()
{
    delete ui;
}
