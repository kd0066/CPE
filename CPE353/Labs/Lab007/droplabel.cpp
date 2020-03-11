#include "droplabel.h"
#include <QPixmap>

droplabel::droplabel(QWidget * parent) : QLabel(parent) {
    this -> setFrameStyle(QFrame::WinPanel);
    this -> setFixedSize(50, 50);
    setAcceptDrops(true);
}

void droplabel::dragEnterEvent(QDragEnterEvent *event) {
    if (event && event -> mimeData()) {
        const QMimeData* md = event -> mimeData();
        if (md -> hasImage()) {
            event -> acceptProposedAction();
        }
    }
}

void droplabel::dropEvent(QDropEvent *event) {
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
}
