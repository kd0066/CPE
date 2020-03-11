#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->leftSlider, &QSlider::valueChanged, this, &Dialog::updateSum);
    connect(ui->rightSlider, &QSlider::valueChanged, this, &Dialog::updateSum);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::updateSum()
{
    switch( ui->leftSlider->value() + ui->rightSlider->value() )
    {
        case 0  :  ui->sumLabel->setNum(0);  break;
        case 1  :  ui->sumLabel->setNum(1);  break;
        case 2  :  ui->sumLabel->setNum(2);  break;
        case 3  :  ui->sumLabel->setNum(3);  break;
        case 4  :  ui->sumLabel->setNum(4);  break;
        case 5  :  ui->sumLabel->setNum(5);  break;
        case 6  :  ui->sumLabel->setNum(6);  break;
        case 7  :  ui->sumLabel->setNum(7);  break;
        case 8  :  ui->sumLabel->setNum(8);  break;
        case 9  :  ui->sumLabel->setNum(9);  break;
        case 10  :  ui->sumLabel->setNum(10);  break;
        case 99  :  ui->sumLabel->setNum(99);  break;
        default :  ui->sumLabel->setNum(0);  break;
    }
}
