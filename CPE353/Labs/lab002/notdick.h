#ifndef NOTDICK_H
#define NOTDICK_H

#include <QDialog>

namespace Ui {
class notDick;
}

class notDick : public QDialog
{
    Q_OBJECT

public:
    explicit notDick(QWidget *parent = nullptr);
    ~notDick();

private:
    Ui::notDick *ui;
};

#endif // NOTDICK_H
