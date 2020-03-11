#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include <QQueue>
#include <QString>

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
    QQueue<QString> q;
    void showResult(QString& r);

public slots:
    void enqueue();
    void dequeue();
    void front();
    void rear();
    void size();
    void view();
    void clear();
};

#endif // DIALOG_H
