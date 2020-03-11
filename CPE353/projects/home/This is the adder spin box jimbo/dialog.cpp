#include "dialog.h"
#include "ui_dialog.h"

#include <QSpinBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
    ui -> label_4 -> setText("BLANK");
    ui -> spinBox -> setRange(0, 10);
    ui -> spinBox_2 -> setRange(0, 10);
    connect(ui -> pushButton, SIGNAL(clicked(bool)), this, SLOT(makeZero()));
    connect(ui -> pushButton_2, &QPushButton::clicked, this, &QDialog::accept);

//    QT5
//    connect(ui -> spinBox, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &Dialog::makeHappen);
//    connect(ui -> spinBox_2, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &Dialog::makeHappen);

//    QT4
    connect(ui -> spinBox, SIGNAL(valueChanged(int)), this, SLOT(makeHappen()));
    connect(ui -> spinBox_2, SIGNAL(valueChanged(int)), this, SLOT(makeHappen()));


}

void Dialog::makeHappen() {
    int add = ui -> spinBox -> value();
    int add2 = ui -> spinBox_2 -> value();

    int finsum = add + add2;

    ui -> label_4 -> setNum(finsum);

}

void Dialog::makeZero() {
    ui -> spinBox -> setValue(0);
    ui -> spinBox_2 -> setValue(0);

}

Dialog::~Dialog()
{
    delete ui;
}
