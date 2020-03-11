//
// DO NOT MODIFY OR SUBMIT THIS FILE
//

#include "mainwindow.h"
#include <QApplication>
#include <QtDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("exam2b");
    w.show();

    return a.exec();
}


