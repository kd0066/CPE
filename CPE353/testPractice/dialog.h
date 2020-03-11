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
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;

public slots:
    void setDown();
    void part2();
    void part2b();
    void part3();
    void part3b();
    void part4();
    void part5();
    void printMe();
    void iLikeTurtles();

};

#endif // DIALOG_H
