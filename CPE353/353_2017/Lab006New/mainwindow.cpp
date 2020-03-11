#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "label.h"
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            switch(col)
            {
                case 0: labels[row][col]    =   new Label(":/Images/p1.png"); break;
                case 1: labels[row][col]    =   new Label(":/Images/p2.png"); break;
                case 2: labels[row][col]    =   new Label(":/Images/p3.png"); break;
            }

            ui->gridLayout->addWidget(labels[row][col], row, col);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
