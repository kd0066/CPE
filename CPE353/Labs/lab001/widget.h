#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

public slots:
    void printGo();
    void printStop();
    void printPause();
    void printTool();
    void radioThing();
    void printMe(QString);
};

#endif // WIDGET_H
