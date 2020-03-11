#include "mainwindow.h"
#include <QApplication>
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <QBrush>
#include <QRect>
#include <QPoint>
#include <QLine>
#include <QFont>
#include <QLabel>
#include <QHBoxLayout>
#include <QPushButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap myMap(400, 300);
    myMap.fill(Qt::black);

    QPainter p(&myMap);
    p.setRenderHint(QPainter::Antialiasing, true);

    p.setPen(QPen(Qt::red, 10, Qt::SolidLine, Qt::RoundCap));
    QPoint p1(200, 25);
    QPoint p2(200, 275);
    QPoint p3(50, 150);
    QPoint p4(350, 150);
    p.drawPoint(p1);
    p.drawPoint(p2);
    p.drawPoint(p3);
    p.drawPoint(p4);

    p.setPen(QPen(Qt::white, 5, Qt::SolidLine, Qt::RoundCap));
    QLine line1(p1, p2);
    QLine line2(p3, p4);
    p.drawLine(line1);
    p.drawLine(line2);

    p.setPen(QPen(Qt::blue, 10, Qt::SolidLine, Qt::FlatCap));
    QRect rect1(125, 75, 150, 150);
    p.drawEllipse(rect1);

    p.setPen(Qt::red);
    QPoint tp(300, 175);
    p.drawText(tp, "FIRE");

    p.setPen(Qt::green);
    p.drawArc(QRect(100, 50, 200, 200), 100*16, 90*16);
    p.drawArc(QRect(100, 50, 200, 200), 340*16, 90*16);
    p.drawArc(QRect(100, 50, 200, 200), 120*16, 30*16);
    p.drawArc(QRect(100, 50, 200, 200), 235*16, 30*16);

    QLabel mylabel;
    mylabel.setPixmap(myMap);
    mylabel.show();

    return a.exec();
}
