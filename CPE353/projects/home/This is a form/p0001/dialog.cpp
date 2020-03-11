/*#include "dialog.h"
#include "ui_dialog.h"

#include <QtDebug>

Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog) {
    ui->setupUi(this);
    ui -> label_4 -> setText(" BLANK ");
    connect(ui -> pushButton, SIGNAL(clicked()), this, SLOT(setDown()));
    connect(ui -> spinBox, SIGNAL(valueChanged(int)), this, SLOT(part2()));
    connect(ui -> dial, SIGNAL(valueChanged(int)), this, SLOT(part2b()));
    connect(ui -> horizontalSlider, &QSlider::valueChanged, this, &Dialog::part3b);
    connect(ui -> spinBox_2, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged), this, &Dialog::part3);
    connect(ui -> dial_2, SIGNAL(valueChanged(int)), this, SLOT(part4()));
    connect(ui -> horizontalSlider_2, SIGNAL(valueChanged(int)), this, SLOT(part4()));
    connect(ui -> pushButton_2, SIGNAL(clicked()), this, SLOT(part5()));
    connect(ui -> pushButton_3, &QPushButton::clicked, this, &Dialog::printMe);
    connect(ui -> pushButton_4, SIGNAL(clicked()), this, SLOT(iLikeTurtles()));
}

void Dialog::setDown() {
    if (ui -> label -> text() == " Up ") {
        ui -> label -> setText(" Down ");
        ui -> pushButton -> setText("Down");
    }
    else {
        ui -> label -> setText(" Up ");
        ui -> pushButton -> setText("Up");
    }
}

void Dialog::part2() {
    ui -> spinBox -> setRange(0, 10);
    ui -> dial -> setSliderPosition(ui -> spinBox -> text().toInt());
}

void Dialog::part2b() {
    ui -> dial -> setRange(0,10);
    ui -> spinBox -> setValue(ui -> dial -> value());
}

void Dialog::part3() {
    ui -> spinBox_2 -> setRange(0, 10);
    ui -> horizontalSlider -> setSliderPosition(ui -> spinBox_2 -> text().toInt());
}

void Dialog::part3b() {
    ui -> horizontalSlider -> setRange(0,10);
    ui -> spinBox_2 -> setValue(ui -> horizontalSlider -> value());
}

void Dialog::part4() {
    ui -> horizontalSlider_2 -> setRange(0,5);
    ui -> dial_2 -> setRange(0,5);
    int add = ui -> horizontalSlider_2 -> value();
    int add2 = ui -> dial_2 -> value();

    int finsum = add + add2;

    ui -> label_4 -> setNum(finsum);

}

void Dialog::part5() {
    QDialog* modal_test1 = new QDialog;
    QHBoxLayout* mainLayoutPtr = new QHBoxLayout(this);
    QLabel* labelShit1 = new QLabel("Go Chargers!");
    QPushButton* button = new QPushButton("Close");
    mainLayoutPtr -> addWidget(labelShit1);
    mainLayoutPtr -> addWidget(button);
    modal_test1 -> setLayout(mainLayoutPtr);
    connect(button, SIGNAL(clicked()), modal_test1, SLOT(accept()));
    modal_test1 -> exec();
}

void Dialog::printMe() {
    QString text = ui -> lineEdit -> text();
    qDebug() << text;
    ui -> lineEdit -> clear();
}

void Dialog::iLikeTurtles() {

    ui -> label_6 -> setText("FUCK YOU");

}


Dialog::~Dialog() {
    delete ui;
}
*/
