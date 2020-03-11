#include "dialog.h"
#include "ui_dialog.h"
#include "notdick.h"

Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog) {
    ui->setupUi(this);
    connect(ui -> pushButton_4, SIGNAL(clicked()), this, SLOT(accept()));
    connect(ui -> pushButton, SIGNAL(clicked()), this, SLOT(modalShit()));
    connect(ui -> pushButton_2, SIGNAL(clicked()), this, SLOT(nonModalShit()));
    connect(ui -> pushButton_3, SIGNAL(clicked()), this, SLOT(customShit()));
}

void Dialog::modalShit() {
    QDialog* dick = new QDialog;
    QVBoxLayout* mainLayoutPtr = new QVBoxLayout(this);
    QLabel* labelShit1 = new QLabel("Hello");
    QLabel* labelShit2 = new QLabel("World");
    QLabel* labelShit3 = new QLabel("Modal");
    dick -> setLayout(mainLayoutPtr);
    mainLayoutPtr -> addWidget(labelShit1);
    mainLayoutPtr -> addStretch();
    mainLayoutPtr -> addWidget(labelShit2);
    mainLayoutPtr -> addStretch();
    mainLayoutPtr -> addWidget(labelShit3);
    mainLayoutPtr -> addStretch();
    dick -> exec();
}
void Dialog::nonModalShit() {
    QDialog* dick = new QDialog;
    QVBoxLayout* mainLayoutPtr = new QVBoxLayout(this);
    QLabel* labelShit1 = new QLabel("Hello");
    QLabel* labelShit2 = new QLabel("World");
    QLabel* labelShit3 = new QLabel("Non-Modal");
    dick -> setLayout(mainLayoutPtr);
    mainLayoutPtr -> addWidget(labelShit1);
    mainLayoutPtr -> addStretch();
    mainLayoutPtr -> addWidget(labelShit2);
    mainLayoutPtr -> addStretch();
    mainLayoutPtr -> addWidget(labelShit3);
    mainLayoutPtr -> addStretch();
    dick -> show();
}
void Dialog::customShit() {
    notDick* TotallyADick = new notDick;
    TotallyADick -> exec();
}

Dialog::~Dialog()
{
    delete ui;
}
