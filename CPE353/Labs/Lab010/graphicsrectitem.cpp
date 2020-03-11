#include "graphicsrectitem.h"
#include "defs.h"

#include <QPen>
#include <QGraphicsScene>
#include <QList>

graphicsrectitem::graphicsrectitem(qreal x, qreal y, qreal width, qreal height, QGraphicsItem* parent) : QGraphicsRectItem(x, y, width, height, parent) {
    this -> setPen(QPen(Qt::blue));
    this -> setBrush(QBrush(Qt::blue));
    dy = -2.0;
}

void graphicsrectitem::advance(int phase) {
    qreal x = this -> scenePos().x();
    qreal y = this -> scenePos().y();
    if (phase == 0)
        return;

    if (!scene() -> collidingItems(this).isEmpty()) {
        this -> setPen(QPen(Qt::red));
        this -> setBrush(QBrush(Qt::red, Qt::SolidPattern));
    }
    else {
        this -> setPen(QPen(Qt::blue));
        this -> setBrush(QBrush(Qt::blue, Qt::SolidPattern));
    }
    this -> setRotation(this -> rotation() + 2.0);
    if (this -> scenePos().y() > -YMAX/2) {
        this -> setPos (x, y + dy);
    }
    else if(y <= -YMAX/2) {
            delete this;
    }
}
