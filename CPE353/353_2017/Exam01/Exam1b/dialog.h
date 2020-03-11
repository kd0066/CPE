#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void toggleUpAndDown(void);
    void updateDial(void);
    void updateSlider(void);
    void updateQt4Spin(void);
    void updateQt5Spin(void);
    void updateSumLabel(void);
    void modalCheerButtonPressed(void);
    void emitButtonPressed(void);
    void sendMessage(QString message);

private:
    Ui::Dialog *ui;

signals:
    void mySignal(QString s);
};

#endif // DIALOG_H
