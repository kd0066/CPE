#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QStack>

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
    QStack<QString> q;
    void showResult(QString& r);

public slots:
    void push();
    void pop();
    void top();
    void size();
    void view();
    void clear();


};

#endif // DIALOG_H
