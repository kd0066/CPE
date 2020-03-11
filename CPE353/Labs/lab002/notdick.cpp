#include "notdick.h"
#include "ui_notdick.h"

notDick::notDick(QWidget *parent) : QDialog(parent), ui(new Ui::notDick) {
    ui->setupUi(this);
    connect(ui -> closeMe, SIGNAL(clicked()), this, SLOT(accept()));
}

notDick::~notDick() {
    delete ui;
}
