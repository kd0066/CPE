#ifndef GRAPHICSRECTITEM_H
#define GRAPHICSRECTITEM_H

#include <QGraphicsRectItem>


class graphicsrectitem : public QGraphicsRectItem {
public:
    graphicsrectitem(qreal x, qreal y, qreal width, qreal height, QGraphicsItem* parent = nullptr);

protected:
    void advance(int phase);

private:
    qreal dy;


};

#endif // GRAPHICSRECTITEM_H
