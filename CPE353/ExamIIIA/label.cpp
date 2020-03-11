#include "label.h"

Label::Label(QWidget * parent) : QLabel(parent)
{
    this -> setAcceptDrops(true);
}

void Label::mousePressEvent(QMouseEvent *event) {
    if (event && event -> button() == Qt::LeftButton) {
        QMimeData* md = new QMimeData;
        QDrag* drag = new QDrag(this);
        drag -> setMimeData(md);
        if (pixmap()) {
            md -> setImageData(this -> pixmap()-> toImage());
            drag -> setPixmap(pixmap() -> scaled(sizeHint()));
            drag -> start();
        }
        else if (this -> text() != "") {
            md -> setText(this -> text());
            drag -> setMimeData(md);
        }
        drag -> start();
    }
    QLabel::mousePressEvent(event);
}

void Label::dragEnterEvent(QDragEnterEvent *event) {
    if (event && event -> mimeData()) {
    const QMimeData* md = event -> mimeData();

        if (md -> hasImage()) {
            event -> acceptProposedAction();
        }
        else if (md -> hasText()) {
            event -> acceptProposedAction();
        }
    }
    QLabel::dragEnterEvent(event);
}

void Label::dropEvent(QDropEvent *event) {
    QPixmap pic;
    if (event && event -> mimeData()) {
    const QMimeData* md = event -> mimeData();

        if (md -> hasImage()) {
            pic = md -> imageData().value<QPixmap>();
            if (!pic.isNull()) {
                setPixmap(pic);
            }
        }

        else if (md -> hasText()) {
            setText(md -> text());
        }
    }
    QLabel::dropEvent(event);
}





