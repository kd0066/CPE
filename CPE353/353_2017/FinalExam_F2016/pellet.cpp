#include "pellet.h"

pellet::pellet(QColor color, int x, int y, int w, int h, int dx, int dy) : QGraphicsEllipseItem(x,y,w,h)
{
    this->_x = x;
    this->_y = y;
    this->_w = w;
    this->_h = h;
    this->_dx = dx;
    this->_dy = dy;

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

void pellet::advance(int step)
{

    if (step == 0)
        return;

    _x = this->pos().rx();
    _y = this->pos().ry();

    QList<QGraphicsItem*> collision = this->collidingItems();
    if(collision.size() > 0)
    {
        _dx *= -1;
        _dy *= -1;
    }

    _x += _dx;
    _y += _dy;

   setPos(_x, _y);
}
/*
for(int f=0; f<this->_walls.size(); f++){
 if(this->_pellets.at(i)->collidesWithItem(this->_walls.at(f))){
     this->_pellets.at(i)->_x -= this->_pellets.at(i)->_dx;
     this->_pellets.at(i)->_y -= this->_pellets.at(i)->_dy;
 }
}
*/
