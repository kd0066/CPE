#ifndef PART5_H
#define PART5_H

#include <QDialog>

namespace Ui {
class Part5;
}

class Part5 : public QDialog
{
    Q_OBJECT

public:
    explicit Part5(QWidget *parent = nullptr);
    ~Part5();

private:
    Ui::Part5 *ui;
};

#endif // PART5_H
