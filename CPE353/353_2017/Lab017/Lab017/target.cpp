#include "target.h"
#include <QGraphicsSceneMouseEvent>
#include <QTime>
#include <QCursor>
#include <QSqlQuery>
#include <QGraphicsScene>

target::target(qreal x, qreal y, qreal width, qreal height, QGraphicsEllipseItem * parent)
    : QGraphicsEllipseItem(x, y, width, height, parent)
{
    startPos = QCursor::pos();
    startTime = QTime::currentTime();
}

void target::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event && event->button() == Qt::LeftButton)
    {
        qreal elapsed = startTime.msecsTo(QTime::currentTime());

        endPos = event->screenPos();
        qreal dx = endPos.x() - startPos.x();
        qreal dy = endPos.y() - startPos.y();
        qreal distance = sqrt(dx * dx + dy * dy);
        qreal diameter = this->boundingRect().width();
        qreal logratio = log(distance/ diameter);
    }

    QSqlQuery q;
    q.prepare("INSERT INTO data VALUES( :elapsed, :distance, :diameter :logratio)");
    q.bindValue(":elapsed", elapsed);
    q.bindValue(":distance", distance);
    q.bindValue(":diameter", diameter);
    q.bindValue(":logratio", logratio);

    if(!q.exec())
    {
        exit(2);
    }
    this->scene()->removeItem(this); //??
    QGraphicsEllipseItem::mousePressEvent(event);
}
