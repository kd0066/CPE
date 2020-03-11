#include "togglelabel.h"
#include <QEvent>
#include <QMouseEvent>
#include <QtDebug>

static int num = 0;

ToggleLabel::ToggleLabel(QWidget *parent) : QLabel(parent)
{
    setPixmap(pm[0]);
    setFrameShape(QFrame::WinPanel);
}

void ToggleLabel::mousePressEvent(QMouseEvent* event) {

    if  (event -> button() == Qt::RightButton) {
        num--;
        if(num == -1)
        {
            num = 9;
        }
        setPixmap(pm[num]);
    }

    else if  (event -> button() == Qt::LeftButton) {
        num++;
        if(num == 10)
        {
            num = 0;
        }
        setPixmap(pm[num]);
    }
    QLabel::mousePressEvent(event);
}

