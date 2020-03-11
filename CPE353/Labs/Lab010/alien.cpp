#include "alien.h"
#include <QPixmap>
#include <QLabel>

alien::alien()
{
    dx = 1.0;
    dy = 25.0;
    x = -XMAX/2 + 2*w;
    y = -YMAX/2 + 2*h;
    w = 200.0;
    h = 200.0;

    index = 0;

    pmaps[0] = QPixmap("/home/student/kd0066/353/Labs/Lab007/icons/jordan.png");
    pmaps[1] = QPixmap("/home/student/kd0066/353/Labs/Lab007/icons/jordan.png");
    pmaps[2] = QPixmap("/home/student/kd0066/353/Labs/Lab007/icons/jordan.png");
    pmaps[3] = QPixmap("/home/student/kd0066/353/Labs/Lab007/icons/jordan.png");
    pmaps[4] = QPixmap("/home/student/kd0066/353/Labs/Lab007/icons/jordan.png");
    pmaps[5] = QPixmap("/home/student/kd0066/353/Labs/Lab007/icons/jordan.png");
    pmaps[6] = QPixmap("/home/student/kd0066/353/Labs/Lab007/icons/jordan.png");
    pmaps[7] = QPixmap("/home/student/kd0066/353/Labs/Lab007/icons/jordan.png");

}

void alien::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    index = (index + 1) % 8;
    painter -> scale(.15, .15);
    painter -> drawPixmap(-w/2, -h/2, pmaps[index]);
}

QRectF alien::boundingRect() const {
    qreal adjust = 0.0;
    return QRectF(-w/2 - adjust, -h/2 - adjust, w + adjust, h + adjust);
}

QPainterPath alien::shape() const {
    QPainterPath path;
    path.addRect(-w/2, -h/2, w, h);
    return path;
}

void alien::advance(int step) {
    if (step == 0)
        return;

    QPointF currentlocation = scenePos();

    if (dx > 0) {
        if (currentlocation.x() <= XMAX/2 - w/2 - 2) {

        }
        else if (currentlocation.x() > XMAX/2 - w/2 - 2) {
            dx = dx * -1.00;
            y = currentlocation.y() + dy;
        }
        x = currentlocation.x() + dx;
    }
    else if (dx < 0) {
        if (currentlocation.x() > (-XMAX/2 + w/2)) {

        }
        else if (currentlocation.x() <= (-XMAX + w/2)) {
            dx = dx * -1.00;
            y = currentlocation.y() + dy;
        }
        x = currentlocation.x() + dx;
    }
    setPos(x, y);
}

