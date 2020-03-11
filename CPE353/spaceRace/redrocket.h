#ifndef REDROCKET_H
#define REDROCKET_H

#include <QGraphicsItem>
#include <QRectF>
#include <QPixmap>
#include <QVector>
#include <QPainter>
#include <QGraphicsScene>
#include <QLabel>


class redRocket : public QGraphicsItem, public QLabel
{
public:
    redRocket(const QString& path, QWidget* parent = nullptr);
    QRectF boundingRect() const;
    void advance(int);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void direction(QString);

private:
//    QPixmap rocket;
    qreal x,y,w,h;
    qreal dx, dy;
    int offset;
    int index;
    QPointF wallpos;

signals:
    void collision();
};

#endif // REDROCKET_H
