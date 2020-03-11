#ifndef ECHODIALOG_H
#define ECHODIALOG_H

#include <QDialog>
class QLabel;
class QLineEdit;
const int MAX = 30;

class EchoDialog : public QDialog
{
    Q_OBJECT

public:
    EchoDialog();

private:
    QLineEdit* userinputLineEditPtr;
    QLineEdit* echoLineEditPtr;
    QLabel* echolabelPtr;

    QPushButton* quitMe;
    QPushButton* clearMe;
};

#endif // ECHODIALOG_H
