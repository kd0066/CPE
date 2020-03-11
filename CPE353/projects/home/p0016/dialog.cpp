#include "dialog.h"
#include "ui_dialog.h"
#include <QKeyEvent>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui -> textEdit -> installEventFilter(this);
}

bool Dialog::eventFilter(QObject* watched, QEvent *event) {
    QKeyEvent* key = static_cast<QKeyEvent*>(event);
    if (!watched || !event) return QDialog::eventFilter(watched, event);
    if (watched == ui -> textEdit && event -> type() == QEvent::KeyPress) {
        switch(key -> key()) {
            case Qt::Key_0:
            case Qt::Key_1:
            case Qt::Key_2:
            case Qt::Key_3:
            case Qt::Key_4:
            case Qt::Key_5:
            case Qt::Key_6:
            case Qt::Key_7:
            case Qt::Key_8:
            case Qt::Key_9:         ui -> textBrowser -> append(key -> text());
                                    break;
            case Qt::Key_Enter:
            case Qt::Key_Return:    ui -> textEdit -> clear();
                                    return true;
        }
    }
    return QDialog::eventFilter(watched, event);
}

Dialog::~Dialog()
{
    delete ui;
}
