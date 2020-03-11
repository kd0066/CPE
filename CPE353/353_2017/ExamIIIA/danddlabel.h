#ifndef DANDDLABEL_H
#define DANDDLABEL_H
#include <QLabel>

class DAndDLabel : public QLabel
{
public:
    DAndDLabel(QString string);

private:
    void mousePressEvent(QMouseEvent *event);
    void dropEvent(QDropEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);
};

#endif // DANDDLABEL_H
