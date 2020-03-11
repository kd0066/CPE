#ifndef TARGET_H
#define TARGET_H

#include <QGraphicsEllipseItem>
#include <QTime>
class target : QGraphicsEllipseItem
{
public:
    target(qreal, qreal, qreal, qreal, QGraphicsEllipseItem);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

private:
    QTime startTime;
    QPointF startPos;
    QPointF endPos;
};

#endif // TARGET_H
