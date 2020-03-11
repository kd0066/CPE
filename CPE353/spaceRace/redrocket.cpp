#include "redrocket.h"
#include <QGraphicsItem>
#include <QPixmap>
#include <QLabel>

redRocket::redRocket(const QString& path, QWidget* parent) : QGraphicsItem(), QLabel (parent) {
    x=-1024/2;
    y=-768/2;
    w=80;
    h=80;
    index=0;
    offset=0;
    dx=0;
    dy=0;
    setPixmap(path);

}

QRectF redRocket::boundingRect() const {
    qreal adjust = 0.0;
    return QRectF(-w/2-adjust, -h/2-adjust, w+adjust, h+adjust);
}

void redRocket::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget=0) {
    index++;
    index = offset + (index % 3);
//    painter -> drawPixmap(-w/2, -h/2, pixmap()->scaled(80, 80));
}

void redRocket::advance(int phase) {
    if (phase == 0) {
        return;
    }
    else {
        this -> moveBy(dx,dy);
        QList<QGraphicsItem*> collisions = this->collidingItems();
        if (collisions.size()>0) {
            for(int i=0; i<collisions.size(); i++) {
                if(collisions.at(i)->pos() == wallpos) {
                    this->moveBy(-dx,-dy);
                    dy = 0;
                    dx = 0;
                }
            }
        }
    }
}

void redRocket::direction(QString dir)
{
    if(dir=="up")
    {
        offset=9;
        dx=0;
        dy=-5;
    }
    else if(dir=="left")
    {
        offset=3;
        dx=-5;
        dy=0;
    }
    else if(dir=="down")
    {
        offset=0;
        dx=0;
        dy=5;
    }
    else if(dir=="right")
    {
        offset=6;
        dx=5;
        dy=0;
    }
    else //dir==stop
    {
        dx=0;
        dy=0;
    }
}
