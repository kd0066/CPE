#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui -> pushButton_8, SIGNAL(clicked()), this, SLOT(accept()));
    connect(ui -> pushButton, SIGNAL(clicked()), this, SLOT(push()));
    connect(ui -> pushButton_4, SIGNAL(clicked()), this, SLOT(pop()));
    connect(ui -> pushButton_2, SIGNAL(clicked()), this, SLOT(top()));
    connect(ui -> pushButton_5, SIGNAL(clicked()), this, SLOT(size()));
    connect(ui -> pushButton_6, SIGNAL(clicked()), this, SLOT(view()));
    connect(ui -> pushButton_7, SIGNAL(clicked()), this, SLOT(clear()));
}

void Dialog::push() {
    QString temp = ui -> lineEdit -> text();
    ui -> lineEdit -> clear();

    bool work;
    temp.toInt(&work, 10);
    if (work) {
        q.push(temp);
    }

}
void Dialog::pop() {
    QString temp = "Popped = ";

    if (!q.empty()) {
        temp.append(q.pop());
    }
    else {
        temp.append("Empty");
    }
    showResult(temp);

}
void Dialog::top() {
    QString temp = "Top = ";

    if (!q.empty()) {
        temp.append(q.top());
    }
    else {
        temp.append("Empty");
    }
    showResult(temp);
}

void Dialog::size() {
    QString temp = "Stack Size = ";
    temp.append(QString::number(q.size()));
    showResult(temp);
}
void Dialog::view() {
    QString temp = "[ ";
    int n = q.size();
    for (int i = 0; i < n; i++) {
        temp.append(q[i]);
        temp.append(", ");
    }
    temp.append("]");
    showResult(temp);
}
void Dialog::clear() {
    q.clear();
}

void Dialog::showResult(QString &r) {
    QDialog* dialog = new QDialog;
    QVBoxLayout* layout = new QVBoxLayout;
    QPushButton* button = new QPushButton("Close");
    QLabel* label = new QLabel(r);
    dialog -> setLayout(layout);
    layout -> addWidget(label);
    layout -> addWidget(button);
    connect(button, SIGNAL(clicked()), dialog, SLOT(accept()));
    dialog -> exec();
}

Dialog::~Dialog()
{
    delete ui;
}
