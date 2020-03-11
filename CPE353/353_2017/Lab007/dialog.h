#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "label.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
