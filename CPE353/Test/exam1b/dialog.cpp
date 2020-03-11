#include "dialog.h"
#include "ui_dialog.h"
#include <QVBoxLayout>
#include <QGridLayout>
#include <QDialog>
#include <QtDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui -> toggleButton -> setText("Disable");
    ui -> mysteryButton -> setText("kd0066");
    ui -> rowDial -> setRange(1, 10);
    ui -> columnDial -> setRange(1, 10);
    ui -> rowLabel -> setNum(1);
    ui -> columnLabel -> setNum(1);
    connect(ui -> toggleButton, SIGNAL(clicked()), this, SLOT(disable()));
    connect(ui -> mysteryButton, SIGNAL(clicked()), this, SLOT(buttonText()));
    connect(ui -> spawnButton, SIGNAL(clicked()), this, SLOT(modalPart()));
    connect(ui -> rowDial, static_cast<void (QDial::*)(int)>(&QDial::valueChanged), this, &Dialog::DialLabel1);
    connect(ui -> columnDial, static_cast<void (QDial::*)(int)>(&QDial::valueChanged), this, &Dialog::DialLabel2);

    connect(ui -> winnerButton, SIGNAL(clicked()), this, SLOT(ticTac()));
    connect(ui -> resetButton, SIGNAL(clicked()), this, SLOT(resetMe()));
}

void Dialog::disable() {
    if (ui -> toggleButton -> text() == "Disable") {

        ui -> lineEdit -> setReadOnly(true);
        ui -> toggleButton -> setText("Enable");
    }
    else if(ui -> toggleButton -> text() == "Enable") {
        ui -> lineEdit -> setReadOnly(false);
        ui -> toggleButton -> setText("Disable");
    }
}

void Dialog::buttonText() {
    if(ui -> lineEdit -> text() == "") {
        ui -> mysteryButton -> setText("BLANK");
    }
    else {
        QString text = ui -> lineEdit -> text();
        ui -> mysteryButton -> setText(text);
        ui -> lineEdit -> clear();
    }

}

void Dialog::DialLabel1() {
    ui -> rowLabel -> setNum(ui -> rowDial -> value());
}

void Dialog::DialLabel2() {
    ui -> columnLabel -> setNum(ui -> columnDial -> value());
}

void Dialog::modalPart() {
    QDialog* helpme = new QDialog;
    QVBoxLayout* woohoo = new QVBoxLayout;
    QGridLayout* layout = new QGridLayout;
    QLabel* label = new QLabel;
    QPushButton* close = new QPushButton("Close");
    helpme -> setLayout(woohoo);
    woohoo -> addLayout(layout);
    woohoo -> addWidget(close);

    int count = 0;
    int row = ui -> rowDial -> value();
    int column = ui -> columnDial -> value();
    label -> setNum(0);



    for (int i = 0; i < row; i++) {
        for (int k = 0; k < column; k++) {
            QLabel* label = new QLabel;
            label -> setFrameShape(QFrame::Box);
            label -> setNum(count);
            layout -> addWidget(label, i, k);

        }
        count++;
    }
    connect(close, SIGNAL(clicked()), helpme, SLOT(accept()));
    helpme -> show();
}

void Dialog::ticTac() {
    if (ui -> button1 -> isChecked() && ui -> button2 -> isChecked() && ui -> button3 -> isChecked()) {
        emit updateStatus(true);
    }
    else if (ui -> button4 -> isChecked() && ui -> button5 -> isChecked() && ui -> button6 -> isChecked()) {
        emit updateStatus(true);
    }
    else if (ui -> button7 -> isChecked() && ui -> button8 -> isChecked() && ui -> button9 -> isChecked()) {
        emit updateStatus(true);
    }
    else if (ui -> button4 -> isChecked() && ui -> button7 -> isChecked() && ui -> button1 -> isChecked()) {
        emit updateStatus(true);
    }
    else if (ui -> button2 -> isChecked() && ui -> button5 -> isChecked() && ui -> button8 -> isChecked()) {
        emit updateStatus(true);
    }
    else if (ui -> button3 -> isChecked() && ui -> button6 -> isChecked() && ui -> button9 -> isChecked()) {
        emit updateStatus(true);
    }
    else if (ui -> button1 -> isChecked() && ui -> button5 -> isChecked() && ui -> button9 -> isChecked()) {
        emit updateStatus(true);
    }
    else if (ui -> button3 -> isChecked() && ui -> button5 -> isChecked() && ui -> button7 -> isChecked()) {
        emit updateStatus(true);
    }
    else {
        emit updateStatus(false);
    }
}

void Dialog::resetMe() {
    ui -> button1 -> setChecked(false);
    ui -> button2 -> setChecked(false);
    ui -> button3 -> setChecked(false);
    ui -> button4 -> setChecked(false);
    ui -> button5 -> setChecked(false);
    ui -> button6 -> setChecked(false);
    ui -> button7 -> setChecked(false);
    ui -> button8 -> setChecked(false);
    ui -> button9 -> setChecked(false);
}

Dialog::~Dialog()
{
    delete ui;
}

