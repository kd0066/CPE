#ifndef PELLET_H
#define PELLET_H

#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QPainter>


class pellet : public QGraphicsRectItem
{
public:
    pellet(QColor color, int x, int y, int w, int h);
    QRectF boundingRect() const;
    QPainterPath shape() const;
    void rotateMe(qreal rot);

private:
    double _w, _h, _x, _y, _dx, _dy;
};

#endif // PELLET_H
