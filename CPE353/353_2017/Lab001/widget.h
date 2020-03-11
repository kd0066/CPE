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
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;

private slots:
    void toolButtonPressed(void);
    void goButtonPressed(void);
    void pauseButtonPress(void);
    void stopButtonPressed(void);


#endif // WIDGET_H
