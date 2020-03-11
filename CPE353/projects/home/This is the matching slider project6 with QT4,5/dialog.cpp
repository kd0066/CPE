#include "dialog.h"
#include "ui_dialog.h"

#include <QSlider>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
//    QT5
//    connect(ui -> verticalSlider, &QSlider::valueChanged, ui -> horizontalSlider, &QSlider::setValue);
//    connect(ui -> horizontalSlider, &QSlider::valueChanged, ui -> verticalSlider, &QSlider::setValue);

//    QT4
    connect(ui -> verticalSlider, SIGNAL(valueChanged(int)), ui -> horizontalSlider, SLOT(setValue(int)));
    connect(ui -> horizontalSlider, SIGNAL(valueChanged(int)), ui -> verticalSlider, SLOT(setValue(int)));

}

Dialog::~Dialog()
{
    delete ui;
}
