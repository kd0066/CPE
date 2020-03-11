#include "pellet.h"

pellet::pellet(QColor color, int x, int y, int w, int h) : QGraphicsRectItem(x,y,w,h)
{
    this->_x = x;
    this->_y = y;
    this->_w = w;
    this->_h = h;

    setBrush(QBrush(color));
}

QRectF pellet::boundingRect() const
{
    qreal adjust = 1.0;
    return QRectF(-this->_w/2 - adjust, -this->_h/2 - adjust, this->_w + adjust, this->_h + adjust);
}

QPainterPath pellet::shape() const
{
    QPainterPath path;
    path.addRect(-this->_w/2, -this->_h/2, this->_w, this->_h);
    return path;
}
