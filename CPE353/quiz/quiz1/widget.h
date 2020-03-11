#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:

    explicit Widget(QWidget *parent = nullptr);
    void printGo();
    void printStop();
    void printPause();
    ~Widget();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
