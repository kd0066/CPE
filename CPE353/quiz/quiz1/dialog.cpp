#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->leftDial->setValue(0);
    ui->rightDial->setValue(5);
    ui->leftLabel->setNum(0);
    ui->rightLabel->setNum(5);

    //QT4
   //connect(ui->leftDial, SIGNAL(valueChanged(int)), this, SLOT(turnright()));
   //connect(ui->rightDial, SIGNAL(valueChanged(int)), this, SLOT(turnleft()));

    //QT5
    //connect(ui->rightDial, &QDial::valueChanged, this, &Dialog::turnleft);
    //connect(ui->leftDial, &QDial::valueChanged, this, &Dialog::turnright);

    //QT5 with type cast
    connect(ui->leftDial, static_cast<void (QDial::*)(int)> (&QDial::valueChanged), this,&Dialog::turnright);
    connect(ui->rightDial, static_cast<void (QDial::*)(int)>(&QDial::valueChanged), this,&Dialog::turnleft);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::turnleft()
{
    ui->leftLabel->setNum(ui->leftDial->value());

    int turn = ui->rightDial->value();
    turn = 5-turn;
    ui->leftDial->setValue(turn);
    ui->leftLabel->setNum(ui->leftDial->value());


}

void Dialog::turnright()
{
    ui->rightLabel->setNum(ui->rightDial->value()); //connects the right label witht the right dial and a value

    int turn = ui->leftDial->value(); //
    turn = 5-turn;
    ui->rightDial->setValue(turn);
    ui->rightLabel->setNum(ui->rightDial->value()); //connects the right label witht the right dial and a value


}




