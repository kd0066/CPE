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
    int num;

private:
    Ui::Dialog *ui;

public slots:
    void convertHex();
    void convertBinary();
    void convertOctal();
};

#endif // DIALOG_H
