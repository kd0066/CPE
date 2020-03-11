#include <QApplication>
#include "echodialog.h"

int main(int argc, char *argv[])
{
    QApplication myApp(argc, argv);

    EchoDialog myDialog;
    myDialog.show();

    return myApp.exec();
}
