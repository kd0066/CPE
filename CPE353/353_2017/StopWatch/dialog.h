#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

protected:
    void timerEvent(QTimerEvent *someEvent);

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    int updateTimer;
    bool paused;

private slots:
    void initiateTimer();
    void pauseTimer();
    void clearTimer();
};

#endif // DIALOG_H
