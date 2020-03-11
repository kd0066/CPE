#include "part5.h"
#include "ui_part5.h"

Part5::Part5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Part5)
{
    ui->setupUi(this);
    connect(ui -> pushButton, SIGNAL(clicked()), this, SLOT(accept()));
}

Part5::~Part5()
{
    delete ui;
}
