#include "draglabel.h"
#include <QPixmap>
#include <QMouseEvent>
#include <QImage>
#include <QMimeData>
#include <QDrag>

draglabel::draglabel(const QString& path, QWidget* parent) : QLabel (parent) {

    this -> setFixedSize(200,200);
    fileName = path;
    QSize s(200,200);
    setPixmap(QPixmap(path));
    setPixmap(pixmap() -> scaled(s));
    this -> setAcceptDrops(true);
}

void draglabel::mousePressEvent(QMouseEvent *event) {
    if (event && event -> button() == Qt::LeftButton) {
        QMimeData* md = new QMimeData;
        md -> setImageData(*this -> pixmap());
        QDrag* drag = new QDrag(this);
        drag -> setMimeData(md);
        if (pixmap()) {
            QSize s(200,200);
            drag -> setPixmap(pixmap() -> scaled(s));
            drag -> start();
        }
    }
    QLabel::mousePressEvent(event);
}

void draglabel::dragEnterEvent(QDragEnterEvent *event) {
    if (event && event -> mimeData()) {
    const QMimeData* md = event -> mimeData();

        if (md -> hasImage()) {
            event -> acceptProposedAction();
        }
    }
    QLabel::dragEnterEvent(event);
}

void draglabel::dropEvent(QDropEvent *event) {
    QPixmap pic;
    if (event && event -> mimeData()) {
    const QMimeData* md = event -> mimeData();

        if (md -> hasImage()) {
            pic = md -> imageData().value<QPixmap>();
        }
        if (!pic.isNull()) {
            setPixmap(pic);
        }
    }
    QLabel::dropEvent(event);
}
