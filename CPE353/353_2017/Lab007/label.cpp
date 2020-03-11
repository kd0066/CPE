#include "label.h"

#include <QLabel>
#include <QMouseEvent>
#include <QMimeData>
#include <QImage>
#include <QDrag>
#include <QPixmap>
#include <QDragEnterEvent>
#include <QDropEvent>

Label::Label(const QString& path, QWidget *parent) : QLabel(parent)
{
    filename = path;
    this->setFixedSize(50, 50);
    setPixmap(QPixmap(filename));
}


void Label::mousePressEvent(QMouseEvent *event)
{
    if(event && event->button() == Qt::LeftButton)
    {
        QMimeData * md = new QMimeData;
        QImage pic(filename);
        md->setImageData(pic);

        QDrag *drag = new QDrag(this);
        drag->setMimeData(md);

        if(pixmap())
        {
            QSize s = this->sizeHint();
            drag->setPixmap(pixmap()->scaled(s));
        }
        drag->start();
    }
}

void Label::dragEnterEvent(QDragEnterEvent *event)
{
    if(event && event->mimeData())
    {
        const QMimeData * md = event->mimeData();

        if(md->hasImage())
        {
            event->acceptProposedAction();
        }
    }
}

void Label::dropEvent(QDropEvent *event)
{
    QPixmap pic;
    if(event && event->mimeData())
    {
        const QMimeData* md = event->mimeData();

        if(md->hasImage())
        {
            pic = md->imageData().value<QPixmap>();
        }
    }
    if(!pic.isNull())
    {
        setPixmap(pic);
    }
}
