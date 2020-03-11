#include "dialog.h"
#include <QApplication>
#include <QtDebug>

void consoleWrite(QString s)
{
    qDebug() << "Message Received: " << s;
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Dialog w;
    w.show();
    QObject::connect(&w, &Dialog::mySignal, &consoleWrite);

    return a.exec();
}
