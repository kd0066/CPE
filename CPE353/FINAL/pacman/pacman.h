#ifndef PACMAN_H
#define PACMAN_H

#include <QGraphicsItem>
#include <QRectF>
#include <QPixmap>
#include <QVector>
#include <QPainter>
#include <QGraphicsScene>

class pacman : public QGraphicsRectItem
{
public:
    pacman(QColor color, int x, int y, int w, int h);
    QRectF boundingRect() const;
    void advance(int);
    void direction(QString);

private:
    qreal dx, dy;
    int offset;
    int index;
    QPointF wallpos;
    double _w, _h, _x, _y, _dx, _dy;
    QGraphicsRectItem* item;

signals:
    void collision();
};

#endif // PACMAN_H
