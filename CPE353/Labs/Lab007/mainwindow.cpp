#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "draglabel.h"
#include "droplabel.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui ->setupUi(this);

    QString path1 = "/home/student/kd0066/353/Labs/Lab007/icons/David_Coe.jpg";
    QString path2 = "/home/student/kd0066/353/Labs/Lab007/icons/ho.jpg";
    QString path3 = "/home/student/kd0066/353/Labs/Lab007/icons/am.jpg";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            switch (c) {
                case 0: label[r][c] = new draglabel(path1, this); break;
                case 1: label[r][c] = new draglabel(path2, this); break;
                case 2: label[r][c] = new draglabel(path3, this); break;
            }
            ui -> gridLayout -> addWidget(label[r][c], r, c);
        }
    }
    connect(ui -> pushButton, SIGNAL(clicked()), this, SLOT(reset()));
}

void MainWindow::reset() {
    QString path1 = "/home/student/kd0066/353/Labs/Lab007/icons/David_Coe.jpg";
    QString path2 = "/home/student/kd0066/353/Labs/Lab007/icons/ho.jpg";
    QString path3 = "/home/student/kd0066/353/Labs/Lab007/icons/am.jpg";
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            switch (c) {
                case 0: label[r][c] = new draglabel(path1, this); break;
                case 1: label[r][c] = new draglabel(path2, this); break;
                case 2: label[r][c] = new draglabel(path3, this); break;
            }
            ui -> gridLayout -> addWidget(label[r][c], r, c);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
