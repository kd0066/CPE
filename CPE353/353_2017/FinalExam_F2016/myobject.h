#ifndef MYOBJECT_H
#define MYOBJECT_H
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPainter>

class myObject : public QGraphicsRectItem
{
public:
    myObject(QColor color, int x, int y, int w, int h);
    QRectF boundingRect() const;

private:
    double _w, _h, _x, _y, _dx, _dy;
};

#endif // MYOBJECT_H
