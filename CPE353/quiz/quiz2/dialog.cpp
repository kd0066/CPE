#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog) {
    ui->setupUi(this);
    ui->leftSlider->setValue(0);
    ui->rightSlider->setValue(5);
    ui->leftLabel->setNum(0);
    ui->rightLabel->setNum(5);

    connect(ui->leftSlider, static_cast<void (QSlider::*)(int)> (&QSlider::valueChanged), this, &Dialog::addingRight);
    connect(ui->rightSlider, static_cast<void (QSlider::*)(int)>(&QSlider::valueChanged), this, &Dialog::addingLeft);


}

void Dialog::addingRight() {
    ui->rightLabel->setNum(ui->rightSlider->value());
    int add = ui->leftSlider->value();
    add = 5-add;
    ui->rightSlider->setValue(add);
    ui->rightLabel->setNum(ui->rightSlider->value());

}
void Dialog::addingLeft() {
    ui->leftLabel->setNum(ui->leftSlider->value());
    int add = ui->rightSlider->value();
    add = 5-add;
    ui->leftSlider->setValue(add);
    ui->leftLabel->setNum(ui->leftSlider->value());

}

Dialog::~Dialog() {
    delete ui;
}
