#include "dialog.h"
#include "ui_dialog.h"
#include <QKeyEvent>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::keyPressEvent(QKeyEvent* event) {
    if  (event -> key() == Qt::Key_Up) {
        ui -> label -> setText("Up");
    }

    else if  (event -> key() == Qt::Key_Down) {
        ui -> label -> setText("Down");
    }

    else if  (event -> key() == Qt::Key_Right) {
        ui -> label -> setText("Right");
    }

    else if  (event -> key() == Qt::Key_Left) {
        ui -> label -> setText("Left");
    }
    QDialog::keyPressEvent(event);
}

Dialog::~Dialog()
{
    delete ui;
}
