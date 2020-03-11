#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QStringListModel>

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
    bool eventFilter(QObject* watched, QEvent *event);
};

#endif // DIALOG_H
