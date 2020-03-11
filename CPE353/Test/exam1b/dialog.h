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

    Ui::Dialog *ui;   /* On this exam, the form pointer UI must remain a public member of Dialog */

public slots:
    void disable();
    void buttonText();
    void modalPart();
    void ticTac();
    void resetMe();
    void DialLabel1();
    void DialLabel2();

signals:
    void updateStatus(bool status);
};

#endif // DIALOG_H
