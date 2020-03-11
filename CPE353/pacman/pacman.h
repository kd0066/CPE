#ifndef PACMAN_H
#define PACMAN_H
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QPainter>

class pacman : public QGraphicsRectItem
{
public:
    pacman(QColor color, int x, int y, int w, int h);
    QRectF boundingRect() const;

private:
    double _w, _h, _x, _y, _dx, _dy;
};

#endif // PACMAN_H
