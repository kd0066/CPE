#ifndef LABEL_H
#define LABEL_H

#include <QLabel>

class Label : public QLabel
{
public:
    Label(const QString& path, QWidget* parent = 0);

protected:
    void mousePressEvent(QMouseEvent * event);
    void dragEnterEvent(QDragEnterEvent * event);
    void dropEvent(QDropEvent * event);

private:
    QString filename;
};

#endif // LABEL_H
