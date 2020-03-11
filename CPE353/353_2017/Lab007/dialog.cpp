#include "dialog.h"
#include "ui_dialog.h"

#include <QVBoxLayout>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QGridLayout *mainLayout = new QGridLayout(this);

}

Dialog::~Dialog()
{
    delete ui;
}
