#include "dialog.h"
#include "ui_dialog.h"

#include <QByteArray>
#include <QString>
#include <QDebug>
#include <QIntValidator>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    num = ui -> lineEdit -> text().toInt();
    ui -> label_3 -> clear();
    QIntValidator* validate = new QIntValidator(0, 999, this);
    ui -> lineEdit -> setValidator(validate);
    connect(ui -> pushButton_8, SIGNAL(clicked()), this, SLOT(convertHex()));
    connect(ui -> pushButton_6, SIGNAL(clicked()), this, SLOT(convertBinary()));
    connect(ui -> pushButton_7, SIGNAL(clicked()), this, SLOT(convertOctal()));
    connect(ui -> pushButton, SIGNAL(clicked()), ui -> lineEdit, SLOT(clear()));
    connect(ui -> pushButton, SIGNAL(clicked()), ui -> label_3, SLOT(clear()));
    connect(ui -> pushButton_2, SIGNAL(clicked()), this, SLOT(accept()));
}

void Dialog::convertHex() {
    num = ui -> lineEdit -> text().toInt();
    QString hex;
    hex.setNum(num, 16);
    ui -> label_3 -> setText(hex);
}

void Dialog::convertOctal() {
    num = ui -> lineEdit -> text().toInt();
    QString Octal;
    Octal.setNum(num, 8);
    ui -> label_3 -> setText(Octal);
}

void Dialog::convertBinary() {
    num = ui -> lineEdit -> text().toInt();
    QString binary;
    binary.setNum(num, 2);
    ui -> label_3 -> setText(binary);
}



Dialog::~Dialog()
{
    delete ui;
}
