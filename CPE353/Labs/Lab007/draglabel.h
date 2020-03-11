#ifndef DRAGLABEL_H
#define DRAGLABEL_H
#include <QLabel>


class draglabel : public QLabel {
    Q_OBJECT

public:
    draglabel(const QString& path, QWidget* parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent* event);

    void dragEnterEvent(QDragEnterEvent* event);
    void dropEvent(QDropEvent* event);

private:
    QString fileName;
};

#endif // DRAGLABEL_H
