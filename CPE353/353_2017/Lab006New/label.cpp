#include "label.h"

#include <QLabel>
#include <QMouseEvent>
#include <QMimeData>
#include <QImage>
#include <QDrag>
#include <QPixmap>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QDebug>

Label::Label(const QString& path, QWidget *parent) : QLabel(parent)
{
    this->setFixedSize(50, 50);
    filename = path;    
    setPixmap(QPixmap(filename));
    this->setAcceptDrops(true);
}


void Label::mousePressEvent(QMouseEvent *event)
{
    if(event && event->button() == Qt::LeftButton)
    {
        QMimeData * md = new QMimeData;        
        md->setImageData(*this->pixmap());

        QDrag *drag = new QDrag(this);
        drag->setMimeData(md);

        if(pixmap())
        {            
            drag->start();
        }        
    }
    QLabel::mousePressEvent(event);
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
    QLabel::dragEnterEvent(event);
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

        if(!pic.isNull())
        {
            setPixmap(pic);
        }
    }
    QLabel::dropEvent(event);
}
