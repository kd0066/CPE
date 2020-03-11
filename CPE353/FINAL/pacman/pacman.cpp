#include "pacman.h"
pacman::pacman(QColor color, int x, int y, int w, int h) : QGraphicsRectItem (x, y, w, h) {
    dx=0;
    dy=0;

    wallpos.setX(0);
    wallpos.setY(0);
    setBrush(color);

    item = new QGraphicsRectItem(-15, -15, 30, 30);
}

QRectF pacman::boundingRect() const {
    return QRectF(-15, -15, 30, 30);
}

void pacman::advance(int phase) {
    if (phase == 0) {
        return;
    }
    else {
        this->moveBy(dx,dy);
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

void pacman::direction(QString dir) {
    if (dir == "up") {
        dx = 0;
        dy = -5;
    }
    else if (dir == "down") {
        dx = 0;
        dy = 5;
    }
    else if (dir == "left") {
        dx = -5;
        dy = 0;
    }
    else if (dir == "right") {
        dx = 5;
        dy = 0;
    }
    else {
        dy = 0;
        dx = 0;
    }
}
